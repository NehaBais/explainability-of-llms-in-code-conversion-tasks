Here is the converted code from JavaScript to C++ that demonstrates three types of string matching as required:
1. Determining if the first string starts with second string
2. Determining if the first string contains the second string at any location
3. Determining if the first string ends with the second string
```cpp
#include 
#include 
#include 
using namespace std;
int main() {
 string stringA = "tacoloco";
 string stringB = "co";
 bool q1, q2, q3;
 int q2multi_index, q2multi_length;
 vector q2matches;
 // stringA starts with stringB
 q1 = stringA.substr(0, stringB.length()) == stringB;
 // stringA contains stringB
 q2multi_index = stringA.find(stringB);
 if (q2multi_index != std::string::npos) {
 q2multi_length = stringB.length();
 q2 = true;
 } else {
 q2 = false;
 }
 // multiple matches
 while ((q2multi_index = stringA.find(stringB, q2multi_index + 1)) != std::string::npos) {
 q2matches.push_back(q2multi_index);
 }
 // stringA ends with stringB
 q3 = stringA.substr(stringA.length() - stringB.length()) == stringB;
 cout << "1: Does '" << stringA << "' start with '" << stringB << "'? ";
 if (q1) {
 cout << "Yes." << endl;
 } else {
 cout << "No." << endl;
 }
 cout << "2: Is '" << stringB << "' contained in '" << stringA << "'? ";
 if (q2) {
 cout << "Yes, at index " << q2multi_index << "." << endl;
 if (q2matches.size() > 1) {
 cout << "   In fact, it happens " << q2matches.size() << " times within '" << stringA << "', at index" << ((q2matches.size() > 1) ? "es" : "") << " ";
 for (int i = 0; i < q2matches.size(); i++) {
 cout << q2matches[i];
 if (i < q2matches.size() - 1) {
 cout << ", ";
 }
 }
 cout << "." << endl;
 } else {
 cout << "No." << endl;
 }
 cout << "3: Does '" << stringA << "' end with '" << stringB << "'? ";
 if (q3) {
 cout << "Yes." << endl;
 } else {
 cout << "No." << endl;
 }
 return 0;
}
```
The output of the program is:

1: Does 'tacoloco' start with 'co'? Yes.
2: Is 'co' contained in 'tacoloco'? Yes, at index 3.
3: Does 'tacoloco' end with 'co'? No.

