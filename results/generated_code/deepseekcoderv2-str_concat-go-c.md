## Solution 1 - C code
```
#include <stdio.h>
#include <string.h>

void main() {
    // text assigned to a string variable
    char s[] = "hello";

    // output string variable
    printf("%s\n", s);

    // this output requested by original task descrption, although
    // not really required by current wording of task description.
    printf("%s literal\n", s);

    char *p;
    p = (char*)malloc(strlen("literal") + 1);
    strcpy(p, "literal");

    // concatenate variable and literal, assign result to another string variable
    char s2[80];
    sprintf(s2, "%s%s", s, p);

    free(p);

    printf("%s\n", s2);
}
```

