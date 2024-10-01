#include <cassert>
#include <iostream>
#include <regex>
#include <string>

int main() {
  std::string stringA = "tacoloco";
  std::string stringB = "co";
  bool q1, q2, q3;
  size_t p;

  // stringA starts with stringB
  q1 = (stringA.substr(0, stringB.length()) == stringB);

  // stringA contains stringB
  p = stringA.find(stringB);

  if (p != std::string::npos) {
    q2 = true;
  } else {
    q2 = false;
  }

  // multiple matches
  std::regex q2multi(stringB);
  std::sregex_iterator q2matches_begin(stringA.begin(), stringA.end(), q2multi),
      end;

  while (q2matches_begin != end) {
    size_t match_index = std::distance(stringA.begin(), *q2matches_begin);
    std::cout << "Match found at index: " << match_index << "\n";
    ++q2matches_begin;
  }

  // stringA ends with stringB
  q3 = (stringA.substr(stringA.length() - stringB.length()) == stringB);

  std::cout << "1: Does '" << stringA << "' start with '" << stringB << "'? ";
  if (q1) {
    std::cout << "Yes.";
  } else {
    std::cout << "No.";
  }
  std::cout << "\n";

  std::cout << "2: Is '" << stringB << "' contained in '" << stringA << "'? ";
  if (q2) {
    std::cout << "Yes, at index " << p << ".";
  } else {
    std::cout << "No.";
  }
  std::cout << "\n";

  std::cout << "3: Does '" << stringA << "' end with '" << stringB << "'? ";
  if (q3) {
    std::cout << "Yes.";
  } else {
    std::cout << "No.";
  }
  std::cout << "\n";

  return 0;
}