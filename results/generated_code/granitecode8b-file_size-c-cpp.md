Here is the converted code from C to C++:
```
#include 
#include 
using namespace std;
int main() {
 struct stat foo;
 stat("input.txt", &foo);
 cout << foo.st_size << endl;
 stat("/input.txt", &foo);
 cout << foo.st_size << endl;
 return 0;
}
```
Note that the function `cout` is used instead of `printf`, and the header file `iostream` is included instead of `stdio.h`. The variable `foo.st_size` is printed using `cout` instead of `printf`. Also, the `using namespace std;` statement is used to avoid writing `std::` before `cout` and `endl`.

