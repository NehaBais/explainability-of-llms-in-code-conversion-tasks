In C programming language there is no direct equivalent for getting size of a file as it's done in Python but we can use the fseek and ftell functions from stdio library to get the size. Here is how you could do this:

```C
#include <stdio.h> 

long getFileSize(char *filename) {  
    FILE *f = fopen(filename, "r");  
    if (!f) return -1; // Return error if the file can't be opened  

    fseek(f, 0, SEEK_END);   // Set position indicator to end of file  
    long size = ftell(f);    // Get current position which is size of file  

    fclose(f); // Always close the file after you are done with it.

    return size;  
} 

int main() {   
    printf("Size of input.txt: %ld\n", getFileSize("input.txt"));
    // Note that getting absolute path to root is OS dependent and may not be simply '/'
    printf("Size of /input.txt: %ld\n", getFileSize("/input.txt")); 
}  
```

Please note that it returns -1 if the file can’t be opened which indicates an error occurred while getting the size. In a real-world application you would probably want to handle these errors in a more user-friendly way.
