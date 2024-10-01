The C++ version of the code remains essentially the same. We are calling `stat()` function to get information about a file or directory. The return value from this call is then used with `S_ISREG()` and `S_ISDIR()` macros, respectively, to check if it's a regular file or a directory:

```cpp
#include <sys/types.h> 
#include <sys/stat.h>
#include <iostream>
#include <unistd.h>

/* Check for regular file. */
bool check_reg(const char *path) {
	struct stat sb;
	return stat(path, &sb) == 0 && S_ISREG(sb.st_mode);
}

/* Check for directory. */
bool check_dir(const char *path) {
	struct stat sb;
	return stat(path, &sb) == 0 && S_ISDIR(sb.st_mode);
}

int main() {
	std::cout << "input.txt is a regular file? " << (check_reg("input.txt") ? "yes\n" : "no\n");
	std::cout << "docs is a directory? " << (check_dir("docs") ? "yes\n" : "no\n");
	std::cout << "/input.txt is a regular file? " << (check_reg("/input.txt") ? "yes\n" : "no\n");
	std::cout << "/docs is a directory? " << (check_dir("/docs") ? "yes\n" : "no\n");
	return 0;
}
```
Please note that C++ uses `bool` instead of `int` for logical values. Also, the `std::cout` object is used instead of `printf()`.
