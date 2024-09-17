Here's the converted code from Rust to C:
```
#include 
#include 
int main() {
 int a, b;
 printf("Enter two integers: ");
 scanf("%d %d", &a, &b);
 if (a < b) {
 printf("%d is less than %dn", a, b);
 } else if (a == b) {
 printf("%d equals %dn", a, b);
 } else {
 printf("%d is greater than %dn", a, b);
 }
 return 0;
}
```
To test the condition for each case separately, we can use the following input:
```
4 2
4 4
4 6
```
The expected output for these inputs should be:
```
4 is less than 2
4 equals 4
4 is greater than 6
```

