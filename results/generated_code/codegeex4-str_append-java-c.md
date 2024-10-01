```c
#include <stdio.h>
#include <string.h>

int main() {
    char string[100] = "abc"; 
    printf("%s\n", string); 
    strcat(string, "def"); 
    printf("%s\n", string); 
    
    return 0;
}
```
