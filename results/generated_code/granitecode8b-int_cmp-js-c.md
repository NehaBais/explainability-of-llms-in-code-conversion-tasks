Here's the converted code from JavaScript to C:
```
#include 
int main() {
 int a, b;
 printf("Enter two integers:");
 scanf("%d %d", &a, &b);
 
 if (a == b) {
 printf("%d equals %d
");
 } else if (a < b) {
 printf("%d is less than %d
");
 } else {
 printf("%d is greater than %d
");
 }
 
 return 0;
}
```
To test the condition for each case separately, you can use different input values for `a` and `b`. For example:
- If `a` is less than `b`, enter values like `1 2`.
- If `a` is equal to `b`, enter values like `3 3`.
- If `a` is greater than `b`, enter values like `4 3`.
Note that in C, the comparison operators are different from JavaScript. Use `<`, `==`, and `>` instead of `<=`, `>=`, and `===`.

