In C, you can use the `stat()` function to retrieve information about a file, including its size. The following is an example of how you could modify the given Python code to work in C:
```
#include <stdio.h>
#include <sys/stat.h>

int main() {
    struct stat st;
    long size1, size2;

    // Get the size of file input.txt in the current working directory
    if (stat("input.txt", &st) == 0) {
        size1 = st.st_size;
    } else {
        printf("Error: %s\n", strerror(errno));
    }

    // Get the size of file /input.txt in the file system root
    if (stat("/input.txt", &st) == 0) {
        size2 = st.st_size;
    } else {
        printf("Error: %s\n", strerror(errno));
    }

    return 0;
}
```
This code defines a `struct stat` variable named `st`, which is used to store the results of the `stat()` function. The `stat()` function takes two arguments: the first is the path to the file, and the second is a pointer to a `struct stat` object. The function returns 0 if the operation was successful, or an error code if it failed.

In the code above, we call `stat()` twice, once for each file we want to get the size of. We pass the path to each file as the first argument, and the pointer to the `struct stat` object as the second argument. If the operation is successful, we store the result in the corresponding variable. If it fails, we print an error message using the `strerror()` function, which takes an error code as its input and returns a string describing the error.

Note that in C, the concept of a "current working directory" does not exist in the same way as it does in Python. In C, you can only access files and directories by their absolute path or by using a relative path starting from the root directory ("/"). Therefore, the code above uses the absolute path to both files to get their sizes.
