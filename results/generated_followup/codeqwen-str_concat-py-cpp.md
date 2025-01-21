The error occurs because C++ does not support initializing `vector<string>` with an initializer list as Python does.

Here is the fixed code:
```cpp
#include <iostream>
#include <string>
using namespace std;

string join(const vector<string>& words, const string& delimiter) {
  string result = "";
  for (size_t i = 0; i < words.size(); ++i) {
    result += words[i];
    if (i != words.size() - 1) {
      result += delimiter;
    }
  }
  return result;
}

int main() {
  string s1 = "hello";
  cout << s1 + " world" << endl;

  string s2 = s1 + " world";
  cout << s2 << endl;

  s1 = "hello";
  vector<string> words(2);
  words[0] = "world";
  words[1] = "mom";
  string s3 = join(words, ", ");
  cout << s3 << endl;

  string s4 = join(words, ", ");
  cout << s4 << endl;

  return 0;
}
```

Note: The `vector<string> words` line is changed to use the constructor for `vector<string>` that takes an integer as argument. Then we manually fill the vector with the required strings.
