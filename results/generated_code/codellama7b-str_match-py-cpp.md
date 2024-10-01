 Here is the code in C++:

```cpp
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string firstString = "abcd";
	string secondString = "ab";

	// Type 1: Determine if the first string starts with the second string.
	if (firstString.starts_with(secondString)) {
		cout << "The first string starts with the second string." << endl;
	} else {
		cout << "The first string does not start with the second string." << endl;
	}

	// Type 2: Determine if the first string contains the second string at any location.
	if (firstString.find(secondString) != string::npos) {
		cout << "The first string contains the second string." << endl;
	} else {
		cout << "The first string does not contain the second string." << endl;
	}

	// Type 3: Determine if the first string ends with the second string.
	if (firstString.ends_with(secondString)) {
		cout << "The first string ends with the second string." << endl;
	} else {
		cout << "The first string does not end with the second string." << endl;
	}

	return 0;
}
```

This code is based on the requirements provided. The first string starts with the second string, the first string contains the second string, and the first string ends with the second string. It also uses find() to search for the position of a substring in a string and ends_with() to determine if a string ends with another string.
