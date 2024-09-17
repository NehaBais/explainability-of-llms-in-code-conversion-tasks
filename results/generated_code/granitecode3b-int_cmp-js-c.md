Here's the C code that achieves the same functionality as the provided JavaScript code:
```c
#include 
int main() {
 int a, b;
 
 printf("Enter two integers: ");
 scanf("%d %d", &a, &b);
 
 if (a < b) {
 printf("%d is less than %d.n", a, b);
 } else if (a == b) {
 printf("%d equals %dn", a, b);
 } else {
 printf("%d is greater than %dn", a, b);
 }
 
 return 0;
}
```
This C code prompts the user to enter two integers using `printf` and `scanf`. It then uses an `if-else if-else` statement to compare the two integers and display a message based on the result. The code uses type coercion by converting the user input to integers using `atoi()`.

