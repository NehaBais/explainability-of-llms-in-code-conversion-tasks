```
#include <stdio.h>
#include <string.h>

int main() {
    char *s1 = "hello"; // String variable equal to any text value.
    printf("%s\n", s1);

    char *s2 = (char*) malloc(strlen(s1) + strlen(" world") + 1); // Another string variable whose value is the original variable concatenated with another string literal.
    strcpy(s2, s1);
    strcat(s2, " world");
    printf("%s\n", s2);

    char *s3 = ", ".join([s1, "world", "mom"]); // String variable equal to any text value.
    printf("%s\n", s3);

    char *s4 = (char*) malloc(strlen(s1) + strlen(", ") + strlen("world") + 1 + strlen("mom") + 1); // Another string variable whose value is the original variable concatenated with another string literal.
    strcpy(s4, ", ");
    strcat(s4, s1);
    strcat(s4, " world");
    strcat(s4, " mom");
    printf("%s\n", s4);

    return 0;
}
```
