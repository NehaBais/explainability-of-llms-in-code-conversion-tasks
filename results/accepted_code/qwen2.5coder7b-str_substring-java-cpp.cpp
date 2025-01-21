#include <clocale>
#include <codecvt>
#include <iostream>
#include <string>

// Helper function to convert std::u32string to std::string (UTF-8)
std::string u32string_to_utf8(const std::u32string &u32str) {
  return std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t>().to_bytes(
      u32str);
}

// Helper function to convert std::string (UTF-8) to std::u32string
std::u32string utf8_to_u32string(const std::string &str) {
  return std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t>()
      .from_bytes(str);
}

// Function to get the length of a string in terms of code points
size_t u32strlen(const std::u32string &u32str) { return u32str.length(); }

// Function to find the index of a character in a UTF-32 string
size_t find_code_point_index(const std::u32string &u32str, char32_t ch) {
  for (size_t i = 0; i < u32strlen(u32str); ++i) {
    if (u32str[i] == ch)
      return i;
  }
  throw std::runtime_error("Character not found");
}

// Function to find the index of a substring in a UTF-32 string
size_t find_substring_index(const std::u32string &u32str,
                            const std::u32string &sub) {
  size_t pos = u32str.find(sub);
  if (pos == std::u32string::npos)
    throw std::runtime_error("Substring not found");
  return pos;
}

// Function to get a substring from a UTF-32 string
std::u32string substring(const std::u32string &u32str, size_t n,
                         size_t m = std::u32string::npos) {
  if (n >= u32strlen(u32str))
    throw std::out_of_range("Index out of range");
  if (m == std::u32string::npos)
    return u32str.substr(n);
  else
    return u32str.substr(n, m);
}

int main() {
  setlocale(LC_ALL, "en_US.UTF-8");

  std::string utf8_str = "Hello, 世界!";
  std::u32string u32str = utf8_to_u32string(utf8_str);

  // Display a substring:
  -starting from n characters in and of m length std::cout
      << u32string_to_utf8(substring(u32str, 7, 6)) << std::endl;

  // starting from n characters in, up to the end of the string
  std::cout << u32string_to_utf8(substring(u32str, 7)) << std::endl;

  // whole string minus the last character
  std::cout << u32string_to_utf8(substring(u32str, 0, -1)) << std::endl;

  // starting from a known character within the string and of m length
  char32_t ch = '世';
  size_t start_index = find_code_point_index(u32str, ch);
  std::cout << u32string_to_utf8(substring(u32str, start_index, 3))
            << std::endl;

  // starting from a known substring within the string and of m length
  std::u32string sub = "世界";
  size_t start_sub_index = find_substring_index(u32str, sub);
  std::cout << u32string_to_utf8(substring(u32str, start_sub_index, 5))
            << std::endl;

  return 0;
}