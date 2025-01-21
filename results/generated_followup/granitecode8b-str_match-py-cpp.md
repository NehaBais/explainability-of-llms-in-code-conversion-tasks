The error in the code is that it is missing the header file for string input/output operations, which is called `iostream`. The fixed code is as follows:
```cpp
#include
#include
using namespace std;
int main() {
  string str1 = "abcd";
  string str2 = "ab";
  cout << "Does " << str1 << " contain " << str2 << "? " << (str1.find(str2) != string::npos) << endl;
  size_t prev = 0;
  while ((prev = str1.find(str2, prev)) != string::npos) {
    cout << "The location of the match is: " << prev << endl;
  }
  return 0;
}
```

