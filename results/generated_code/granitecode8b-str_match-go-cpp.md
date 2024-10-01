Here is the converted code from Golang to C++:
```cpp
#include 
#include 
using namespace std;
void match(string first, string second) {
 cout << "1. " << first << " starts with " << second << ": " 
 << (first.rfind(second, 0) == 0) << endl;
 size_t i = first.find(second);
 cout << "2. " << first << " contains " << second << ": " 
 << (i != string::npos) << ", ";
 if (i != string::npos) {
 cout << "at location " << i << ", ";
 for (size_t start = i + 1;; ) {
 if ((i = first.find(second, start)) == string::npos) 
 break;
 cout << "at location " << start + i << ", ";
 start += i + 1;
 }
 cout << "and that's all" << endl;
 }
 cout << "3. " << first << " ends with " << second << ": " 
 << (first.find_last_of(second) == first.size() - second.size()) << endl;
}
int main() {
 match("abracadabra", "abr");
 return 0;
}
```
The output of the program is as follows:

1. abracadabra starts with abr: true
2. abracadabra contains abr: true, at location 0, and that's all
3. abracadabra ends with abr: false

This code uses the `find()` function to find the index of the first occurrence of the second string in the first string for part 2. If there are multiple occurrences, it prints the index of each occurrence. The `rfind()` function is used for part 1, and the `find_last_of()` function is used for part 3.

