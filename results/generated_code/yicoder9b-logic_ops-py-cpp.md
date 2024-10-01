Here is the C++ version of your Python code:

```C++
#include <iostream>
using namespace std;

void logic(bool a, bool b){
    cout << "a and b: " << (a && b) << endl; 
    cout << "a or b: " << (a || b) << endl;  
    cout << "not a: " << !a << endl;   
}
```

In C++, the keywords `and` and `or` have been replaced with logical operators `&&` and `||` respectively. The keyword `not` has also been replaced with the `!` operator. Boolean values true and false are represented as 1 and 0 in cout statement.
