#include <iostream>
#include <string>

int main() {
  std::string str1 = "abcd";
  std::string str2 = "ab";

  // Check if the first string starts with second string
  if (str1.substr(0, str2.size()) == str2)
    std::cout << str1 << ".startsWith(" << str2 << ") //returns true"
              << std::endl;
  else
    std::cout << str1 << ".startsWith(" << str2 << ") //returns false"
              << std::endl;

  // Check if the first string ends with second string
  if (str1.substr(str1.size() - str2.size()) == str2)
    std::cout << str1 << ".endsWith(" << str2 << ") //returns true"
              << std::endl;
  else
    std::cout << str1 << ".endsWith(" << str2 << ") //returns false"
              << std::endl;

  // Check if the first string contains the second string
  size_t pos = str1.find(str2);
  if (pos != std::string::npos)
    std::cout << str1 << ".contains(" << str2 << ") //returns true"
              << std::endl;
  else
    std::cout << str1 << ".contains(" << str2 << ") //returns false"
              << std::endl;

  std::string str3 = "abab";
  std::string str4 = "ab";

  // Print the location of the match for part 2
  pos = str3.find(str4);
  if (pos != std::string::npos) {
    std::cout << "loc = " << str3 << ".indexOf(" << str4 << ") //returns "
              << pos << std::endl;

    // Handle multiple occurrences of a string for part 2
    while ((pos = str3.find(str4, pos + 1)) != std::string::npos)
      std::cout << "loc = " << str3 << ".indexOf(" << str4
                << ",loc+1) //returns " << pos << std::endl;
  }

  return 0;
}