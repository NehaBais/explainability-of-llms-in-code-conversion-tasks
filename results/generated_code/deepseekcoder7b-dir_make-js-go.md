In Golang, you can use `os` package for creating directory and `strings` and `path/filepath` packages for handling file paths. Here's how to convert the given JavaScript code into Go:

```go
package main

import (
	"errors"
	"fmt"
	"os"
	"path/filepath"
)

func mkdirp(path string) error {
	absPath, err := filepath.Abs(path)
	if err != nil {
		return errors.New("Failed to get the absolute path: " + err.Error())
	}

	// Check if directory already exists
	if _, err = os.Stat(absPath); !os.IsNotExist(err) {
		return nil // Directory exists, return successfully.
	}

	// Create parent directories recursively 
	err = os.MkdirAll(path, os.ModePerm)
	if err != nil {
		return errors.New("Failed to create directory: " + err.Error())
	}

	return nil
}

func main() {
	fmt.Println(mkdirp("/path/to/dir")) // Replace with your desired path
}
```

This Go code does the same thing as the JavaScript one. It creates directories recursively if they don't exist already and returns an error in case of any other issues. The `os.MkdirAll` method is used to create missing parent directories too. Please replace "/path/to/dir" with your desired directory path.

