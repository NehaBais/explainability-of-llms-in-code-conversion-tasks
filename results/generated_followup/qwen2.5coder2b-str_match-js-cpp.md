The error is because `std::vector` does not have a member named `join`. To fix this, use the `std::stringstream` to concatenate the elements of the vector into a string. The corrected code is as follows:

```cpp
#include <iostream>
#include <regex>
#include <vector>
#include <sstream>

void matchStrings(const std::string &strA, const std::string &strB) {
  // 1. Determines if stringA starts with stringB
  bool q1 = (strA.find(strB) == 0);

  // 2. Determines if stringA contains stringB at any location
  std::size_t q2 = strA.find(strB);
  std::vector<std::size_t> matches;
  while (q2 != std::string::npos) {
    matches.push_back(q2);
    q2 = strA.find(strB, q2 + 1);
  }

  // Optional: Print the location of the match for part 2
  if (!matches.empty()) {
    std::stringstream ss;
    ss << "{" << ((matches.size() > 1) ? "es" : "") << " " << matches.join(", ") << "}";
    std::cout << "2. Is '" << strB << "' contained in '" << strA << "'? "
              << "Yes, at index" << ss.str() << "." << std::endl;
  }

  // 3. Determines if stringA ends with stringB
  bool q3 =
      (strA.compare(strA.length() - strB.length(), strB.length(), strB) == 0);

  std::cout << "3. Does '" << strA << "' end with '" << strB << "'? "
            << (q3 ? "Yes." : "No.") << std::endl;
}

int main() {
  const std::string stringA = "tacoloco";
  const std::string stringB = "co";

  matchStrings(stringA, stringB);

  return 0;
}
```
