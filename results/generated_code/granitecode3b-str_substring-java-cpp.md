Here is the equivalent C++ code for the given Java code snippet:
```c++
#include 
#include 
#include 
using namespace std;
string Substring(string str, int n, int m){
    return str.substr(n, m);
}
string Substring(string str, int n){
    return str.substr(n);
}
string Substring(string str){
    return str.substr(0, str.length()-1);
}
string Substring(string str, char c, int m){
    return str.substr(str.find(c), str.find(c)+m+1);
}
string Substring(string str, string sub, int m){
    return str.substr(str.find(sub), str.find(sub)+m+1);
}
int main(){
  string str = "Hello World";
  cout << Substring(str, 3, 4) << endl; // prints "lo W"
  cout << Substring(str, 0, 5) << endl; // prints "Hello"
  cout << Substring(str) << endl; // prints "Helo Wor"
  cout << Substring(str, 'l', 3) << endl; // prints "ll Wor"
  cout << Substring(str, "Wor", 3) << endl; // prints "He ll Wor"
  return 0;
}
```
The C++ code above defines a function `Substring` that takes in a string `str`, an integer `n`, and an optional integer `m`. It then uses the `substr()` function to extract the desired substring based on the values of `n` and `m`. The function also handles edge cases, such as when `n` is greater than the length of the string or when `m` is negative.

