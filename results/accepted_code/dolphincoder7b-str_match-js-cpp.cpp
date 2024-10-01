#include <iostream>
#include <string>

int main() {
  std::string stringA = "tacoloco";
  std::string stringB = "co";

  // stringA starts with stringB
  bool q1 = (stringA.substr(0, stringB.length()) == stringB);

  // stringA contains stringB
  int q2 = stringA.find(stringB);

  // multiple matches
  std::vector<int> q2matches;
  size_t m;
  while ((m = stringA.find(stringB, m)) != std::string::npos) {
    q2matches.push_back(m);
  }

  // stringA ends with stringB
  bool q3 = (stringA.substr(-stringB.length()) == stringB);

  std::cout << "1: Does '" + stringA + "' start with '" + stringB + "'? ";
  if (q1) {
    std::cout << "Yes." << std::endl;
  } else {
    std::cout << "No." << std::endl;
  }

  std::cout << "2: Is '" + stringB + "' contained in '" + stringA + "'? ";
  if (~q2) {
    std::cout << "Yes, at index " + std::to_string(q2) + "." << std::endl;
  } else {
    std::cout << "No." << std::endl;
  }

  if (~q2 && q2matches.size() > 1) {
    std::cout << "   In fact, it happens " + std::to_string(q2matches.size()) +
                     " times within '" + stringA + "', at index" +
                     ((q2matches.size() > 1) ? "es" : "") + " " +
                     std::to_string(q2matches[0]) + ".";
    for (int i = 1; i < q2matches.size(); ++i) {
      std::cout << ", " + std::to_string(q2matches[i]);
    }
  }

  std::cout << std::endl;

  std::cout << "3: Does '" + stringA + "' end with '" + stringB + "'? ";
  if (q3) {
    std::cout << "Yes." << std::endl;
  } else {
    std::cout << "No." << std::endl;
  }

  return 0;
}