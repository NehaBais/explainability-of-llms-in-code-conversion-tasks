### Pseudocode:

FUNCTION logic(a, b):
    print("a AND b: " + str(a AND b))
    print("a OR b: " + str(a OR b))
    print("NOT a: " + str(NOT a))
    
logic(True, False)

### Code
```c
#include <stdio.h>
#include <stdbool.h>

void logic(bool a, bool b){
    printf("a AND b: %s\n", (a && b) ? "true" : "false");
    printf("a OR b: %s\n", (a || b) ? "true" : "false");
    printf("NOT a: %s\n", (!a) ? "true" : "false");
}

int main(){
    logic(true, false);

    return 0;
}
```
