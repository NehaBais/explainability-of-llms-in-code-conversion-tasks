Here is the equivalent C++ code for your Rust program. We will be using `std::stringstream` in this case:

```cpp
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string name = "Mary";
    string adj = "little";
    string animal = "lamb";
  
    // Interpolating using string stream
    stringstream ss; 
    ss << name << " had a "<< adj << " " << animal;

    cout << ss.str() << endl; // prints: Mary had a little lamb
    return 0;
}
```
