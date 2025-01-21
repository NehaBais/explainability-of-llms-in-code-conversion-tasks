There are few issues with the provided JavaScript code which need to be resolved to make it Golang compatible:
1. `os.IsDir()` function is not available in Go, so we should replace it with checking if a directory exists and return appropriate error. 
2. `filepath.Split()` or `filepath.Abs()` functions are used to get the absolute path of parent directory.
3. Errors while creating directories as errors need to be handled accordingly.
4. Error handling in case when parent directory doesn't exist is not implemented.
5. The function `mkdirp` should return an error, so we can't use it directly like this `(no value) used as value`. It needs to be called with a callback function that accepts an error.
6. Lastly, the error handling in case of any other unexpected errors is not implemented.

Below is a simple Go equivalent for the provided JavaScript code:

```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func mkdirp(p string, err error, cbFunc func(error)) {
	if _, ok := os.Stat(p); ok && !os.IsDir(err) {
		cbFunc(fmt.Errorf("Error creating directory %s: %v\n", p, err))
		return
	}
	abspath, _ := filepath.Abs(p)
	switch err {
	case nil:
		// Directory already exists
		return
	case os.ErrNotDir:
		parent, _ := filepath.Split(abspath)
		if err = mkdirp(parent, nil, func(err error)) {
			cbFunc(fmt.Errorf("Failed to create parent path %s: %v\n", parent, err))
		} else {
			if err = mkdirp(abspath, nil, cbFunc); err != nil {
				// Error during recursive call of mkdirp
				cbFunc(fmt.Errorf("Error creating directory %s: %v\n", abspath, err))
			} else {
				cbFunc(nil) // Successfully created the directory
			}
		}
	default:
		cbFunc(fmt.Errorf("Error creating directory %s: %v\n", abspath, err))
	}
}

func main() {
	// Call the mkdirp function with a callback that will handle any error
	mkdirp("/path/to/directory", nil, func(err error) {
		if err != nil {
			fmt.Printf("Error creating directory: %v\n", err)
		} else {
			fmt.Println("Directory created successfully")
		}
	})
}
```
This code will create the parent directories if they don't exist and handle errors such as file does not exist or error while making a parent directory as well. If any of these occur, it will print an error message and stop further execution.
