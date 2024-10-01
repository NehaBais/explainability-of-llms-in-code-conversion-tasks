Here's the equivalent C code for creating a directory and any missing parents, using the mkdir() function from the POSIX library:
```
#include 
#include 
int main(int argc, char *argv[]) {
 struct stat st;
 int result = stat("path/to/dir", &st);
 if (result == -1) {
 // If directory doesn't exist, create it.
 mkdir("path/to/dir", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
 } else {
 // Directory already exists.
 }
 return 0;
}
```
In this code, we use the stat() function to check if the directory exists. If it doesn't exist, we use the mkdir() function to create it with the desired permissions. We can also use the access() function to check for file-related errors and handle them accordingly.

