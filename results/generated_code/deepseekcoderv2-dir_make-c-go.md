 To convert the given C code to Golang, we need to handle creating directories and ensuring all necessary parent directories are created if they do not exist. We can use Go's `os` package for file operations and `path/filepath` for handling paths. Here is the equivalent Golang implementation:

```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func mkdirp(path string) error {
	// Ensure all necessary parent directories are created
	dir := filepath.Dir(path)
	if dir == "." || dir == "/" {
		return nil
	}
	err := os.MkdirAll(dir, 0755)
	if err != nil && !os.IsExist(err) {
		return err
	}
	// Check if the path is a directory
	fileInfo, err := os.Stat(path)
	if err == nil && fileInfo.IsDir() {
		return nil
	} else if err != nil && !os.IsNotExist(err) {
		return err
	}
	// Create the directory if it does not exist
	err = os.Mkdir(path, 0755)
	if err != nil && !os.IsExist(err) {
		return err
	}
	return nil
}

func main() {
	if len(os.Args) != 2 {
		fmt.Fprintf(os.Stderr, "usage: %s <path>\n", filepath.Base(os.Args[0]))
		os.Exit(1)
	}
	path := os.Args[1]
	err := mkdirp(path)
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error creating directory: %v\n", err)
		os.Exit(1)
	}
}
```

### Explanation:
1. **`mkdirp` Function**: This function takes a path string and ensures all necessary parent directories are created using `os.MkdirAll`. It also checks if the path already exists and is a directory using `os.Stat`.
2. **Main Function**: The main function reads the command-line argument, calls `mkdirp` to create the directory (and any missing parents), and handles errors appropriately.
3. **Error Handling**: Errors during directory creation or checking are printed to stderr, followed by an exit code of 1.
4. **Path Handling**: We use `os.Args` to get command-line arguments and `filepath.Base` to get the program name for usage messages.

This implementation should work similarly across different operating systems supported by Go (Windows, macOS, Linux, etc.).
