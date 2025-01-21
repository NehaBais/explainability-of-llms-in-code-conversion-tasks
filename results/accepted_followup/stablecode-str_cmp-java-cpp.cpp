#include <cctype>
#include <iostream>
#include <string>

bool areEqual(std::string A, std::string B) { return A == B; }

bool areInverseEqual(std::string A, std::string B) {
    return !(A == B));
}

int lexicalComparison(std::string A, std::string B) {
    return A.compareTo(B));
}

int caseSensitiveLexicalComparison(std::string A, std::string B)) 
{
    return A.compare(B));
}

int main() {
  std::string str1 = "Hello";
  std::string str2 = "Hello";

  if (areEqual(str1, str2))))
        std::cout << "'" << str1 << "' and '" << str2 << "' are lexically equal." << std::endl;
  else
    std::cout << "'" << str1 << "' and '" << str2
              << "' are not lexically equal." << std::endl;

  str1 = "5";
  str2 = "5.0";

  if (areEqual(str1, str2))))
        std::cout << "'" << str1 << "' and '" << str2 << "' are lexically equal." << std::endl;
  else
    std::cout << "'" << str1 << "' and '" << str2
              << "' are not lexically equal." << std::endl;

  str1 = "Java";
  str2 = "java";

  if (areEqual(str1, str2))))
        std::cout << "'" << str1 << "' and '" << str2 << "' are lexically equal." << std::endl;
  else
    std::cout << "'" << str1 << "' and '" << str2
              << "' are not lexically equal." << std::endl;

  return 0;
}