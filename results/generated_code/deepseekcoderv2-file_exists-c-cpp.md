### Answer

The following code converts the C program to C++ and includes an additional function to print the name of the file or directory. It also checks if both input.txt and docs exist in the current working directory, as well as /input.txt and /docs in the root filesystem.

```c++
#include <iostream>
#include <sys/stat.h>
#include <unistd.h>

// Check for regular file.
int check_reg(const char *path) {
	struct stat sb;
	return stat(path, &sb) == 0 && S_ISREG(sb.st_mode);
}

// Check for directory.
int check_dir(const char *path) {
	struct stat sb;
	return stat(path, &sb) == 0 && S_ISDIR(sb.st_mode);
}

void printFileOrDirectory(const std::string& path, int (*check)(const char*)) {
	if (check(path.c_str())) {
		std::cout << path << " is a ";
	} else {
		std::cout << path << " is not a ";
	}
}

int main() {
	// Check for regular file and directory in the current working directory.
	printFileOrDirectory("input.txt", check_reg);
	std::cout << std::endl;
	printFileOrDirectory("docs", check_dir);
	std::cout << std::endl;

	// Check for regular file and directory in the root filesystem.
	printFileOrDirectory("/input.txt", check_reg);
	std::cout << std::endl;
	printFileOrDirectory("/docs", check_dir);
	std::cout << std::endl;

	return 0;
}
```
