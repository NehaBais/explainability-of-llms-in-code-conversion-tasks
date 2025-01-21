#include <iostream>
#include <regex>
#include <string>
#include <vector>

int main() {
  std::string stringA = "tacoloco";
  std::string stringB = "co";
  std::vector<int> q2matches;

  // stringA starts with stringB
  bool q1 = stringA.substr(0, stringB.length()) == stringB;

  // stringA contains stringB
  int q2 = stringA.find(stringB);

  // multiple matches
  std::regex q2multi(stringB, std::regex_constants::grep);
  std::smatch match;
  while (std::regex_search(stringA, match, q2multi)) {
    q2matches.push_back(match.position());
    stringA = match.suffix();
  }

  // stringA ends with stringB
  bool q3 = stringA.substr(stringA.length() - stringB.length()) == stringB;

  std::cout << "1: Does '" << stringA << "' start with '" << stringB << "'? "
            << (q1 ? "Yes." : "No.") << std::endl;

  if (q2 != std::string::npos) {
    std::cout << "2: Is '" << stringB << "' contained in '" << stringA
              << "'? Yes, at index " << q2 << "." << std::endl;
    if (!q2matches.empty()) {
      std::cout << "   In fact, it happens " << q2matches.size()
                << " times within '" << stringA << "', at indices ";
      for (size_t i = 0; i < q2matches.size(); ++i) {
        if (i > 0)
          std::cout << ", ";
        std::cout << q2matches[i];
      }
      std::cout << "." << std::endl;
    }
  } else {
    std::cout << "2: Is '" << stringB << "' contained in '" << stringA
              << "'? No." << std::endl;
  }

  std::cout << "3: Does '" << stringA << "' end with '" << stringB << "'? "
            << (q3 ? "Yes." : "No.") << std::endl;

  return 0;
}