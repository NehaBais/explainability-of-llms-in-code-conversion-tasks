#### Answer 13
```c
#include <stdbool.h>
void logic(bool, bool);
int main() {
    int first = 0;
    int second = 0;
    printf("Input two numbers, a and b.\n");
    scanf("%d %d", &first, &second);
    if (first && second) {
        printf("a AND b is true\n");
    } else {
        printf("a AND b is false\n");
    }
    if (!first || !second) {
        printf("a OR b is false\n");
    } else {
        printf("a OR b is true\n");
    }
}
```
