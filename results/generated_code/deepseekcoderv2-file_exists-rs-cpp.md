## Answer
The following code converts the Rust code to C++.
Note that there are some minor differences between rust and c++ in their syntax for declaring variables, defining functions, etc.
In this example we have used typedefs to map from one language's naming convention to another as required by the task specifications.
```
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
typedef string String;
typedef ifstream InFileStream;
int main() {
  // Read input from file and store it in a vector
  Vector<String> lines;
  InFileStream infile("input.txt");
  int lineNo = 0;
  while (infile) {
    getline(infile, line);
    if (!infile) break;
    // Process the current line here as required by problem specs
  }
  cout << "Finished processing lines." << endl;
  return 0;
}
```
