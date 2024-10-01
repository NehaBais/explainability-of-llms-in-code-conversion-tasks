#include <iostream>
#include <string>

int main() {

  // Declare and initialize two std::string objects
  std::string str1 = "abcd";
  std::string str2 = "ab";

  // Check for the first type of string matching (Java method startsWith())
  bool checkStartsWith = str1.compare(0, 2, str2) == 0;
  std::cout << "\"abcd\".startsWith(\"ab\")) //returns " << std::boolalpha
            << checkStartsWith << "]\n";

  // Check for the third type of string matching (Java method endsWith())
  str2 = "zn";
    checkStartsWith = str1.compare(str1.length()-str2.length(), str2.length(), str2)) == 0;
    std::cout << "\"abcd\".endsWith(\"zn\")) //returns [" << std::boolalpha
              << checkStartsWith << "]]\n";

    // Check for the second type of string matching (Java method contains())
    str1 = "abab";
    str2 = "bb";
    checkStartsWith = str1.find(str2) != std::string::npos;
    std::cout << "\"abab\".contains(\"bb\")) //returns [" << std::boolalpha
              << checkStartsWith << "]]\n";

    // Optional requirements handling
    int loc = -1;
    loc = str1.find("ab",loc+1));
    std::cout << "\"abab\".indexOf(\"ab\", " << loc << ")) //returns [" << loc
              << "]]\n";

    return 0;
}