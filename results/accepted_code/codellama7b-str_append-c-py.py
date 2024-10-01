#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Good Morning";
    const char* cstr = " to all";
    const char* cstr2 = " !!!";
    int x;

    if (sizeof(str) > strlen(str) + strlen(cstr) + strlen(cstr2)) {
        // 1st method: using strcat() function
        strcat(str, cstr);
        strcat(str, cstr2);

        printf("%s\n", str);
    }
    return 0;
}