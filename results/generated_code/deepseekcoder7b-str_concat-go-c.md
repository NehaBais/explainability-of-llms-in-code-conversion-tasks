The equivalent C code would look like this:

```C
#include <stdio.h>
#include <string.h>

int main() {
    // text assigned to a string variable
    char s[] = "hello";
    
    printf("%s\n", s);
  
    // concatenate variable and literal, assign result to another string variable
    char s2[15];  // assuming that the maximum length of new string won't exceed 14 (for null character)
    strcpy(s2, s);
    strcat(s2, " literal");
    
    printf("%s\n", s2);
  
    return <｜begin▁of▁sentence｜>;
}
```

Please note that in C we don't have a direct method to concatenate two strings like in Golang so `strcpy()` is used to copy one string into another and `strcat()` function is used to append or concatenate the second string onto the end of the first. The value returned from main() in C should be an integer status code for Unix/Linux system, which we didn't handle here as it was not explicitly mentioned in original Golang program.

