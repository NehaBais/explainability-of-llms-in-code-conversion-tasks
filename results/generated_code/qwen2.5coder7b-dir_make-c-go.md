Sure! Here is the equivalent code in Go:

```go
package main

import (
	"fmt"
	"os"
)

func mkdirParents(path string) error {
	if err := os.MkdirAll(path, 0755); err != nil {
		return fmt.Errorf("failed to create directory: %v", err)
	}
	return nil
}

func main() {
	if len(os.Args) != 2 {
		fmt.Fprintf(os.Stderr, "usage: %s <path>\n", os.Args[0])
		os.Exit(1)
	}

	path := os.Args[1]
	err := mkdirParents(path)
	if err != nil {
		fmt.Fprintf(os.Stderr, "%v\n", err)
		os.Exit(1)
	}
}
```

### Explanation:
1. **Function `mkdirParents`**:
   - This function takes a path string as input and uses the `os.MkdirAll` function from Go's standard library to create directories including any necessary parent directories.
   - The permissions `0755` are set for each directory created.

2. **Main Function**:
   - The main function checks if the correct number of arguments (one path) is provided.
   - It then calls `mkdirParents` with the provided path and handles any errors that might occur during the directory creation process.

### Usage:
- Compile the Go program using `go build`.
- Run it with a path as an argument, for example:
  ```
  ./program ./path/to/dir
  ```

This implementation will create the specified directory and any missing parent directories, similar to the behavior of the `mkdir -p` command in Unix-like systems.
