The C programming language does not have a built-in method like Python for getting the size of a file, as it is handled differently. Here's how you could do this in C using standard library functions:

```c
#include <stdio.h>
#include <sys/stat.h>

off_t get_file_size(char* filename) {
    struct stat st; 
    if (stat(filename, &st) == 0)
        return st.st_size;

    return -1; // Returning -1 to indicate error
}

int main() {
    off_t file_size = get_file_size("./input.txt");
    
    if (file_size != -1) 
        printf("%lld\n", file_size);
    else 
        perror("stat"); // This will print an error message in case of failure
        
    return 0;
}
```
For the root directory, you would just change "./input.txt" to "/input.txt". The result is printed on standard output and can be redirected as needed.

