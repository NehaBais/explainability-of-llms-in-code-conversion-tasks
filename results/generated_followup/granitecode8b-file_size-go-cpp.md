The error in the converted code is that the `string` and `ifstream` types are not available in C++. The fix is to include the appropriate headers for these types, which are `<string>` and `<fstream>`, respectively.
Here is the corrected code:
```cpp
#include 
#include 
#include 
using namespace std;
void printFileSize(string f) {
  ifstream file(f);
  if (!file.is_open()) {
    cout << "Error: Unable to open file" << endl;
  } else {
    file.seekg(0, file.end);
    int size = file.tellg();
    file.close();
    cout << "File size is: " << size << " bytes" << endl;
  }
}
int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");
  return 0;
}
```
This code includes the necessary headers for `string` and `ifstream`, as well as the `using namespace std;` statement to avoid having to prefix these types with `std::`. The error in the original code was fixed by replacing the `import` statements with `#include` directives.

