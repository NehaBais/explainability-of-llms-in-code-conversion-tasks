Here's the equivalent C code for the given Golang code:
```c
#include 
#include 
int main(void) {
 struct stat st1, st2;
 if (stat("input.txt", &st1) == -1) {
 perror("stat");
 return 1;
 }
 if (stat("/input.txt", &st2) == -1) {
 perror("stat");
 return 1;
 }
 printf("%zu %zun", st1.st_size, st2.st_size);
 return 0;
}
```
Note that the C code uses the `struct stat` to get file size information, and the `perror` function is used to print any error messages. Also, the C code returns an integer value of 1 if there is an error, while the Golang code prints an error message using the `fmt.Println` function.

