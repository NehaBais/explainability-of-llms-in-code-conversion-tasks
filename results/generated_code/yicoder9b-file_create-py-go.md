Below is the equivalent Golang code for creating an empty file and an empty directory:

```go
package main

import (
	"os"
	"path/filepath"
)

func create(directory string) {
	// Create empty output.txt
	outputFile := filepath.Join(directory, "output.txt")
	f, err := os.Create(outputFile)
	if err != nil {
		panic(err)
	}
	defer f.Close()

	// Create empty docs directory
	docsDir := filepath.Join(directory, "docs")
	err = os.Mkdir(docsDir, os.ModePerm)
	if err != nil {
		panic(err)
	}
}

func main() {
	create(".") // current directory
	create("/") // root directory (may require sufficient permissions to access the filesystem root in your environment)
}
```
The `os` and `path/filepath` standard libraries of Golang are used here for file operations - creating a new empty file with `Create`, and creating an empty directory with `Mkdir`. The `defer` statement is used to close the created file right after its creation because of the `Close` method declared with `defer`. If any error happens during these operations, it will be caught by the `panic` function which stops execution and displays the error message.
