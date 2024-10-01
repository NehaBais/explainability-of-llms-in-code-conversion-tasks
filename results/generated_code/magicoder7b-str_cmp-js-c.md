 C does not support the direct comparison of strings as in JavaScript, but provides ways to compare character arrays. Here's how you can convert your provided code into C language:

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[50] = "abcd";
    char str2[50] = "abcd";
    printf("%d\n",strcmp(str1, str2)==0); // true
    printf("%d\n",strcmp(str1, str2)==strcmp(str1,str1)); // true
    printf("%d\n",atoi("123") == atoi(str2)); // true
    printf("%d\n",atoi("123") != atoi(str2)); // false
    char str4[50] = "ABCD";
    printf("%d\n",strcmp(str4, str1)==0); // false
    printf("%d\n",strncmp(str4, str1, 4)!=0); // true
    printf("%d\n",strtol("123", NULL, 10) == atoi(str2)); // false
    printf("%d\n",atoi("123") > atoi(str2)); // false
    printf("%d\n",strncmp(str4, str1, 4)<0); // true
    
    return 0;
}
```
Please note: C is case sensitive by default. So if you want to compare two strings in a case insensitive way, you can convert both to lowercase/uppercase before comparing. Also, this example only compares numerical strings as integers for demonstration purposes. To demonstrate string lexical comparison, you would need different strings with non-numerical contents.
