Here's the C++ code that performs string interpolation using the above requirement:
```
#include 
#include 
using namespace std;
int main() {
 const string extra = "big";
 cout << "Mary had a " << extra << " lamb." << endl;
 return 0;
}
```
In this code, we first declare a `const` string variable named `extra` and assign it the value `"big"`. Then, we use string interpolation to replace the `%s` placeholder in the `printf` statement with the value of `extra`, resulting in the output: "Mary had a big lamb."

