Here is the converted C code:
```c
#include 
#include 
#include 
int main(int argc, char *argv[]) {
 if (argc != 2) {
 fprintf(stderr, "Usage: %s filenamen", argv[0]);
 return 1;
 }
 struct stat file_info;
 int fd = open(argv[1], O_RDONLY);
 if (fd == -1) {
 perror("open");
 return 2;
 }
 if (fstat(fd, &file_info) == -1) {
 close(fd);
 perror("fstat");
 return 3;
 }
 printf("Size of file.txt is %ld bytesn", (long)file_info.st_size);
 close(fd);
 return 0;
}
```
Explanation:
The C code starts by checking if the number of arguments passed to the program is equal to 2. If not, it prints an error message and returns 1. Then, it creates a structure called `file_info` to store file information, and opens the file with read-only permission using the `open()` function. If the open operation fails, it prints an error message and returns 2.
Next, it uses the `fstat()` function to get information about the file descriptor returned by `open()`. This function populates the `file_info` structure with information such as the size of the file in bytes, among other things. If the `fstat()` operation fails, it closes the file descriptor returned by `open()`, prints an error message and returns 3.
Finally, it uses printf() to print the size of the file in bytes and closes the file descriptor before returning 0.
Note that this code assumes the availability of header files such as `stdio.h`, `stdlib.h`, `sys/stat.h` and `unistd.h`. Additionally, some functions used in the Rust code are not directly supported by C, so the equivalent functions are used instead.

