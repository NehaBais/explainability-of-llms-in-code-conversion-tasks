In Go, you can achieve the same functionality using the `os` package. Here's how you can convert the given C++ code into Go:

```go
package main

import (
	"fmt"
	"os"
)

func createDirectory(path string) error {
	if _, err := os.Stat(path); os.IsNotExist(err) {
		err = os.MkdirAll(path, 0755)
		if err != nil {
			return fmt.Errorf("couldn't create directory: %s", path)
		}
	}
	return nil
}

func main() {
	if len(os.Args) != 2 {
		fmt.Println("usage: mkdir <path>")
		os.Exit(1)
	}

	pathToCreate := os.Args[1]

	err := createDirectory(pathToCreate)
	if err != nil {
		fmt.Println(err)
		os.Exit(1)
	}
}
```

### Explanation:
1. **Creating the Directory with All Missing Parents**:
   - `os.MkdirAll(path, 0755)` is used to create a directory and any missing parents if they do not exist. The permissions (mode) are set to 0755, which typically means read and execute permissions for everyone.

2. **Checking if the Directory Exists**:
   - `os.Stat(path)` is used to check if the path exists.
   - If the path does not exist (`os.IsNotExist(err)`), we proceed to create it using `os.MkdirAll`.

3. **Error Handling**:
   - Errors are returned and printed if the directory cannot be created.

This Go code will work similarly across different operating systems, as the `os` package provides cross-platform file system operations.
