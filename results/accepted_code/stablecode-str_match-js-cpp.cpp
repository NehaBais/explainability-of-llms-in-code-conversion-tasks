#include <iostream>
#include <regex>
#include <string>

int main() {

  std::string stringA = "tacoloco";
  std::string stringB = "co";
  bool q1, q2, q3;
  std::vector<size_t> q2matches;
    std::regex regex(stringB));

    // Check if stringA starts with stringB
    q1 = stringA.compare(0, stringB.length(), stringB)) == 0;

    // Check if stringB is contained in stringA
    if (~q2) {
        std::smatch matchResult = std::regex_search(stringA, regex));
        q2 = matchResult.size() > 0;
        if (q2 && matchResult.size() > 1) {
          for (size_t i = 1; i < matchResult.size(); ++i) {
                q2matches.push_back(matchResult[i].position()));
          }
        } else if (q2 && matchResult.size() == 1) {
            q2matches.push_back(matchResult[0].position()));
        }
    }

    // Check if stringA ends with stringB
    q3 = stringA.compare(stringA.length() - stringB.length(), stringB.length(), stringB)) == 0;

    std::cout << "1: Does '" << stringA << "' start with '" << stringB << "'? " << ( q1 ? "Yes." : "No.")) << std::endl;
    std::cout << "2: Is '" << stringB << "' contained in '" << stringA << "'? " << (~q2 ? "Yes, at index "+std::to_string(q2)+"." : "No.")) << std::endl;

    if (~q2 && q2matches.size() > 0) {
      std::cout << "   In fact, it happens " << q2matches.size()
                << " times within '" << stringA << "', at index"
                << (q2matches.size() > 1 ? "es" : "") << " "
                << q2matches->join(", ") + ".";
    }

    std::cout << "3: Does '" << stringA << "' end with '" << stringB << "'? " << ( q3 ? "Yes." : "No.")) << std::endl;

    return 0;
}