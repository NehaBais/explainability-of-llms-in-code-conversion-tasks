The error occurs because there is no function named `main` in Go programs which is the entry point of any program. In Go, typically we define a main package and run the program from there by defining a `main()` function.

Here's how you can fix it: 
```go
package main

import (
	"errors"
	"os"
	"path/filepath"
)

// Mkdirp creates all directories in path, if they do not already exist.
func Mkdirp(path string, mode os.FileMode) error {
	absPath, err := filepath.Abs(path)
	if err != nil {
		return errors.New("Invalid Path: " + path)
	}
	return os.MkdirAll(absPath, mode)
}

func main() {
	// Call Mkdirp here or anything you want to do in the program
}
```
