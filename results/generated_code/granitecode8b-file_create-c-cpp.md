Here is the converted code from C to C++:
```
#include 
#include 
int main() { // permissions are before umask
 int fd = open("output.txt", O_WRONLY|O_CREAT|O_TRUNC, S_IRUSR|S_IWUSR); // rights 0640 for rw-r-----
 close(fd);

 mkdir("docs", S_IRWXU|S_IXGRP|S_IXOTH); // rights 0750 for rwxr-x---
 return 0;
}
```
In the converted code, we have used the `open()` function to create a file called "output.txt" with read and write permissions for the owner and no permissions for any other user. We have also used the `mkdir()` function to create a directory called "docs" with read and execute permissions for the owner, read and execute permissions for the group, and no permissions for any other user.

