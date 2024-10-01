Here is the converted code from Golang to C:
```c
#include 
#include 
int main() {
 // text assigned to a string variable
 char s[] = "hello";
 
 // output string variable
 printf("%sn", s);
 
 // this output requested by original task description, although
 // not really required by current wording of task description.
 printf("%s literaln", s);
 
 // concatenate variable and literal, assign result to another string variable
 char s2[strlen(s) + strlen(" literal") + 1];
 strcpy(s2, s);
 strcat(s2, " literal");
 
 // output second string variable
 printf("%sn", s2);
 
 return 0;
}
```
The code above creates a string variable `s` and assigns it the value `"hello"`. It then prints the contents of `s` to the console using `printf`. The original task description also requests that we create another string variable whose value is the original variable concatenated with another string literal. To do this, we allocate memory for `s2` using `malloc`, and then copy the contents of `s` into `s2` using `strcpy`. We then append the string literal `" literal"` to `s2` using `strcat`, and print the contents of `s2` to the console. The program ends by returning 0.

