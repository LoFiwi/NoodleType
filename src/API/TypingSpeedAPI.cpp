#include "TypingSpeedAPI.h"
#include <algorithm>

size_t TypingSpeedAPI::WriteCallback(void* contents, size_t size, size_t nmemb, std::string* userp) {
    userp->append((char*)contents, size * nmemb);
    return size * nmemb;
}


TypingSpeedAPI::TypingSpeedAPI() : isTestActive(false) {
    curl_global_init(CURL_GLOBAL_DEFAULT);
    // Temporary text until the real API is connected
    sampleText = "Fast typing allows you to save time and increase productivity. It is important not only to press the keys quickly but also to maintain accuracy. Regular practice will help develop muscle memory and make typing an intuitive process.";
}

TypingSpeedAPI::~TypingSpeedAPI() {
    curl_global_cleanup();
}

void TypingSpeedAPI::startTest() {
    isTestActive = true;
    startTime = std::chrono::steady_clock::now();
}

bool TypingSpeedAPI::isActive() const {
    return isTestActive;
}

const std::string& TypingSpeedAPI::getCurrentText() const {
    return sampleText;
}

TypingSpeedAPI::TestResults TypingSpeedAPI::calculateResults(const char* inputText) {
    TestResults results = {0.0, 0.0, 0.0};
    if (!isTestActive) return results;

    std::string input(inputText);
    auto currentTime = std::chrono::steady_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::duration<double>>(currentTime - startTime);
    
    results.elapsedTime = elapsed.count();
    
    // Accuracy calculation
    int correctChars = 0;
    int minLength = std::min(input.length(), sampleText.length());
    for (int i = 0; i < minLength; i++) {
        if (input[i] == sampleText[i]) correctChars++;
    }
    results.accuracy = minLength > 0 ? (correctChars * 100.0) / minLength : 0.0;
    
    // calculate WPM
    double minutes = results.elapsedTime / 60.0;
    results.wpm = minutes > 0 ? (input.length() / 5.0) / minutes : 0.0;
    
    return results;
}

void TypingSpeedAPI::reset() {
    isTestActive = false;
}