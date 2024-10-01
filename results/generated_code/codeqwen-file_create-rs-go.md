The following is the equivalent Go code for your Rust program:

```go
package main

import (
	"fmt"
	"io/ioutil"
	"os"
	"path/filepath"
)

const (
	FILE_NAME = "output.txt"
	DIR_NAME  = "docs"
)

func create(root string) error {
	fPath := filepath.Join(root, FILE_NAME)
	dPath := filepath.Join(root, DIR_NAME)

	if err := os.MkdirAll(dPath, 0755); err != nil {
		return fmt.Errorf("Failed to create directory %s: %v", dPath, err)
	}

	f, err := ioutil.TempFile(root, FILE_NAME)
	if err != nil {
		return fmt.Errorf("Failed to create file %s: %v", fPath, err)
	}
	defer os.Remove(f.Name())

	if _, err := f.Write([]byte{}); err != nil {
		return fmt.Errorf("Failed to write to file %s: %v", fPath, err)
	}

	return nil
}

func main() {
	err1 := create(".")
	err2 := create("/")

	if err1 != nil || err2 != nil {
		code := 1
		if err1 != nil {
			fmt.Printf("Error: %v\n", err1)
			code++
		}
		if err2 != nil {
			fmt.Printf("Error: %v\n", err2)
			code++
		}
		os.Exit(code)
	}
}

```

In this Go code, I have used the `os` and `path/filepath` packages for handling directory creation and file operations, respectively. Also, note that Go has a different way of writing error messages which includes using `fmt.Errorf()` to create an error object with message. This function returns an error object with a message including the original error, allowing you to chain errors together. I also used defer keyword in order to remove temporary file if it was not created successfully.
