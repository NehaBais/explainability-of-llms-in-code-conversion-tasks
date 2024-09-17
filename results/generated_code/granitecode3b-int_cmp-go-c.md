Here's the C code that achieves the same functionality as the given Golang code:
```c
#include 
int main() {
 int n1, n2;
 printf("Enter number: ");
 scanf("%d", &n1);
 printf("Enter number: ");
 scanf("%d", &n2);
 if (n1 < n2) {
 printf("%d is less than %d.", n1, n2);
 } else if (n1 == n2) {
 printf("%d is equal to %d.", n1, n2);
 } else {
 printf("%d is greater than %d.", n1, n2);
 }
 return 0;
}
```
The C code uses an `if-else` statement with three conditions to compare the two numbers. The first condition checks if `n1` is less than `n2`. If it is, then the second condition is evaluated. If `n1` is equal to `n2`, then the third condition is evaluated. Finally, if neither of the previous conditions are met, then the last condition is executed.

