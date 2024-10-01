Here is the C version of the code:
```
#include <stdio.h>
#include <stdlib.h>
 
int mkdir_p(const char *path) {
 int status;
 mode_t mode = S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH;
 
 if ((status = mkdir(path, mode)) == 0) {
 return 0;
 } else if (errno == EEXIST) {
 return 1;
 } else {
 perror("mkdir");
 exit(EXIT_FAILURE);
 }
}
 
int main(int argc, char *argv[]) {
 int status = 0;
 
 if (argc != 2) {
 fprintf(stderr, "usage: mkdir <path>n");
 return EXIT_FAILURE;
 }
 
 status = mkdir_p(argv[1]);
 if (status == 0) {
 return 0;
 } else {
 perror("mkdir");
 return EXIT_FAILURE;
 }
}
```

