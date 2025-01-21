The error message indicates that the compiler is unable to find the `stat` function definition, which is required for compilation of the code. To fix this issue, we can add an include directive for the `<sys/stat.h>` header file, which contains the stat function declaration. 

Once we have added this include directive, the code should compile successfully. Here's the corrected version:
```c
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

void print_file_size(const char  *file) {
  struct stat st;
  if (stat(file, &st) == -1) {
    perror("stat");
   } else  {
    printf("%lld\n", st.st_size);
   }
}

int main() {
  print_file_size("input.txt");
  print_file_size("/input.txt");
  return 0;
}
```
