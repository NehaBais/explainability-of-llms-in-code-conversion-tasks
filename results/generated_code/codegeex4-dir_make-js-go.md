In Go, you can achieve similar functionality using the `os.MkdirAll` function. This function creates a directory named `path`, along with any necessary parents, and returns an error if one occurred.

Here's how you could translate your JavaScript code into Go:

```go
package main

import (
	"fmt"
	"os"
)

func mkdirp(path string) error {
	err := os.MkdirAll(path, 0755)
	if err != nil {
		return err
	}
	return nil
}

func main() {
	dirPath := "./path/to/dir"
	err := mkdirp(dirPath)
	if err != nil {
		fmt.Println("Error creating directory:", err)
	} else {
		fmt.Printf("Successfully created directory: %s\n", dirPath)
	}
}
```

### Explanation:
1. **Package and Imports**:
   - Import the `fmt` package for formatted I/O operations.
   - Import the `os` package to interact with the underlying operating system.

2. **mkdirp Function**:
   - The function takes a single string argument, `path`, which is the directory path you want to create.
   - It calls `os.MkdirAll` to create the directory. This function will also create any necessary parent directories.
   - If there's no error (`err == nil`), it returns `nil`.
   - If there's an error (e.g., due to a permission issue or if a file exists where you're trying to create a directory), it returns the error.

3. **Main Function**:
   - Defines the path of the directory you want to create.
   - Calls the `mkdirp` function with the specified path.
   - Prints out an appropriate message based on whether an error was returned or not.

### Notes:
- The `0755` permission bits are used when creating directories. This grants read, write, and execute permissions to the owner and only read and execute permissions to others. Adjust these permissions as needed for your specific requirements.
- The Go version will work equally well on different operating systems thanks to the abstraction provided by the `os` package.
