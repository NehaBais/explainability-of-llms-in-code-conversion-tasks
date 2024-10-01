Here is the C code that implements the same functionality as the provided Python code:
```c
#include stdio.h
int main() {
 char* a = "YUP";
 char* b = "YUP";
 int result = 0;
 if(strcmp(a,b) < 0) {
 printf("%s is less than %s",a,b);
 } else if (strcmp(a,b) == 0) {
 printf("%s is equal to %s",a,b);
 } else {
 printf("%s is greater than %s",a,b);
 }
 return 0;
}
```
In this code, we first declare two strings `a` and `b` with values "YUP" and "BALL" respectively. We then use the `strcmp()` function to compare the two strings for equality. Depending on the result of the comparison, we print out a message indicating whether `a` is less than, equal to, or greater than `b`.

