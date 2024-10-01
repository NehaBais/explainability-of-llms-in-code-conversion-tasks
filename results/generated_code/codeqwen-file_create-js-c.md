C does not have a built-in file system manipulation library that is directly comparable to Node.js's "fs" module. For this reason, we need to use the POSIX functions which are part of C standard library.

Here's how you would convert your JavaScript code to C:

```c
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

void fct(int err) {
  if (err != 0) {
    perror("Error");
  }
}

int main() {
  // Create an empty file in the current directory
  if (open("output.txt", O_CREAT | O_EXCL, S_IRUSR | S_IWUSR) < 0) {
    fct(1);
  }
  // Create an empty file in the root directory
  if (open("/output.txt", O_CREAT | O_EXCL, S_IRUSR | S_IWUSR) < 0) {
    fct(2);
  }

  // Create a new directory in the current directory
  if (mkdir("docs", S_IRUSR | S_IWUSR | S_IXUSR) == -1) {
    fct(3);
  }
  // Create a new directory in the root directory
  if (mkdir("/docs", S_IRUSR | S_IWUSR | S_IXUSR) == -1) {
    fct(4);
  }

  return 0;
}
```

This C code creates an empty file and a new directory using the "open" function to create files and the "mkdir" function to create directories. The flags passed to these functions mimic those in Node.js's `fs.writeFile` and `fs.mkdir`. After creating or creating, it checks for any errors with the "perror" function and calls our custom error handler if an error occurred.

Note that unlike Node.js, C does not have built-in support for path joining like '/docs' + 'otherDir'. In such case, you would need to concatenate the paths manually or use a library like GNU libc `realpath()` function to resolve relative paths to absolute paths.
