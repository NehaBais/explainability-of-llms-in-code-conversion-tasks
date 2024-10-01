 The JavaScript code provided does not have any direct C equivalent, since the syntax and methods used in the JavaScript code to perform string matching are language-specific. However, there is a way to achieve similar results in C using functions such as strncmp() for checking if strings start with or end with each other, or strstr() for checking if one string contains another. Here's how you can do it:

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char stringA[] = "tacoloco";
    char stringB[] = "co";
    int q1, q2;
  
    // stringA starts with stringB
    q1 = strncmp(stringA, stringB, sizeof(stringB)-1);

    // stringA contains stringB
    q2 = (strstr(stringA, stringB) != NULL);
    
    printf("1: Does '");
    for(int i=0;i<sizeof(stringA);i++) { 
        if(stringA[i]=='\0') break;
        printf("%c", stringA[i]);
    }
    printf("' start with '");
    for(int i=0;i<sizeof(stringB)-1;i++) { 
        if(stringB[i]=='\0') break;
        printf("%c", stringB[i]);
    }
    printf("'? %s\n", (q1 == 0) ? "Yes." : "No.");
    
    printf("2: Is '");
    for(int i=0;i<sizeof(stringB);i++) { 
        if(stringB[i]=='\0') break;
        printf("%c", stringB[i]);
    }
    printf("' contained in '");
    for(int i=0;i<sizeof(stringA);i++) { 
        if(stringA[i]=='\0') break;
        printf("%c", stringA[i]);
    }
    printf("'? %s\n", (q2) ? "Yes." : "No.");
    
    return 0;
}
```
Please note that this is a simple representation and it doesn't contain the 'multiple matches' functionality as in your JavaScript code. To implement this in C, you would need to use loops or a function similar to strstr() that returns an index if the substring is found, or keep track of such indices while scanning through the string using strstr().
Also remember to handle NULL character ('\0') when printing out strings because they mark the end of each string in C.
