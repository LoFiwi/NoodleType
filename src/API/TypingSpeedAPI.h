#pragma once
#include <string>
#include <chrono>
#include <curl/curl.h>

class TypingSpeedAPI {
public:
    struct TestResults {
        double wpm;
        double accuracy;
        double elapsedTime;
    };

    TypingSpeedAPI();
    ~TypingSpeedAPI();

    void startTest();
    bool isActive() const;
    const std::string& getCurrentText() const;
    TestResults calculateResults(const char* inputText);
    void reset();

private:
    static size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* userp);
    
    std::string currentText;
    std::string sampleText;
    bool isTestActive;
    std::chrono::steady_clock::time_point startTime;
};