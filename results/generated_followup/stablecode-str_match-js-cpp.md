Error explanation:

```/tmp/stablecode-str_match-js-cpp.cpp:39:29: error: member reference type 'std::vector<size_t>' 
(aka 'vector<unsigned long>') is not a pointer; did you mean to use 
'.'?
   39 |                 << q2matches->join(", ") 
+ ".";
      |                    ~~~~~~~~~^~
      |                             .
```

Fix:
Replace the line `q2matches->join(", ", ))` with `q2matches.join(", ", ))`.

Corrected code:

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <regex>

int main() {
    std::string stringA = "abracadabra";
    std::string stringB = "b";

    bool q1;
    q1 = stringA.compare(0, stringB.length(), stringB)) == 0;

    std::vector<size_t> q2matches;
    q2matches.push_back(matchResult[i].position()));

    bool q3;
    q3 = stringA.compare(stringA.length() - stringB.length(), stringB.length(), stringB)) == 0;

    std::cout << "1: Does '" << stringA << "' start with '" << stringB << "'? " << (q1 ? "Yes." : "No.")) << std::endl;
    std::cout << "2: Is '" << stringB << "' contained in '" << stringA << "'? " << (~q2 ? "Yes, at index " + std::to_string(q2) + "." : "No.")) << std::endl;
    std::cout << "3: Does '" << stringA << "' end with '" << stringB << "'? " << (q3 ? "Yes." : "No.")) << std::endl;

    return 0;
}
```
