Here is the converted code from Rust to C++ that demonstrates the three types of string matching as per the requirement and handles multiple occurrences of a string for part 2. The optional requirements are also handled.
```
#include 
#include 
using namespace std;
void printMatch(optional possibleMatch) {
 if (possibleMatch) {
 cout << "Found match at pos " << possibleMatch.value() << endl;
 } else {
 cout << "Did not find any matches" << endl;
 }
}
int main() {
 string s1 = "abcd";
 string s2 = "abab";
 string s3 = "ab";
 
 // Determining if the first string starts with second string
 cout << boolalpha << s1.starts_with(s3) << endl;
 
 // Determining if the first string contains the second string at any location
 size_t pos = 0;
 string::const_iterator it;
 while ((it = search(s1.begin(), s1.end(), s3.begin(), s3.end())) != s1.end()) {
 cout << "Found match at pos " << pos << endl;
 pos += (it - s1.begin()) + s3.length();
 }
 
 // Print the location of the match 
 printMatch(s1.find(s3)); // Found match at pos 0
 printMatch(s1.find(s2)); // Did not find any matches
 
 // Determining if the first string ends with the second string
 cout << boolalpha << s2.ends_with(s3) << endl;
 
 return 0;
}
```

