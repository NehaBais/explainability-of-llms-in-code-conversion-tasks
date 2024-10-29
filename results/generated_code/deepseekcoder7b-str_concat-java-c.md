The equivalent C code for the given Java program is as follows -

```c
#include <stdio.h>

int main() {
   char s[] = "hello";  // create a string variable equal to any text value
   printf("%s\n", s);
   
   char literal[] = " literal";  // concatenate it with another string literal
   char s2[100];                // new string variable for the resultant string
   
   int i = 0, j = 0;            // counters to iterate through both strings
   
   while (s[i] != '\0') {       // copy contents of string 's' into 's2'
      s2[j++] = s[i++];        
   }
   
   i = 0;                       // reset counter for string 'literal'
   
   while (literal[i] != '\0') {  // append contents of string 'literal' to 's2'
      s2[j++] = literal[i++];    
   }
   
   s2[j] = '\0';                // mark end of string in 's2'
   
   printf("%s\n", s2);           // display the content of variables
   
   return <｜begin▁of▁sentence｜>;                   // use <string.h> for <｜begin▁of▁sentence｜>, returning value 0 indicates success
}
```
This code creates two strings `s` and `literal` which are then concatenated to form another string `s2`. The contents of all three strings (`s`, `literal` and `s2`) are printed on the console using `printf()`. 

Please note that in C, you should manually manage memory for your strings, unlike Java where it's handled automatically by the garbage collector. In the provided code we used static string literals (arrays), if you use dynamically allocated strings, don’t forget to free them when they are no longer needed to prevent memory leaks.

