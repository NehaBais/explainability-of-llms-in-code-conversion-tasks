Sure, here is the equivalent C++ code that achieves the same functionality. Note that C++ does not have a built-in way to get the current working directory or directly create directories and files like Rust's standard library does. We will use system calls (`mkdir` for directories and `open` for files) to accomplish this.

```cpp
#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <unistd.h>

const std::string FILE_NAME = "output.txt";
const std::string DIR_NAME = "docs";

void createFilesAndDirectory(const std::string& root) {
    // Create directory
    if (mkdir(root + "/" + DIR_NAME.c_str(), 0755) == -1) {
        perror("Error creating directory");
        return;
    }

    // Create file
    std::ofstream ofs(root + "/" + FILE_NAME, std::ios::out | std::ios::trunc);
    if (!ofs.is_open()) {
        perror("Error creating file");
        return;
    }
    ofs.close();
}

void errorHandler(const std::string& error_message, int code) {
    std::cerr << "Error: " << error_message << std::endl;
    exit(code);
}

int main() {
    try {
        // Get current working directory
        char cwd[1024];
        if (getcwd(cwd, sizeof(cwd)) == nullptr) {
            errorHandler("Failed to get current working directory", 1);
        }
        createFilesAndDirectory(std::string(cwd));

        // Create root directory ("/") - This is a bit tricky in C++ as the root directory does not exist
        // directly on most systems, so we need to manually change to the root and then create.
        if (chdir("/") == -1) {
            errorHandler("Failed to change to root directory", 2);
        }
        createFilesAndDirectory("/");

    } catch (const std::exception& e) {
        errorHandler(e.what(), 3);
    }

    return 0;
}
```

### Explanation:
1. **File Creation**: We use `std::ofstream` with `std::ios::out | std::ios::trunc` to create an empty file.
2. **Directory Creation**: We use the `mkdir` system call to create a directory.
3. **Error Handling**: We define an `errorHandler` function that prints an error message and exits the program with a specified code.
4. **Current Working Directory**: We get the current working directory using `getcwd` and then change to it before creating files and directories.

### Note:
- Creating a file in the root directory (`/`) directly is not possible in most Unix-like systems due to permissions issues. The `chdir("/")` call will only work if the program has appropriate privileges.
- This code assumes that the current working directory and root directory have write permissions, which might require running the program with elevated privileges (e.g., using `sudo`).
