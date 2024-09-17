Here's the converted code from C++ to C:
```
#include 
int main() {
 int a, b;
 
 printf("Enter two integers: ");
 if (scanf("%d %d", &a, &b) != 2) {
 fprintf(stderr, "Could not read the numbers.n");
 return 1;
 }
 
 // test for less-than
 if (a < b) {
 printf("%d is less than %dn", a, b);
 }
 
 // test for equality
 if (a == b) {
 printf("%d is equal to %dn", a, b);
 }
 
 // test for greater-than
 if (a > b) {
 printf("%d is greater than %dn", a, b);
 }
 
 return 0;
}
```
Note: I added some additional error handling code to ensure that the program terminates correctly if the user does not enter two integers. Also, I removed the `using namespace std;` statement since it is not recommended to use it in C++ code.

