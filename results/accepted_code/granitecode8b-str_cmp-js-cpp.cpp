#include
#include
int main() {
  std::string str1 = "abcd";
  std::string str2 = "abcd";
  bool equal_value = (str1 == str2);     // true
  bool not_equal_value = (str1 != str2); // false
  bool less_than = (str1 < str2);        // true
  bool greater_than = (str1 > str2);     // false
  bool case_insensitive_equal =
      (std::tolower(str1) == std::tolower(str2)); // true
  std::cout << "Equal value: " << equal_value << std::endl;
  std::cout << "Not equal value: " << not_equal_value << std::endl;
  std::cout << "Less than: " << less_than << std::endl;
  std::cout << "Greater than: " << greater_than << std::endl;
  std::cout << "Case insensitive equal: " << case_insensitive_equal
            << std::endl;
  return 0;
}