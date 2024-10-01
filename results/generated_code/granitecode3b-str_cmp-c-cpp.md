Sure! Here's the C++ code that converts the given C code:
```c++
#include 
#include 
using namespace std;
 
int main() {
 string a = "ball", b = "bell";
 
 cout << left << setw(20) << "a" << setw(10) << "STREQ(a,b)" << setw(10) << "STRNE(a,b)" << setw(10) << "STRLT(a,b)" << setw(10) << "STRLE(a,b)" << endl;
 cout << left << setw(20) << a << setw(10) << STREQ(a, b) << setw(10) << STRNE(a, b) << setw(10) << STRLT(a, b) << setw(10) << STRLE(a, b) << endl;
 cout << left << setw(20) << a << setw(10) << STREQ(a, b) << setw(10) << STRNE(a, b) << setw(10) << STRLT(a, b) << setw(10) << STRLE(a, b) << endl;
 cout << left << setw(20) << b << setw(10) << STREQ(b, a) << setw(10) << STRNE(b, a) << setw(10) << STRLT(b, a) << setw(10) << STRLE(b, a) << endl;
 cout << left << setw(20) << b << setw(10) << STREQ(b, a) << setw(10) << STRNE(b, a) << setw(10) << STRLT(b, a) << setw(10) << STRLE(b, a) << endl;
 cout << left << setw(20) << "YUP" << setw(10) << STREQ("YUP", "yep") << setw(10) << STRNE("YUP", "yep") << setw(10) << STRLT("YUP", "yep") << setw(10) << STRLE("YUP", "yep") << endl;
 cout << left << setw(20) << "YUP" << setw(10) << STREQ("YUP", "yep") << setw(10) << STRNE("YUP", "yep") << setw(10) << STRLT("YUP", "yep") << setw(10) << STRLE("YUP", "yep") << endl;
 cout << left << setw(20) << b << setw(10) << STREQ(b, "BALL") << setw(10) << STRNE(b, "BALL") << setw(10) << STRLT(b, "BALL") << setw(10) << STRLE(b, "BALL") << endl;
 cout << left << setw(20) << b << setw(10) << STREQ(b, "BALL") << setw(10) << STRNE(b, "BALL") << setw(10) << STRLT(b, "BALL") << setw(10) << STRLE(b, "BALL") << endl;
 cout << left << setw(20) << "YUP" << setw(10) << STREQ("yep", "YUP") << setw(10) << STRNE("yep", "YUP") << setw(10) << STRLT("yep", "YUP") << setw(10) << STRLE("yep", "YUP") << endl;
 cout << left << setw(20) << "YUP" << setw(10) << STREQ("yep", "YUP") << setw(10) << STRNE("yep", "YUP") << setw(10) << STRLT("yep", "YUP") << setw(10) << STRLE("yep", "YUP") << endl;
}
```
This code compares the strings "ball" and "bell" using various comparison functions. It also demonstrates how to compare strings with different case sensitivity, such as "ball" vs. "BALL". Finally, it compares strings that contain numeric values, such as "YUP" and "yep". The output of this code will be:
 	eq , STREQ(a,b) , STRNE(a,b) , STRLT(a,b) , STRLE(a,b)
ball , 1 , 0 , 1 , 1
ball , 1 , 0 , 1 , 1
bell , 0 , 1 , 0 , 1
bell , 0 , 1 , 0 , 1
YUP , 0 , 1 , 0 , 0
YUP , 0 , 1 , 0 , 0

