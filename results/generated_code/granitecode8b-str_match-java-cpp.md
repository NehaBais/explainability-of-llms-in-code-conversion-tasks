Here is the converted code from Java to C++ that demonstrates the three types of string matching as per the requirement and handles multiple occurrences of a string for part 2:
```
#include 
#include 
using namespace std;
int main() {
 string str1 = "abcd";
 string str2 = "ab";
 // Determining if the first string starts with second string
 bool startsWith = (str1.substr(0, str2.length()) == str2);
 cout << "Determining if the first string starts with second string: " << startsWith << endl;
 // Determining if the first string contains the second string at any location
 bool contains = false;
 size_t pos = 0;
 while ((pos = str1.find(str2, pos)) != string::npos) {
 cout << "Match found at position: " << pos << endl;
 contains = true;
 pos++; // Avoid finding overlapping matches
 }
 cout << "Determining if the first string contains the second string at any location: " << contains << endl;
 // Determining if the first string ends with the second string
 bool endsWith = (str1.substr(str1.length() - str2.length(), str2.length()) == str2);
 cout << "Determining if the first string ends with the second string: " << endsWith << endl;
 return 0;
}
```
This code uses the `substr` function to get a substring of the first string and compares it with the second string for the startsWith and endsWith functions. The `contains` function uses the `find` function to search for the second string within the first string and handles multiple occurrences by incrementing the position after each match is found.

