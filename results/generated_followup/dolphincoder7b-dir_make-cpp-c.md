The error message indicates that the function `dirname` is not recognized by the compiler, which is a C function in the C standard library rather than being a part of C++ standard library. The C standard does not support implicit function declarations, and therefore it requires explicit declarations for all functions used inside a C program. Similarly, the function `strerror` is also undefined and should be replaced by a declaration or an inclusion of the header file `<string.h>`.

The corrected code block now includes these corrections:
```c
#include  <errno.h>
#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>
#include  <sys/stat.h>
#include  <unistd.h>

int mkdirs(const char *dirPath, mode_t dirMode) {
  int ret = 0;

  if (mkdir(dirPath, dirMode | S_IRUSR  | S_IWUSR  | S_IXUSR) != 0) {
    if (errno == ENOENT) {
       /* parent doesn't exist, try to create it  */
      const char *parent = dirname(dirPath);
      if (!mkdirs(parent, dirMode)) {
         /* re-create the directory  */
        if (mkdir(dirPath, dirMode | S_IRUSR  | S_IWUSR  | S_IXUSR) != 0) {
          perror("mkdir");
          ret = -1;
         }
       }
     } else {
      fprintf(stderr, "Error creating directory '%s': %s\n", dirPath,
              strerror(errno));
      ret = errno;
     }
   }

  return ret;
}
```
