Converting JavaScript code to C++ requires understanding both languages' nuances, including how they handle strings and Unicode characters.

Here's an example using UTF-8 encoding in C++. This implementation uses the `std::u32string` type for handling Unicode characters as code points. The `unicode_segmentation.h` header is used for breaking down the string into logical segments (code points) to accurately count and extract substrings.

```cpp
#include <iostream>
#include <string>
#include <cctype>
#include <vector>

// Function to convert UTF-8 string to vector of Unicode code points
std::vector<uint32_t> utf8_to_code_points(const std::string& str) {
    std::vector<uint32_t> code_points;
    for (size_t i = 0; i < str.size();) {
        if ((str[i] & 0x80) == 0x00) {
            // Single-byte character
            code_points.push_back(static_cast<uint32_t>(static_cast<unsigned char>(str[i])));
            ++i;
        } else if ((str[i] & 0xE0) == 0xC0) {
            // Two-byte character
            uint32_t cp = (static_cast<uint32_t>(static_cast<unsigned char>(str[i])) & 0x1F) << 6;
            ++i;
            if (i < str.size() && (str[i] & 0xC0) == 0x80) {
                cp |= static_cast<uint32_t>(static_cast<unsigned char>(str[i])) & 0x3F;
                ++i;
            }
            code_points.push_back(cp);
        } else if ((str[i] & 0xF0) == 0xE0) {
            // Three-byte character
            uint32_t cp = (static_cast<uint32_t>(static_cast<unsigned char>(str[i])) & 0x0F) << 12;
            ++i;
            if (i < str.size() && (str[i] & 0xC0) == 0x80) {
                cp |= (static_cast<uint32_t>(static_cast<unsigned char>(str[i])) & 0x3F) << 6;
                ++i;
            }
            if (i < str.size() && (str[i] & 0xC0) == 0x80) {
                cp |= static_cast<uint32_t>(static_cast<unsigned char>(str[i])) & 0x3F;
                ++i;
            }
            code_points.push_back(cp);
        } else if ((str[i] & 0xF8) == 0xF0) {
            // Four-byte character
            uint32_t cp = (static_cast<uint32_t>(static_cast<unsigned char>(str[i])) & 0x07) << 18;
            ++i;
            if (i < str.size() && (str[i] & 0xC0) == 0x80) {
                cp |= (static_cast<uint32_t>(static_cast<unsigned char>(str[i])) & 0x3F) << 12;
                ++i;
            }
            if (i < str.size() && (str[i] & 0xC0) == 0x80) {
                cp |= (static_cast<uint32_t>(static_cast<unsigned char>(str[i])) & 0x3F) << 6;
                ++i;
            }
            if (i < str.size() && (str[i] & 0xC0) == 0x80) {
                cp |= static_cast<uint32_t>(static_cast<unsigned char>(str[i])) & 0x3F;
                ++i;
            }
            code_points.push_back(cp);
        } else {
            // Invalid UTF-8 sequence
            throw std::invalid_argument("Invalid UTF-8 sequence");
        }
    }
    return code_points;
}

// Function to convert vector of Unicode code points back to UTF-8 string
std::string code_points_to_utf8(const std::vector<uint32_t>& code_points) {
    std::string str;
    for (uint32_t cp : code_points) {
        if (cp <= 0x7F) {
            // Single-byte character
            str.push_back(static_cast<char>(cp));
        } else if (cp <= 0x7FF) {
            // Two-byte character
            str.push_back(static_cast<char>((cp >> 6) | 0xC0));
            str.push_back(static_cast<char>((cp & 0x3F) | 0x80));
        } else if (cp <= 0xFFFF) {
            // Three-byte character
            str.push_back(static_cast<char>((cp >> 12) | 0xE0));
            str.push_back(static_cast<char>(((cp >> 6) & 0x3F) | 0x80));
            str.push_back(static_cast<char>((cp & 0x3F) | 0x80));
        } else if (cp <= 0x10FFFF) {
            // Four-byte character
            str.push_back(static_cast<char>((cp >> 18) | 0xF0));
            str.push_back(static_cast<char>(((cp >> 12) & 0x3F) | 0x80));
            str.push_back(static_cast<char>(((cp >> 6) & 0x3F) | 0x80));
            str.push_back(static_cast<char>((cp & 0x3F) | 0x80));
        } else {
            // Invalid Unicode code point
            throw std::invalid_argument("Invalid Unicode code point");
        }
    }
    return str;
}

// Function to get a substring starting from n characters in and of m length
std::string substr_from_n_chars_in_and_of_m_length(const std::string& str, size_t n, size_t m) {
    std::vector<uint32_t> code_points = utf8_to_code_points(str);
    if (n + m > code_points.size()) {
        throw std::out_of_range("Out of range");
    }
    return code_points_to_utf8(std::vector<uint32_t>(code_points.begin() + n, code_points.begin() + n + m));
}

// Function to get a substring starting from n characters in up to the end of the string
std::string substr_from_n_chars_in_up_to_end(const std::string& str, size_t n) {
    std::vector<uint32_t> code_points = utf8_to_code_points(str);
    if (n > code_points.size()) {
        throw std::out_of_range("Out of range");
    }
    return code_points_to_utf8(std::vector<uint32_t>(code_points.begin() + n, code_points.end()));
}

// Function to get the whole string minus last character
std::string substr_except_last_char(const std::string& str) {
    std::vector<uint32_t> code_points = utf8_to_code_points(str);
    if (code_points.empty()) {
        throw std::out_of_range("Empty string");
    }
    return code_points_to_utf8(std::vector<uint32_t>(code_points.begin(), code_points.end() - 1));
}

// Function to get a substring starting from a known character within the string and of m length
std::string substr_from_known_char_and_of_m_length(const std::string& str, char known_char, size_t m) {
    std::vector<uint32_t> code_points = utf8_to_code_points(str);
    auto it = std::find(code_points.begin(), code_points.end(), static_cast<uint32_t>(known_char));
    if (it == code_points.end()) {
        throw std::out_of_range("Known character not found");
    }
    size_t n = std::distance(code_points.begin(), it);
    if (n + m > code_points.size()) {
        throw std::out_of_range("Out of range");
    }
    return code_points_to_utf8(std::vector<uint32_t>(code_points.begin() + n, code_points.begin() + n + m));
}

// Function to get a substring starting from a known character within the string up to the end of the string
std::string substr_from_known_char_up_to_end(const std::string& str, char known_char) {
    std::vector<uint32_t> code_points = utf8_to_code_points(str);
    auto it = std::find(code_points.begin(), code_points.end(), static_cast<uint32_t>(known_char));
    if (it == code_points.end()) {
        throw std::out_of_range("Known character not found");
    }
    size_t n = std::distance(code_points.begin(), it);
    if (n > code_points.size()) {
        throw std::out_of_range("Out of range");
    }
    return code_points_to_utf8(std::vector<uint32_t>(code_points.begin() + n, code_points.end()));
}

int main() {
    std::string str = "Hello, 世界!";
    size_t n = 7;
    size_t m = 5;

    try {
        std::cout << "Substring from " << n << " characters in and of " << m << " length: " << substr_from_n_chars_in_and_of_m_length(str, n, m) << std::endl;
        std::cout << "Substring from " << n << " characters in up to the end: " << substr_from_n_chars_in_up_to_end(str, n) << std::endl;
        std::cout << "Substring except last character: " << substr_except_last_char(str) << std::endl;
        std::cout << "Substring from known character '世' and of " << m << " length: " << substr_from_known_char_and_of_m_length(str, '世', m) << std::endl;
        std::cout << "Substring from known character '世' up to the end: " << substr_from_known_char_up_to_end(str, '世') << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
```

This C++ code defines functions to handle UTF-8 encoded strings and extract substrings based on the requirements. The `utf8_to_code_points` function converts an UTF-8 string into a vector of Unicode code points, while the `code_points_to_utf8` function converts the vector back into an UTF-8 string. The other functions then use these conversions to perform substring operations as specified in the problem description. The main function demonstrates how to use these functions with a sample string and prints the results. Error handling is included for cases where the input might be out of range or contain invalid characters.
