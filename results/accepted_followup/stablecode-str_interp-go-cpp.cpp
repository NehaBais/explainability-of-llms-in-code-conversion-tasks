#include
#include
#include
#include
#include

int main() {
  std::string str = "Mary had a %s lamb";
  std::string txt = "little";

  // Custom implementation using std::regex and std::regex_replace
  auto format_specifier = std::regex("%s");
    str = std::regex_replace(str, format_specifier, txt));

    std::cout << str << std::endl;

    return 0;
}