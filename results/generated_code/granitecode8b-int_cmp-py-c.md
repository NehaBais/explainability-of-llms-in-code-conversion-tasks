Here's the converted code from Python to C:
```
#include 
int main() {
 int a, b;
 printf("Enter value of a: ");
 scanf("%d", &a);
 printf("Enter value of b: ");
 scanf("%d", &b);
 
 if (a < b) {
 printf("a is less than b");
 } else if (a > b) {
 printf("a is greater than b");
 } else if (a == b) {
 printf("a is equal to b");
 }
 
 return 0;
}
```
To test the condition for each case separately, you can use different input values for a and b. Here are some examples:
- If a = 5 and b = 10, then "a is less than b" should be displayed.
- If a = 7 and b = 7, then "a is equal to b" should be displayed.
- If a = 3 and b = 9, then "a is greater than b" should be displayed.

