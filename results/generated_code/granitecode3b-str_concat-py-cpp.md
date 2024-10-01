Here's the C++ code that accomplishes the same task:
```
#include 
#include 
using namespace std;
int main() {
 string s1 = "hello";
 cout << s1 + " world" << endl;
 string s2 = s1 + " world";
 cout << s2 << endl;
 vector words = {"hello", "world", "mom"};
 string s3 = ", ".join(words);
 cout << s3 << endl;
 return 0;
}
```
In this code, we first declare two string variables `s1` and `s2`. We then assign the value of `s1` concatenated with the string literal `" world"` to `s2`. Finally, we create a vector of strings called `words`, which contains the values "hello", "world", and "mom". We then use the `join()` function from the `` library to concatenate these words into a single string, and assign the result to `s3`.

