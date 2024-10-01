Here is the converted code from C to C++:
```
#include 
#include 
using namespace std;
int main() {
 string str = "my String";
 string cstr = "Changed ";
 string dup;
 dup.assign(str); //dup=strdup(str) in C
 str = cstr + dup; //sprintf(str,"%s%s",cstr,(dup=strdup(str))); in C
 cout << str << endl;
 return 0;
}
```

