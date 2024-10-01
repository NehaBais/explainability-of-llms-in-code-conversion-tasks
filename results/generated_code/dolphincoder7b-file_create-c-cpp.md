Below is the C++ equivalent of the given code:

```c++
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
  int fd = open("output.txt", O_WRONLY|O_CREAT|O_TRUNC, 0640);  // rights 0640 for rw-r-----
   /* or equivalently:
     int fd  = creat("output.txt", 0640);  */  // rights 0640 for rw-r-----
  close(fd);

  mkdir("docs", 0750);   // rights 0750 for rwxr-x---
  return 0;
}
```
This is a simple code conversion from C to C++. The syntax and functionality is almost identical across these two languages. However, C++ has several key features that C lacks which require some adjustments in terms of memory management and error handling. For example, in C, a file descriptor is an integer type (int), whereas in C++, it's of the "file" class and can be used with input/output operations to read or write from files. The main difference is that C++ uses "try-catch" blocks for exception management, which are not available in plain C.

Please note that while this translation might look similar, the actual behavior is quite different between C and C++. In C, the system call `open` (or `creat`) will fail if the file already exists, which means it can overwrite an existing file. The code snippet you posted does not create a new output file; it just overwrites any existing one with the same name. If you want to create a new file, you need to modify the `O_TRUNC` flag.

If you are looking for more complex tasks like reading and writing files or using classes to work with files, consider using C++ instead of plain C as it will provide a much more manageable solution to these problems.
