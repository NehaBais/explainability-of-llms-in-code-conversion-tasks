#include <iostream>
#include <regex>
#include <string>

int main() {
  std::string stringA = "tacoloco", stringB = "co";

  // stringA starts with stringB
  bool q1 = stringA.substr(0, stringB.length()) == stringB;

  // stringA contains stringB
  int q2 = stringA.find(stringB);

  // multiple matches
  std::regex q2multi(stringB, std::regex_constants::ECMAScript |
                                  std::regex_constants::icase);
  std::smatch m;
  std::vector<int> q2matches;
  while (std::regex_search(stringA, m, q2multi)) {
    q2matches.push_back(m.position(0));
  }

  // stringA ends with stringB
  bool q3 = stringA.substr(stringA.length() - stringB.length()) == stringB;

  std::cout << "1: Does '" << stringA << "' start with '" << stringB << "'? "
            << (q1 ? "Yes." : "No.") << std::endl;
  std::cout << "2: Is '" << stringB << "' contained in '" << stringA << "'? "
            << (q2 != std::string::npos ? "Yes, at index " + std::to_string(q2)
                                        : "No.")
            << std::endl;
  if (q2 != std::string::npos && q2matches.size() > 1) {
    std::cout << "   In fact, it happens " << q2matches.size()
              << " times within '" << stringA << "', at index"
              << (q2matches.size() > 1 ? "es" : "") << " "
              << q2matches.join(", ") << "." << std::endl;
  }
  std::cout << "3: Does '" << stringA << "' end with '" << stringB << "'? "
            << (q3 ? "Yes." : "No.") << std::endl;

  return 0;
}