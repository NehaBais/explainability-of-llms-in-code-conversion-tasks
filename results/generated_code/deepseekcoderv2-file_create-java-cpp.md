Answer:

Here is the C++ code that converts from Java to C++:

```cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	// Create a new file named "output.txt" in the current working directory
	ofstream outFile("output.txt");
	outFile << ""; // Write an empty string to the file
	outFile.close();

	// Create a new file named "docs" in the root of the filesystem
	ofstream docsFile("/docs/output.txt");
	docsFile << ""; // Write an empty string to the file
	docsFile.close();

	return 0;
}
```
