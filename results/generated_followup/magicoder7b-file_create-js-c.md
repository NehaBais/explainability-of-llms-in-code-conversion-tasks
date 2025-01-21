The error is occurring because C99 standard does not support implicit function declarations as JavaScript does. In other words, C compiler needs an explicit declaration for any function we're going to use in our program before it can compile the code. 

The fix is to add the header <string.h>, which contains the declaration for strerror function, and declare the open() function by yourself because it is not a standard library function. This modification would look like this:

```c
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

void fct(int err) {
  if (err != 0)
    printf("Error: %s\n", strerror(err));
}

// Declare the open() function by yourself since it is not a standard library function
int open(const char *pathname, int flags) {
  return open(pathname, flags, S_IRUSR | S_IWUSR);
}

int main() {
  int result = open("output.txt", O_CREAT | O_EXCL, 0644); // 0644 = User Read/Write (RW) / Group Read Only (RO) / Other Read Only (RO)
  if (result < 0)
    fct(errno);

  result = open("/output.txt", O_CREAT | O_EXCL, 0644);
  if (result < 0)
    fct(errno);

  return 0;
}
```

The file will be created with read & write permissions for the user only, because we're using S_IRUSR | S_IWUSR (User Read/Write). If you need other permissions for specific users or groups, adjust accordingly.
