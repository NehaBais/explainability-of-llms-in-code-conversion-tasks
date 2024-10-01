### Solution - Python to C
```c
#include <stdio.h>
#include <string.h>
int main() {
    char* str = "abcdefgh";
    int n = 2, m = 3;
    char ch = 'd';
    const char *chars = "cd";
    // starting from n characters in and m length;
    printf("%s\n",str + n - 1);
    printf("%.*s\n",m , str+n-1);
    //starting from n characters in, up to the end of the string;
    printf("%s\n",str+n-1);
    //whole string minus last character;
    printf("%s\n",str);
    int i = 0;
    for(i=0; str[i]!='\0';++i){}
    printf("%.*s\n",--i, str );
    //starting from a known character char="d" within the string and of m length;
    int len = strlen(str);
    printf("%.*s\n",m , (str+len-1)-strlen(&chars[0])+1);
    // starting from a known substring chars="cd" within the string and of m length. 
    strcat((char*)&chars, str);
    printf("%.*s\n",m , &chars[(int)strlen(str)-1]-strlen(&chars[0]));
}
```
### Output - Python to C 

abcdefgh
def
abcde
abcdfgh
efg
bcdef

