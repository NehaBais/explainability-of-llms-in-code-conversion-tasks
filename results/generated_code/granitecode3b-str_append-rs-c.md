Here's the C code that converts the Rust code you provided:
```c
#include 
int main() {
 char* str = "Hello world";
 char* appendage = "!!!!";
 char result[strlen(str) + strlen(appendage)];
 strcpy(result, str);
 strcat(result, appendage);
 printf("%s", result);
 return 0;
}
```
The code first declares a string variable `str` and assigns it the value "Hello world". It then declares another string variable `appendage` and assigns it the value "!!!!".
Next, the code creates a new string variable `result` with a size equal to the sum of the lengths of `str` and `appendage`. It uses the `strlen` function to get the length of each string, adds them together, and then creates a new string variable of that size using the `malloc` function.
The code then uses the `strcpy` and `strcat` functions from the C standard library to append `appendage` to the end of `str`. Finally, it prints the contents of `result` using the `printf` function.
I hope this helps! Let me know if you have any further questions.

