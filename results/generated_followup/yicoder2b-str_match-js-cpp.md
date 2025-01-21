This problem requires knowledge of C++, specifically about string operations such as splitting and finding substrings. It also makes use of regular expressions and error handling features to handle edge cases like non-integer outputs from sscanf() function. 

In JavaScript, we don't have such extensive libraries, so finding multiple occurrences of a substring is not straightforward. The best we can do would be to find the first occurrence, then use that result as a starting point for the next search. We can also use `find()` method which returns index where substring starts or -1 if it's not found.

However, in C++, we can use sscanf() function to read from an input stream and extract numbers from strings. This will work correctly as long as there aren't too many occurrences of the string within a single string. 

As for the error in a single line explanation, the error is that `sscanf` is expecting to be able to interpret integer values from the input stream which comes from `q2multi` variable. The `q2multi` variable contains a pointer to function `char *(const char *, int)` and sscanf expects an integer value from this type.

The fix for the error in single line is to cast the return value of `sscanf` as an integer which will be compatible with indexing your array `q2matches[]`. 

Here's the corrected code:
```cpp
#include <iostream>
#include <string>
#include <sstream>  // for std::stringstream
using namespace std;

int main() {
  string stringA = "tacoloco", stringB = "co";
  bool q1, q2, q3, q2multi, m;
  int index, indexCount = 0;
  char *q2multi = (char*)"stringB.c_str()"; // Assuming a valid string for the moment

  // stringA starts with stringB
  q1 = (stringA.substr(0, stringB.length()) == stringB);

  // stringA contains stringB
  q2 = (stringA.find(stringB) != string::npos);
  if (q2) {
    cout << "2: Is '" << stringB << "' contained in '" << stringA
         << "'? Yes, at index " << stringA.find(stringB) << ".\n";
  } else {
    cout << "2: Is '" << stringB << "' contained in '" << stringA << "'? No.\n";
  }
  // multiple matches
  q2multi = (char *)"stringB.c_str()"; 
  while ((m = sscanf(q2multi, "%*s%*[^0-9]%*[^\n]", &index)) != EOF) {
    if (index >= stringA.length()) continue;
    q2matches[indexCount++] = index;
  }
  // stringA ends with stringB
  q3 = (stringA.substr(stringA.length() - stringB.length(), stringB.length()) == stringB);

  cout << "StringA starts with StringB: " << q1 << "\n";
  cout << "StringA contains StringB: " << q2 << "\n";
  cout << "StringA ends with StringB: " << q3 << "\n";
}
```
