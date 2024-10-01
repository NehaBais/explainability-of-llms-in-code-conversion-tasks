Here is the C code that performs the same task as the provided C++ code:
```c
#include 
int main() {
 char* myString = "prepended to";
 const char* appended = "my string";
 int lengthOfPrepended = strlen(myString);
 char* prepended = (char*)malloc(lengthOfPrepended + strlen(appended) + 1);
 strcat(prepended, myString);
 strcat(prepended, appended);
 printf("%s", prepended);
 free(prepended);
 return 0;
}
```
Note that the C code uses `char*` instead of `std::string` and `strlen` instead of `std::accumulate`. Additionally, the `malloc` and `free` functions are used to dynamically allocate memory for the prepended string.

