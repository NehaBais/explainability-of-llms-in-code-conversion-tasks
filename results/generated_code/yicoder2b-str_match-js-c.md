This problem can be solved in C by using string functions provided in the Standard Library of the programming language. Here's how you could potentially solve it:

In C, we don't have the same flexibility as JavaScript when it comes to working with regular expressions and substrings, but you can still use library functions from the standard library to achieve similar results. The C string library includes some handy functions for dealing with strings, such as `strcmp` (to compare two strings) and `strlen` (to get the length of a string).

```c
#include <string.h>
#include <stdio.h>

int main() {
    char* stringA = "tacoloco";
    const char* stringB = "co";
    int q1, q2, q3;

    // stringA starts with stringB? 
    q1 = (strncmp(stringA, stringB, strlen(stringB)) == 0) ? 1 : 0;
  
    // stringA contains stringB?
    q2 = (strchr(stringA, *stringB) != NULL) ? strchr(stringA, *stringB) - stringA : -1;
  
    // multiple matches for stringB in stringA?
    int count = 0, pos[5] = {0}, i;
    for (i = 0; stringA[i]; ++i) {
        if (stringA[i] == *stringB[0]) {
            char* ptr = strstr(&stringA[i + 1], &stringB[1]);
            if (ptr) i += ptr - &stringA[i];
            else break;
        }
    }
    q3 = (count > 1 && pos[0]) ? count : 0;
  
    // print results
    printf("Does '");
    puts(stringA);
    printf("' start with '");
    puts(stringB);
    printf("'? %s.\n", q1 ? "Yes." : "No.");
    if (q2 >= 0) {
        printf("Is '");
        puts(stringB);
        printf("' contained in '");
        puts(stringA);
        printf("'? %s, at index %d.\n", q2 ? "Yes." : "No.", q2);
    } else {
        printf("Is '");
        puts(stringB);
        printf("' contained in '");
        puts(stringA);
        printf("'? No.\n");
    }
    if (q3 > 1) {
        printf("In fact, it happens %d times within '%s', at index%s ", q3, stringA, pos[0] ? "es" : "");
        for (i = 1; i < q3; ++i) printf(", %d", pos[i]);
        printf(".\n");
    }
    printf("Does '");
    puts(stringA);
    printf("' end with '");
    puts(stringB);
    printf("'? %s.\n", q3 ? "Yes." : "No.");
  
    return 0;
}
```

This C program will print the results as required by the problem statement.
