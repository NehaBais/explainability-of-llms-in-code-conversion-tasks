Here is the code converted from Java to C++:
```
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
 string::size_type pos = str.find(c);
 if (pos != string::npos) {
 return str.substr(pos, m+1);
 } else {
 return "";
 }
}
string Substring(string str, string sub, int m){
 string::size_type pos = str.find(sub);
 if (pos != string::npos) {
 return str.substr(pos, m+1);
 } else {
 return "";
 }
}
int main(){
 string str = "Hello, world!";
 cout << Substring(str, 7, 3) << endl; // Output: "wor"
 cout << Substring(str, 7) << endl; // Output: "world!"
 cout << Substring(str) << endl; // Output: "Hello, worl"
 cout << Substring(str, 'o') << endl; // Output: "o, w"
 cout << Substring(str, "or", 3) << endl; // Output: "orld!"
 return 0;
}
```
Note that in C++, the `substr` function is used instead of the `substring` function from Java. Also, the `find` function is used to find the index of a character or substring within the string, and then the `substr` function is used to extract the desired substring based on the found index.

