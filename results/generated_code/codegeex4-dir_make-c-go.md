The provided C code creates a directory and any missing parent directories, similar to the `mkdir -p` command. Below is the equivalent implementation in Golang:

```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func createDirWithParents(dirPath string) error {
	if len(dirPath) == 0 {
		return fmt.Errorf("directory path cannot be empty")
	}

	// Split the path into its components and iterate over them
	components := strings.Split(filepath.Clean(dirPath), "/")

	pathToCreate := ""
	for _, component := range components {
		if len(component) > 0 {
			pathToCreate += "/" + component

			// Check if the path exists and is a directory
			if _, err := os.Stat(pathToCreate); os.IsNotExist(err) {
				// Create the missing directory
				err = os.Mkdir(pathToCreate, 0755)
				if err != nil {
					return fmt.Errorf("failed to create directory %s: %v", pathToCreate, err)
				}
			} else if !isDir(pathToCreate) {
				return fmt.Errorf("%s exists but is not a directory", pathToCreate)
			}
		}
	}

	return nil
}

// Helper function to check if a given path is a directory
func isDir(path string) bool {
	fileInfo, err := os.Stat(path)
	if err != nil {
		return false
	}

	return fileInfo.IsDir()
}

func main() {
	dirPath := "./path/to/dir"
	err := createDirWithParents(dirPath)
	if err != nil {
		fmt.Fprintf(os.Stderr, "error: %v\n", err)
		os.Exit(1)
	}
}
```

### Explanation:

1. **Input Validation**: The function `createDirWithParents` takes a single string parameter `dirPath`. It checks if the directory path is empty and returns an error if it is.

2. **Path Components Splitting**: The path is cleaned using `filepath.Clean`, and then split into components by `/`.

3. **Iterate Over Components**: For each component, it builds the full path up to that point (`pathToCreate`). If the directory does not exist, it creates it with `os.Mkdir` (specifying mode 0755 which is equivalent to C's default behavior). If the directory already exists but is not a directory, it returns an error.

4. **Error Handling**: The function uses appropriate error checking and handling mechanisms for file operations.

5. **Main Function**: The `main` function demonstrates how to call `createDirWithParents`, handling any potential errors that occur during the process.

This implementation ensures compatibility across different operating systems due to Go's built-in libraries, which handle platform-specific behavior transparently.
