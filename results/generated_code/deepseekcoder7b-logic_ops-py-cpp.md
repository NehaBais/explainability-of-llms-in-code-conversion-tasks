In C++, you can use the `&&` operator for logical 'and' operation, `||` operator for logical 'or' operation, and `!` operator for logical 'not'. Here is how you would convert your Python code to C++. 

```cpp
#include <iostream>
using namespace std;

void logic(bool a, bool b) {
    cout << "a && b: " << (a && b) << endl;
    cout << "a || b: " << (a || b) << endl;
    cout << "!a: " << (!a) << endl;
}
``` 
To use this function, simply call it with two boolean values. For example - `logic(true, false);` will print the results of "and", "or" and "not" operations for a=True, b=False. The 'endl' at the end of each line is to insert a newline in the output stream.

