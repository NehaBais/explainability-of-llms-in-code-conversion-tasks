Error: The compiler is unable to find the `string` library, so it throws an error.
Fix: Add `#include <string>` before the `using namespace std;` line.
Corrected code:
```cpp
#include
#include 
using namespace std;
int main() {
 const string extra = "big";
 cout << "Mary had a " << extra << " lamb." << endl;
 return 0;
}
```
Explanation of the error and fix:
The first error occurs because the compiler is unable to find the `string` library, which is required for the use of the `string` data type. The second error occurs because the code tries to use the `cout` object before it has been declared. Finally, the third error occurs because the code is trying to use the `endl` object before it has been declared.
The fix consists of adding a single line `#include <string>` before the `using namespace std;` line. This ensures that the compiler has access to the `string` library and resolves all errors in the code.
By using the `string` data type, we can easily perform string interpolation without having to use external functions or libraries. The `cout` object is used to print the interpolated string to the console, while the `endl` object adds a newline character at the end of each line.

