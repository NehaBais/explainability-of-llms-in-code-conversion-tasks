## Solution 1:

```cpp
#include <iostream>
#include <fstream>
using namespace std;
int main() {
string line;
ifstream myfile ("input.txt");
if (myfile.is_open())
{ cout << "File opened." << endl; }
else { cout << "Error opening file"; }
return 0;
}
```
