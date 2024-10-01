Here is the converted code from Golang to C:
```c
#include 
#include 
int main() {
  struct stat buf;
  const char *path = "input.txt";
  if (stat(path, &buf) != 0) {
    perror("Error getting information about input.txt");
    return 1;
  }
  printf("%s: ", path);
  if (S_ISDIR(buf.st_mode)) {
    printf("is a directoryn");
  } else {
    printf("is a filen");
  }
  char *root = "/";
  const char *path2 = "/input.txt";
  if (stat(path2, &buf) != 0) {
    perror("Error getting information about /input.txt");
    return 1;
  }
  printf("%s: ", path2);
  if (S_ISDIR(buf.st_mode)) {
    printf("is a directoryn");
  } else {
    printf("is a filen");
  }
  const char *path3 = "docs";
  if (stat(path3, &buf) != 0) {
    perror("Error getting information about docs");
    return 1;
  }
  printf("%s: ", path3);
  if (S_ISDIR(buf.st_mode)) {
    printf("is a directoryn");
  } else {
    printf("is a filen");
  }
  char *root2 = "/";
  const char *path4 = "/docs";
  if (stat(path4, &buf) != 0) {
    perror("Error getting information about /docs");
    return 1;
  }
  printf("%s: ", path4);
  if (S_ISDIR(buf.st_mode)) {
    printf("is a directoryn");
  } else {
    printf("is a filen");
  }
  return 0;
}
```
This code uses the `stat()` function to get information about files and directories, and then prints out whether each path is a file or directory. It does this twice: once for the current working directory (specified by passing "." as the first argument to `stat()`) and once for a file and a directory in the filesystem root (specified by passing "/" as the first argument to `stat()`).

