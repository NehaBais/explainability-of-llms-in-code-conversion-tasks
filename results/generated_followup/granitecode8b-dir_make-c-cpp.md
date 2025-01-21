The error in the given C++ code is that it contains syntax errors that prevent it from compiling. The fix involves correcting these syntax errors so that the code can compile successfully. Here is the corrected code:
```cpp
#include 
#include 
#include 
#include 
using namespace std;
int mkdirp(const string &path) {
  char *p = const_cast(path.c_str());
  char *dir = dirname(p);
  if (mkdir(dir, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) == -1 && errno != EEXIST) {
    cout << "Failed to create directory" << endl;
  } else {
    cout << "Directory created successfully" << endl;
  }
}
int main() {
  mkdirp("./path/to/dir");
  return 0;
}
```
In the original code, there were several syntax errors that prevented it from compiling. These included missing semicolons at the end of function declarations, undeclared identifiers such as `dirname` and `S_IRWXU`, and mismatched function arguments between `mkdirp` and `main`. The corrected code fixes these issues by adding semicolons, declaring all necessary identifiers, and ensuring that the function arguments match.

