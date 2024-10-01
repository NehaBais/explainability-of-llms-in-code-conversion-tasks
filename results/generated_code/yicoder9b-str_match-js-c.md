Here is a C version of the JavaScript code above:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char stringA[] = "tacoloco";
    char stringB[] = "co";

    // Does 'stringA' start with 'stringB'?
    if (strncmp(stringA, stringB, strlen(stringB)) == 0) {
        printf("1: Does '%s' start with '%s'? Yes.\n", stringA, stringB);
    } else {
        printf("1: Does '%s' start with '%s'? No.\n", stringA, stringB);
    }

    // Is 'stringB' contained in 'stringA'?
    char* ptr = strstr(stringA, stringB);
    if (ptr != NULL) {
        printf("2: Is '%s' contained in '%s'? Yes, at index %ld.\n", stringB, stringA, ptr - stringA);

        // multiple matches
        int count = 0;
        char* temp = strstr(stringA, stringB);
        while (temp) {
            count++;
            printf("   In fact, it happens %d times within '%s', at index%s %ld.\n", count, stringA, count > 1? "es" : "", temp - stringA);
            temp = strstr(temp + 1, stringB);
        }
    } else {
        printf("2: Is '%s' contained in '%s'? No.\n", stringB, stringA);
    }

    // Does 'stringA' end with 'stringB'?
    size_t len = strlen(stringA);
    if (strcmp(stringA + len - strlen(stringB), stringB) == 0) {
        printf("3: Does '%s' end with '%s'? Yes.\n", stringA, stringB);
    } else {
        printf("3: Does '%s' end with '%s'? No.\n", stringA, stringB);
    }

    return 0;
}
```
