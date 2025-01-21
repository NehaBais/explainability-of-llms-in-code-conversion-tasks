 To convert the given JavaScript code to Golang, we can use the `os` and `path/filepath` packages for handling directories and files, respectively. The task is essentially to create a directory if it doesn't exist, including any necessary parent directories. Here's how you can implement this in Golang:

```go
package main

import (
	"fmt"
	"os"
)

// mkdirp creates the given directory path, including any missing parent directories.
func mkdirp(path string, cb func(error)) {
	if cb == nil {
		cb = func(err error) {}
	}

	// Resolve the full path to avoid relative paths
	absPath, err := os.MkdirAll(path, 0755) // 0755 for directory permissions
	if err != nil && !os.IsExist(err) {
		switch e := err.(type) {
		case *os.PathError:
			// The error is about a missing path; try to create the parent directories first.
			parentDir := getParentDirectory(path)
			err = os.MkdirAll(parentDir, 0755) // Create parent directories recursively
			if err != nil {
				cb(err)
				return
			}
			// Try creating the directory again after ensuring the parent exists
			mkdirp(path, cb)
		default:
			// For any other error, just return it.
			cb(e)
		}
	} else {
		cb(nil)
	}
}

// Helper function to get the parent directory of a given path.
func getParentDirectory(path string) string {
	return string([]rune(path)[:len(path)-1]) // Simplified version; assumes last character is '/'
}

func main() {
	dirPath := "./path/to/dir"
	// Call mkdirp with the directory path and a callback function to handle errors.
	mkdirp(dirPath, func(err error) {
		if err != nil {
			fmt.Println("Error:", err)
		} else {
			fmt.Println("Directory created successfully.")
		}
	})
}
```

### Explanation:
1. **Function `mkdirp`**: This function takes a directory path and a callback function to handle errors. It uses `os.MkdirAll` to create the directory and its parents if they don't exist, with appropriate permissions. If there's an error (excluding `os.IsExist` which indicates that the directory already exists), it checks for specific types of errors:
   - **PathError**: Indicates a missing path. It recursively creates parent directories until it can create the target directory or encounters another error.
   - **Default case**: Handles any other errors by passing them to the callback function.
2. **Helper Function `getParentDirectory`**: This is a simple helper function that extracts the parent directory from a given path for use in creating missing parent directories. Note that this implementation assumes the last character of the input string is not a `/`, which may need adjustment based on actual requirements or operating system conventions.
3. **Main Function**: Demonstrates how to call `mkdirp` with a test directory and handle errors through the callback function.

This Go code mirrors the behavior of the JavaScript `mkdirp` utility, ensuring that all necessary parent directories are created before attempting to create the target directory, similar to the Unix `mkdir -p` command.
