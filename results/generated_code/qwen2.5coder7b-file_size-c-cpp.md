To convert the given C code to C++, you need to include the necessary headers and use C++-style functions. Here is the converted code:

```cpp
#include <iostream>
#include <fstream>
#include <sys/stat.h>

int main() {
    struct stat foo;

    // Check the size of "input.txt" in the current working directory
    if (stat("input.txt", &foo) == 0) {
        std::cout << "Size of input.txt: " << foo.st_size << " bytes" << std::endl;
    } else {
        perror("Error getting size of input.txt");
    }

    // Check the size of "/input.txt" in the file system root
    if (stat("/input.txt", &foo) == 0) {
        std::cout << "Size of /input.txt: " << foo.st_size << " bytes" << std::endl;
    } else {
        perror("Error getting size of /input.txt");
    }

    return 0;
}
```

### Explanation:
1. **Include Headers**: 
   - `#include <iostream>` for input and output operations.
   - `#include <fstream>` (not used in the code but often included for file stream operations).
   - `#include <sys/stat.h>` for the `stat` function.

2. **Output**:
   - Use `std::cout` for printing to the console instead of `printf`.

3. **Error Handling**:
   - Check if `stat` returns 0 (indicating success) and use `perror` to print an error message if it fails.

4. **String Literals**:
   - Ensure that string literals are enclosed in double quotes.

This code will compile and run as expected, printing the sizes of the files or error messages if the files do not exist.
