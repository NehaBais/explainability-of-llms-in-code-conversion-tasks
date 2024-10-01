Here is the converted code from C to C++ that performs string interpolation:
```
#include 
#include 
using namespace std;
int main() {
 const char *extra = "little";
 string str = "Mary had a " + string(extra) + " lamb.";
 cout << str << endl;
 return 0;
}
```
In this code, we first declare a constant character pointer variable `extra` and initialize it with the value `"little"`. Then, we create a string variable `str` and perform string interpolation by concatenating three strings: "Mary had a ", the value of `extra`, and " lamb.". Finally, we print the resulting string using `cout`.

