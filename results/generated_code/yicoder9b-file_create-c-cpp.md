Here is the equivalent C++ code:

```cpp
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <cstdlib> 

int main() {
    // permissions are before umask
    int fd = open("output.txt", O_WRONLY|O_CREAT|O_TRUNC, 0640); // rights 0640 for rw-r-----
    /* or equivalently:
       int fd = creat("output.txt", 0640); */ // rights 0640 for rw-r-----
    close(fd);

    mkdir("docs", 0750); // rights 0750 for rwxr-x---

    return 0;
}
```

However note that the C++ Standard Library does not provide any functions equivalent to `open` or `mkdir`. The functionality you need can be achieved using the functions provided by the C Standard Library, such as `open` and `mkdir` used in this code snippet. 

Also please ensure your C++ environment supports these system calls. If it does not, you might have to wrap them inside an extern "C" block or implement equivalent functionality with other available C++ methods.
