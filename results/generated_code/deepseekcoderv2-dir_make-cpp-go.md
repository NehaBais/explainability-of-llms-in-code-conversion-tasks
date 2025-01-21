 Certainly! Below is the equivalent Go code for the provided C++ program. This Go code mimics the functionality of creating a directory and any missing parent directories, similar to the `mkdir -p` command in POSIX systems.

```go
package main

import (
	"fmt"
	"os"
)

func mkdirAll(path string) error {
	if _, err := os.Stat(path); os.IsNotExist(err) {
		// If the directory does not exist, create it and its parents recursively
		err = os.MkdirAll(path, 0755) // 0755 is the default permission for directories in POSIX systems
		if err != nil {
			return fmt.Errorf("couldn't create directory: %s", path)
		}
	} else if err != nil {
		return fmt.Errorf("failed to check directory existence: %v", err)
	}
	// If the directory already exists, return successfully
	return nil
}

func main() {
	if len(os.Args) != 2 {
		fmt.Println("usage: mkdir <path>")
		os.Exit(1)
	}

	pathToCreate := os.Args[1]
	err := mkdirAll(pathToCreate)
	if err != nil {
		fmt.Println(err)
		os.Exit(1)
	}
}
```

### Explanation:
1. **Function `mkdirAll`**: This function takes a path string and ensures that the directory (and any necessary parent directories) are created if they do not exist. It uses `os.Stat` to check if the directory exists, and `os.MkdirAll` to create it along with any missing parents.
2. **Main Function**: The main function checks if exactly one command-line argument is provided (the path to create). If not, it prints a usage message and exits. It then calls `mkdirAll` with the provided path and handles any errors that occur.
3. **Permissions**: In Go, the default permissions for directories are set using `os.MkdirAll`, which sets them to `0755`. This is equivalent to the POSIX standard.

This implementation should work cross-platform, similar to the original C++ code.
