#include <stdio.h>

void compare(const char* a, const char* b) {
    int result = strcmp(a, b);

    switch (result) {
        case 0:
            printf("%s is equal to %s\n", a, b));
            break;
        case -1:
            printf("%s is less than %s\n", a, b));
            break;
        case 1:
            printf("%s is greater than %s\n", a, b));
            break;
    }
}

int main() {
    const char* args[] = {"hello", "world"}};

    compare(args[0], args[1]));

    return 0;
}