 To convert the given Python function `mkdirp` to Golang, we can use the `os` package for directory creation and ensure that any missing parent directories are created as well. In Golang, there is no direct equivalent of Python's `exist_ok` parameter in `os.makedirs`, but we can handle this by checking if the directory already exists before creating it.

Here's how you can implement the `mkdirp` function in Golang:

```go
package main

import (
	"fmt"
	"os"
)

func mkdirp(path string) error {
	// Try to create the directory
	err := os.MkdirAll(path, 0777) // 0777 for mode is used to specify that we want full permissions
	if err != nil {
		// Check if the error is because the directory already exists
		if os.IsExist(err) {
			return nil
		}
		return err
	}
	return nil
}

func main() {
	path := "./path/to/dir"
	err := mkdirp(path)
	if err != nil {
		fmt.Println("Error:", err)
	} else {
		fmt.Println("Directory created successfully.")
	}
}
```

### Explanation:
1. **Importing Packages**: We import the `os` package to use its functions for directory operations.
2. **Function Definition**: The `mkdirp` function takes a string path as an argument and returns an error.
3. **Creating Directory**: We use `os.MkdirAll` which creates the given directory along with any necessary but parent directories. It does not return an error if the directory already exists, so we handle this by checking for errors specifically using `os.IsExist`.
4. **Main Function**: In the main function, we call `mkdirp` with a sample path and print out whether it succeeded or failed.

This implementation should work cross-platform as long as the underlying file system supports the operations used in the code.
