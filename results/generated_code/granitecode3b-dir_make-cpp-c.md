Here's the C code that implements the same functionality as the C++ code using the mkdir function from the libc library:
```c
#include 
#include 
int main(int argc, char* argv[]) {
 if (argc != 2) {
 fprintf(stderr, "usage: %s <path>\n", argv[0]);
 return 1;
 }
 mkdir(argv[1], S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
 return 0;
}
```
Note that the C code uses the `mkdir` function from the libc library to create directories. The `S_IRWXU`, `S_IRWXG`, `S_IROTH`, and `S_IXOTH` constants are used to set the permissions of the newly created directory, allowing it to be read, write, and executed by the owner, group, others, and their respective groups.

