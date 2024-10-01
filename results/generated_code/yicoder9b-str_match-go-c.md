Here is the equivalent C code for your Golang program: 
```c
#include <stdio.h>
#include <string.h>

void match(char *first, char *second){
    printf("1. %s starts with %s: %d\n", first, second, strstr(first, second) == first);
    int i = strstr(first, second) - first;
    printf("2. %s contains %s: %d, ", first, second, i >= 0);
    if (i >= 0){
        printf("at location %d\n", i);
        char *start = strstr(first + i + 1, second);
        while(start) {
            printf("and at location %ld ", start - first);
            start = strstr(start+1, second);
        }
    }   
    printf("3. %s ends with %s: %d\n", 
           first, second, strcmp(first + (strlen(first) - strlen(second)), second) == 0);
}

int main() {
    match("abracadabra", "abr");
    return 0;
}
```
This program does exactly the same as your original Golang one. It checks if `first` string starts with `second` (1), if it contains `second` at any location and prints its locations when found (2), and if it ends with `second` (3). For points 2.1 and 2.2 multiple occurrences of the second string in the first are also handled.
