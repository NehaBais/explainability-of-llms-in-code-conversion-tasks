Answer: In C, you can use the `strcmp` function to compare two strings. The syntax for using it is as follows:

The following code snippet demonstrates how to compare two strings using `strcmp()`:
```c
#include <stdio.h>
int main(){
    char str1[20]="hello";  
    char str2[20]="hello world!";  
    printf("%d",strcmp(str1,str2));  
} 
```
