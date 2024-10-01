
Here's the C code that meets your requirements: 
```
#include <stdio.h>
#include <io.h>
#include <fcntl.h>

int main(void) {
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening file input.txt");
        exit(1);
    }

    printf("Size of input.txt: %ld\n", ftell(inputFile));

    fclose(inputFile);

    FILE *rootInputFile = fopen("c:/input.txt", "r");
    if (rootInputFile == NULL) {
        perror("Error opening file c:/input.txt");
        exit(1);
    }

    printf("Size of c:/input.txt: %ld\n", ftell(rootInputFile));

    fclose(rootInputFile);

    return 0;
}
```
This code uses the `fopen()` function to open a file named `input.txt` in the current working directory and another one with the same name but located in the root of the C: drive. The `ftell()` function is then used to get the size of each file and display it on the screen.
