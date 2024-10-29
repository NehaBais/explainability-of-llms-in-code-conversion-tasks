#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::string stringA = "tacoloco", stringB = "co";
  bool q1, q3;
  int q2;
  std::vector<int> q2matches;

  // stringA starts with stringB
  q1 = stringA.substr(0, stringB.size()) == stringB;

  // stringA contains stringB
  q2 = stringA.find(stringB);

  // multiple matches
  std::string::size_type start = 0;
  while (start != std::string::npos) {
    start = stringA.find(stringB, start);
    if (start != std::string::npos) {
      q2matches.push_back(start);
      start += 1; // increment the starting position for next search
    }
  }

  // stringA ends with stringB
  q3 = stringA.substr(stringA.size() - stringB.size()) == stringB;

  std::cout << "1: Does '" << stringA << "' start with '" << stringB << "'? ";
  std::cout << (q1 ? "Yes." : "No.") << std::endl;

  std::cout << "2: Is '" << stringB << "' contained in '" << stringA << "'? ";
  if (q2 != -1) {
    std::cout << "Yes, at index " << q2 << '.';
    if (q2matches.size() > 1) {
      std::cout << "\n   In fact, it happens " << q2matches.size()
                << " times within '" << stringA;
      std::cout << "', at index";
      if (q2matches.size() > 2) {
        std::cout << 's';
      }
      for (const auto &match : q2matches) {
        std::cout << ' ' << match;
      }
      std::cout << '.';
    }
    std::cout << std::endl;
  } else {
    std::cout << "No." << std::endl;
<｜begin▁of▁sentence｜>
  }
  std::cout << "3: Does '" << stringA << "' end with '" << stringB << "'? ";
  std::cout << (q3 ? "Yes." : "No.") << std::endl;

  return 0;
}