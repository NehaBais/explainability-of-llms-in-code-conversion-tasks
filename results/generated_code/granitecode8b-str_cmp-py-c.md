Here is the converted code from Python to C:
```
#include 
int main() {
 char a[] = "YUP";
 char b[] = "BALL";
 printf("a is of type %s and b is of type %sn", sizeof(a), sizeof(b));
 if (strcmp(a, b) < 0) {
 printf("%s is strictly less than %sn", a, b);
 }
 else if (strcmp(a, b) == 0) {
 printf("%s is equal to %sn", a, b);
 }
 else {
 printf("%s is strictly greater than %sn", a, b);
 }
 
 char c[] = "24";
 char d[] = "123";
 if (strcmp(c, d) < 0) {
 printf("%s is lexically less than %sn", c, d);
 }
 else if (strcmp(c, d) == 0) {
 printf("%s is equal to %sn", c, d);
 }
 else {
 printf("%s is lexically greater than %sn", c, d);
 }
 
 int e = 24;
 int f = 123;
 if (e < f) {
 printf("%d is less than %dn", e, f);
 }
 else if (e == f) {
 printf("%d is equal to %dn", e, f);
 }
 else {
 printf("%d is greater than %dn", e, f);
 }
 
 float g = 5.0;
 int h = 5;
 if (g < h) {
 printf("%f is less than %dn", g, h);
 }
 else if (g == h) {
 printf("%f is equal to %dn", g, h);
 }
 else {
 printf("%f is greater than %dn", g, h);
 }
 
 return 0;
}
```
The C code demonstrates how to compare two strings for exact equality, inequality, lexical order, and case sensitivity. It also shows how to compare numeric strings if they are not treated lexically. The code also handles comparison of numeric values with strings.

