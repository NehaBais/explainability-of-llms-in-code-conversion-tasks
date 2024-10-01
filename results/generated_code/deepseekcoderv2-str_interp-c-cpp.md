Answer: To convert the given C code to C++, we need to perform string interpolation using the std::string type and the << operator from the ostream class. We also need to use the const keyword for variables that are not supposed to be modified in the program, which is a feature introduced with the introduction of classes in C++.

Here's the converted code:

```
#include <iostream>
#include <string>
using namespace std;
int main() {
  string extra = "little";
  cout << "Mary had a " + extra + " lamb." << endl;
  return 0;
}
```
