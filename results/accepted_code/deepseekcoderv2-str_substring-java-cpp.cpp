#include <iostream>
#include <string>

// Function to get a substring starting from index n and of length m
std::string Substring(const std::string &str, int n, int m) {
  return str.substr(n, m);
}

// Function to get a substring starting from index n until the end of the string
std::string Substring(const std::string &str, int n) { return str.substr(n); }

// Function to get a substring excluding the last character
std::string Substring(const std::string &str) {
  if (str.empty())
    return "";
  return str.substr(0, str.length() - 1);
}

// Function to get a substring starting from a known character within the string
// and of length m
std::string Substring(const std::string &str, char c, int m) {
  size_t pos = str.find(c);
  if (pos != std::string::npos) {
    return str.substr(pos, m + 1);
  }
  return "";
}

// Function to get a substring starting from a known substring within the string
// and of length m
std::string Substring(const std::string &str, const std::string &sub, int m) {
  size_t pos = str.find(sub);
  if (pos != std::string::npos) {
    return str.substr(pos, m + 1);
  }
  return "";
}

int main() {
  // Test cases
  std::string testStr = "Hello, World!";
  std::cout << Substring(testStr, 7, 5) << std::endl; // Output: "World"
  std::cout << Substring(testStr, 7) << std::endl;    // Output: "World!"
  std::cout << Substring(testStr) << std::endl;       // Output: "Hello, World"
  std::cout << Substring(testStr, 'W', 5) << std::endl;     // Output: "World!"
  std::cout << Substring(testStr, "World", 5) << std::endl; // Output: "World!"

  return 0;
}