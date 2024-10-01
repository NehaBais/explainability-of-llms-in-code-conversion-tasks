Answer: The following code is the C version of the above c++ function 
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void file_exists(const char *path) {
    printf("%s", path);
    if (  exists(path) ) {
    	if ( is_directory(path) ) {
    		printf(" is a directory\n");
    	} else {
    		printf(" exists with a file size of %lld bytes.\n", get_file_size(path));
    	}
    } else {
        printf(" does not exist\n");
    }
}

int main() {
	file_exists("input.txt");
	file_exists("zero_length.txt");
	file_exists("docs/input.txt");
	file_exists("docs/zero_length.txt");
}
```
