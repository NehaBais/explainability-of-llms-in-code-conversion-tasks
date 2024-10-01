This is how the Rust code would be converted to Golang:
```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
	"io/ioutil"
)

const (
	FILE_NAME = "output.txt"
	DIR_NAME  = "docs"
)

func main() {
	if !Create(".") && !Create("/") {
		fmt.Println("Error: Failed to create directories or files")
		os.Exit(1)
	}
}

func Create(root string) (bool, error) {
	fPath := filepath.Join(root, FILE_NAME)
	dPath := filepath.Join(root, DIR_NAME)
	file, err := os.OpenFile(fPath, os.O_RDWR|os.O_CREATE, 0644)
	if err == nil {
		_, _ = ioutil.WriteFile(fPath, []byte{}, 0644)
		return true, nil
	}
	dirErr := os.Mkdir(dPath, 0755)
	if dirErr == nil {
		return false, nil
	}
	return false, fmt.Errorf("Failed to create %s or %s: %v", FILE_NAME, DIR_NAME, filepath.Join(root, fPath))
}
```
Please note that in Golang, we can't get error messages directly from the system, so we use `fmt.Println` instead of a function that returns an error type. Similarly, when opening a file, if it doesn't exist, we create it with the required permissions and write to it before returning. When creating directories, we just return true if no error is raised because mkdir already checks if directory exists or not.
