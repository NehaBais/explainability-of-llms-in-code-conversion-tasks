In C++, we can use the `access()` function from the `unistd.h` header file to check for these conditions. Also, we need to include `<cstdio>` instead of `os` module. Here is how it could be done:

```cpp
#include <cstdio>
#include <cstring>

int main() {
  const char *filename = "input.txt";
  if(access(filename, F_OK) == 0){ //Check for file existence in current working directory
    printf("File exists\n");
  } else{
    printf("File does not exist or is not readable in current directory\n");
  }
   const char *dirname = "/docs";
  if (access(dirname, R_OK | F_OK) == 0){ //Check for file existence and readability in root directory
    printf("Directory exists and is readable in root\n");
  } else {
    printf("Directory does not exist or is not readable in root\n");
  }
  return 0;
}
```

The major differences between the C++ code and Python one include that we're using `access()` function instead of `os.path.isfile()`, `os.path.isdir()`, but they behave the same way. Also, it checks for existence and readability of files in root directory as compared to current working directory.

The error "use of undeclared identifier 'stricmp'" was resolved by including <cstring> instead of <os>.

Note: `R_OK` is a constant defined in `unistd.h` which means the file is readable. `F_OK` is another constant that the `access()` function uses to check if the file exists or not.
