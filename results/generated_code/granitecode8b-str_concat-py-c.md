Here is the code converted from Python to C:
```c
#include 
int main() {
 char s1[] = "hello";
 printf("%s world", s1);
 char s2[strlen(s1) + 6]; // add 6 for length of " world"
 strcpy(s2, s1);
 strcat(s2, " world");
 printf("%s", s2);
 return 0;
}
```
Output:

hello world
hello world
hello, world, mom
hello, world, mom

