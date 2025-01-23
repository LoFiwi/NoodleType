#include <curl/curl.h>
#include <iostream>
#include <string>

// Функція для обробки відповіді від API
size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* userp) {
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

class TypingTestAPI {
public:
    TypingTestAPI() {
        curl_global_init(CURL_GLOBAL_DEFAULT);
        curl = curl_easy_init();
    }

    ~TypingTestAPI() {
        if (curl) {
            curl_easy_cleanup(curl);
        }
        curl_global_cleanup();
    }

    bool sendTypingTest(const std::string& url, const std::string& text, std::string& output) {
        if (!curl) {
            std::cerr << "CURL initialization failed!" << std::endl;
            return false;
        }

        // Додавання параметрів POST запиту
        struct curl_slist *headers = NULL;
        headers = curl_slist_append(headers, "Content-Type: application/json");

        // Створюємо JSON дані для тесту
        std::string json_data = "{\"text\":\"" + text + "\"}";

        // Налаштування CURL для POST запиту
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, json_data.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &output);

        CURLcode res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            std::cerr << "CURL error: " << curl_easy_strerror(res) << std::endl;
            return false;
        }
        return true;
    }

private:
    CURL* curl;
};

int main() {
    TypingTestAPI api;
    std::string output;

    // Приклад API URL для тесту
    std::string url = "https://www.typingtest.com/"; // Замініть на реальний URL
    std::string text = "The quick brown fox jumps over the lazy dog.";

    if (api.sendTypingTest(url, text, output)) {
        std::cout << "Typing Test Result: " << output << std::endl;
    } else {
        std::cerr << "Failed to send data to Typing Test API" << std::endl;
    }

    return 0;
}
