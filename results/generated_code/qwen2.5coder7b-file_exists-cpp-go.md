Here is the equivalent code in Golang:
```go
package main

import (
	"fmt"
	"os"
)

func fileExists(path string) {
	fmt.Println(path)
	if _, err := os.Stat(path); err == nil {
		fileInfo, _ := os.Stat(path)
		if fileInfo.IsDir() {
			fmt.Println(" is a directory")
		} else {
			fmt.Println(" exists with a file size of ", fileInfo.Size(), " bytes.")
		}
	} else {
		fmt.Println(" does not exist")
	}
}

func main() {
	fileExists("input.txt")
	fileExists("zero_length.txt")
	fileExists("/docs/input.txt")
	fileExists("/docs/zero_length.txt")
}
```
This code checks if the specified files and directories exist in both the current working directory and the filesystem root. It uses Go's `os` package to perform these operations, which provides a way of interacting with operating system functionalities in Golang. The `Stat` function retrieves file information about the provided path, and `IsDir` checks whether the given file is a directory or not.
