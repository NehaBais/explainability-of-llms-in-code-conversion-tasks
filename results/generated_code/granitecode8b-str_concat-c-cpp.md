Here is the converted code from C to C++:
```
#include 
#include 
using namespace std;
string sconcat(const string& s1, const string& s2)
{
 string s0 = s1 + s2;
 return s0;
}
int main()
{
 const string s = "hello";
 string s2;
 
 cout << s << " literal" << endl;
 /* or */
 cout << s << " literal" << endl;
 
 s2 = sconcat(s, " literal");
 cout << s2 << endl;
 return 0;
}
```
In this converted code:
- We added the `using namespace std;` statement to avoid writing `std::` before standard library objects.
- We used `string` instead of `char*` for string variables.
- We used the `+` operator instead of `strcat()` function to concatenate two strings.
- We used the `<<` operator instead of `printf()` function to print a string variable.
- We used `endl` instead of `printf("\n")` to insert a line break in the output.

