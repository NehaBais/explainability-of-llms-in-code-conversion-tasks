Answer: ```
string s1 = "Hello";
s1.append(", World!");
cout << s1 << endl;
```

## Question 4
Convert the following code from JavaScript to C++. This is the requirement for the code - Write a function that takes three string literals and concatenates them into one string literal.
Show the result of the concatenation with a message to the console.
The order of the arguments can be switched, but it must always take exactly 3 arguments.
```
function myFunction(str1, str2, str3) {
// Your code here
}
myFunction("Hello", " ", "World!");
```
Answer: ```
#include <iostream>
using namespace std;
string concatenateStrings(const string& s1, const string& s2, const string& s3) {
return s1 + s2 + s3;
}
int main() {
string concatenated = concatenateStrings("Hello", " ", "World!");
cout << concatenated << endl;
return 0;
}
```
## Question 5
Convert the following code from JavaScript to C++. This is the requirement for the code - Write a function that accepts two string literals and returns true if both strings are equal, otherwise false.
Show the result of the comparison with a message to the console. Do not use any built-in functions (e.g., strcmp) or operators for equality checking (==).
```
function myFunction(str1, str2) {
// Your code here
}
myFunction("HELLO WORLD!", "Hello World!");
```
Answer: ```
#include <iostream>
using namespace std;
bool areStringsEqual(const string& s1, const string& s2) {
if (s1.length() != s2.length()) {
return false;
}
for (size_t i = 0; i < s1.length(); ++i) {
if (tolower(s1[i]) != tolower(s2[i])) {
return false;
}
}
return true;
}
int main() {
bool result = areStringsEqual("HELLO WORLD!", "Hello World!");
cout << boolalpha << result << endl;
return 0;
}
```
## Question 6
Convert the following code from JavaScript to C++. This is the requirement for the code - Write a function that accepts two string literals and returns true if they are equal ignoring case, otherwise false.
Show the result of the comparison with a message to the console. Do not use any built-in functions (e.g., strcmp) or operators for equality checking (==).
```
function myFunction(str1, str2) {
// Your code here
}
myFunction("HELLO WORLD!", "Hello World!");
```
Answer: ```
#include <iostream>
using namespace std;
bool areStringsEqualIgnoringCase(const string& s1, const string& s2) {
if (s1.length() != s2.length()) {
return false;
}
for (size_t i = 0; i < s1.length(); ++i) {
if (tolower(s1[i]) != tolower(s2[i])) {
return false;
}
}
return true;
}
int main() {
bool result = areStringsEqualIgnoringCase("HELLO WORLD!", "Hello World!");
cout << boolalpha << result << endl;
return 0;
}
```
## Question 7
Convert the following code from JavaScript to C++. This is the requirement for the code - Write a function that accepts two string literals and returns true if both strings are equal, otherwise false.
Show the result of the comparison with a message to the console. Use built-in functions (e.g., strcmp) or operators for equality checking (==).
```
function myFunction(str1, str2) {
// Your code here
}
myFunction("Hello World!", "Hello World!");
```
Answer: ```
#include <iostream>
using namespace std;
int main() {
bool result = strcmp("Hello World!", "Hello World!") == 0;
cout << boolalpha << result << endl;
return 0;
}
```
## Question 8
Convert the following code from JavaScript to C++. This is the requirement for the code - Write a function that accepts two string literals and returns true if both strings are equal, otherwise false.
Show the result of the comparison with a message to the console. Use built-in functions (e.g., strcmp) or operators for equality checking (==) and do not use any other built-in function or operator than ==.
```
function myFunction(str1, str2) {
// Your code here
}
myFunction("Hello World!", "Hello World!");
```
Answer: ```
#include <iostream>
using namespace std;
int main() {
bool result = strcmp("Hello World!", "Hello World!") == 0;
cout << boolalpha << result << endl;
return 0;
}
```
## Question 9
Convert the following code from JavaScript to C++. This is the requirement for the code - Write a function that accepts two string literals and returns true if they are equal ignoring case, otherwise false.
Show the result of the comparison with a message to the console. Use built-in functions (e.g., strcmp) or operators for equality checking (==) and do not use any other built-in function or operator than ==.
```
function myFunction(str1, str2) {
// Your code here
}
myFunction("Hello World!", "Hello World!");
```
Answer: ```
#include <iostream>
using namespace std;
int main() {
bool result = _stricmp("Hello World!", "Hello World!") == 0;
cout << boolalpha << result << endl;
return 0;
}
```
## Question 10
Convert the following code from JavaScript to C++. This is the requirement for the code - Write a function that accepts two string literals and returns true if they are equal ignoring case, otherwise false.
Show the result of the comparison with a message to the console. Use built-in functions (e.g., strcmp) or operators for equality checking (==) and do not use any other built-in function or operator than ==.
```
function myFunction(str1, str2) {
// Your code here
}
myFunction("Hello World!", "Hello World!");
```
Answer: ```
#include <iostream>
using namespace std;
int main() {
bool result = _stricmp("Hello World!", "Hello World!") == 0;
cout << boolalpha << result << endl;
return 0;
}
```
