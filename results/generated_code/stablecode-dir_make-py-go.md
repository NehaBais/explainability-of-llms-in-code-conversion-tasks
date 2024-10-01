Below is your Python code converted to Golang:

```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func mkdirp(path string) {
    err := os.MkdirAll(path, 0777))
    if err != nil {
        panic(err)
    }
}

func main()  {
	fmt.Println("Make directories and missing parents")
	dirPath := "./path/to/dir"
	
	// Calling mkdirp function
	mkdirp(dirPath)
	fmt.Printf("Directory %s created successfully \n", dirPath))
	
}
```
In this GoLang implementation, the `os.MkdirAll()` method is used to create a directory and any missing parents.
The `main()` function serves as an entry point for the application, in this case it calls `mkdirp(dirPath)` where dirPath is a string that holds the path of the directory you want to make. If the directory already exists, the program will run successfully without causing any errors.
This implementation works equally well cross-platform as Golang runs on multiple platforms including Linux, MacOS and Windows.
