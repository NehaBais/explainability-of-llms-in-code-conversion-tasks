The error occurred because the linker couldn't find the "main" function which is the entry point of any executable program. The "mkdir_p" function appears to be a utility function for creating directories, but it's not defined in a way that the main() function can call it directly. You will need to define a main() function and call mkdir_p from within it.

The fix for the error is to define a main() function that calls the mkdir_p() function.
The corrected code would look like this:
```cpp
#include <string>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int mkdir_p(const char *dir) {
  struct stat st;

  if (stat(dir, &st) == 0 && S_ISDIR(st.st_mode))
    return 0; // directory already exists

  size_t len = strlen(dir);
  while (1 < len && dir[len - 1] != '/')
    --len;

  char *parentDir = new char[len];
  std::strncpy(parentDir, dir, len);
  parentDir[len] = '\0'; // terminating null character

  int result = mkdir_p(parentDir);
  delete[] parentDir;

  if (result != 0) {
    return result; // creation of parent directory failed
  }

  errno = 0;
  if (mkdir(dir, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) == 0) {
    return 0; // directory created successfully
  } else {
    return -1; // failed to create directory
  }
}

int main(void) {
    mkdir_p("/tmp/some/path/to/dir");
    return 0;
}
```