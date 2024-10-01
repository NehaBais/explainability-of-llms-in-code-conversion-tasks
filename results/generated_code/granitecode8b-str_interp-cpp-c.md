Here is the converted code from C++ to C:
```c
#include 
#include 
int main( ) {
 char original[] = "Mary had a X lamb.";
 char toBeReplaced[] = "X";
 char replacement[] = "little";
 char newString[100];
 int index = 0;
 while (original[index] != 0) {
 if (original[index] == 'X') {
 strcpy(&newString[index], replacement);
 index += strlen(replacement);
 } else {
 newString[index] = original[index];
 index++;
 }
 }
 printf("String after replacement: %sn", newString);
 return 0;
}
```
In this C code, we use a while loop to iterate through the characters of the original string. If we encounter the character 'X', we replace it with the replacement string using the `strcpy()` function. Otherwise, we simply copy the current character to the new string. Finally, we print out the new string using the `printf()` function.

