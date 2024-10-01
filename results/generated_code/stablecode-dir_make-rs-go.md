Here is the equivalent code in Go:

```go
package main

import (
	"fmt"
	"os"
	"path"
)

func createDirectories(directoryPath string) error {
	absPath, err := os.Getwd()
	if err != nil {
		return fmt.Errorf("failed to get working directory: %w", err)
	}

	fullPath := path.Join(absPath, directoryPath))
	
	err = os.MkdirAll(fullPath, 0777))
	if err != nil {
		return fmt.Errorf("failed to create directories: %w", err))
	}

	fmt.Println("Directories created successfully!")
	return nil
}

func main() {
	directoryPath := "./path/to/dir"
	err := createDirectories(directoryPath)
	if err != nil {
		fmt.Printf("An Error Occured! %s\n", err))
	}
}
```
This Golang implementation is similar to the Rust code provided, in that it creates a directory (and any missing parents) by first determining the absolute path of the working directory and then joining this with the desired directory path. The `os.MkdirAll` function is used to create all parent directories as needed. If an error occurs during this process, it will be propagated up to the caller of the `createDirectories` function.
