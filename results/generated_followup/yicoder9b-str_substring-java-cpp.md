The errors are due to the use of C++11 features (such as `auto` type specifier, range-based for loops) in a context where those features aren't allowed. This code needs to be updated to compile and run with a C++ compiler that supports these language features.

For example, if you are using an older version of GCC or clang, then you will need to upgrade your compiler, or set the correct flags for your compiler (for gcc: `-std=c++11`, for clang: `-stdlib=libc++`).

Here is a corrected version of your code:
```cpp
#include <string> 
using namespace std;

// function to return substring from n index till end
string substr_from(const string &str, int n) {
    return string(str.begin() + n, str.end());
}

// function to return substring upto n index
string substr_upto(const string &str, int n) {
    return string(str.begin(), str.begin() + n); 
}

int main(){
    string str = "Hello World!";
    auto pos = str.find(' '); // find the position of space in string
    if (pos == string::npos) {
        // do nothing if no space found
    } else {
        // print substring from space index till end
        cout<<substr_from(str, pos + 1)<<"\n";
    }
  
    pos = str.find('!'); // find the position of '!' in string
    if (pos == string::npos){
        // do nothing if no '!' found
    } else {
       // print substring upto '!' index 
        cout<<substr_upto(str, pos + 1)<<"\n"; 
    }  
    return 0;
}
```
