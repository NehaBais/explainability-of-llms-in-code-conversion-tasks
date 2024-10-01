Here is the C code that performs the same operations as the Golang code:
```c
#include 
int main() {
 char s[] = "hello";
 printf("%s", s);
 printf(" %s", s);
 char s2[strlen(s)+6];
 strcpy(s2, s);
 strcat(s2, " literal");
 printf("n%s", s2);
 return 0;
}
```
This C code first declares a string variable `s` and assigns it the value "hello". It then uses `printf` to output the value of `s`. Next, it concatenates the string "literal" to `s` using the `+` operator and assigns the result to a new string variable `s2`. Finally, it uses `printf` again to output the value of `s2`.

