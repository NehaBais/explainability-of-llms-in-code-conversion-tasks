In C, the code would look like this:

Note that `strncmp` and `strstr` are used for the starts with and contains string part respectively. For ends with we use a custom function. And to handle multiple occurrences of string in C you have to iterate over it or create your own function to do so. 

```c
#include <stdio.h>
#include <string.h>

void find_all(const char *str, const char *sub) {
    char *ptr = strstr(str, sub);
    
    if (ptr != NULL) {
        printf("Found at index %ld\n", ptr - str);
        ++ptr;
        while ((ptr = strstr(ptr, sub))!=NULL) {
            printf("Found at index %ld\n", ptr - str);
            ++ptr;
        } 
    }
}

int main() {
   char stringA[]  = "tacoloco";
   char stringB[] = "co";

   // Checking if String A starts with string B
   if(strncmp(stringA, stringB, strlen(stringB)) == 0) 
      printf("1: Yes\n");
   else 
      printf("1: No\n");
      
   // Checking for any occurrence of String B in String A
   find_all(stringA, stringB);
   
   // Checking if String A ends with string B
   size_t lenA = strlen(stringA);
   size_t lenB = strlen(stringB);
   if (lenA >= lenB && strncmp(stringA + lenA - lenB, stringB, lenB) == 0) 
      printf("3: Yes\n");
   else 
      printf("3: No\n");
      
   return <｜begin▁of▁sentence｜>kip this line!;
}
```
The `find_all` function finds all occurrences of the substring in stringA and prints their indices. It uses strstr() which is not a standard C library function, but often available on various systems, including Windows and POSIX compliant systems like Linux or Mac OS X. 

Do note that error checking is omitted for simplicity, so use this as a starting point and add appropriate checks in your production code. Also keep in mind that string manipulation functions like strncmp() used here modify their destination strings by appending null characters after the matched parts which could lead to unexpected behavior if you are considering them as constant or not fully consumed input strings.

