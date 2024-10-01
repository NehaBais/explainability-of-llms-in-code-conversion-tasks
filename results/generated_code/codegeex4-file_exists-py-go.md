Below is your Python code converted to Golang:

```go
package main

import (
	"fmt"
	"os"
)

func checkFilesAndDirectories(path string) {
	if _, err := os.Stat(path + "/input.txt"); !os.IsNotExist(err) {
		fmt.Println("File exists:", path+"/input.txt")
	} else {
		fmt.Println("File does not exist:", path+"/input.txt")
	}

	if _, err := os.Stat(path + "/docs"); !os.IsNotExist(err) {
		fmt.Println("Directory exists:", path+"/docs")
	} else {
		fmt.Println("Directory does not exist:", path+"/docs")
	}
}

func main() {
	checkFilesAndDirectories(".")
	checkFilesAndDirectories("/")
}
```

This Golang code uses the `os.Stat()` function to check if a file or directory exists at the given path, and `os.IsNotExist(err)` to determine whether an error returned from `os.Stat()` indicates that the file or directory does not exist. It then prints messages indicating whether each file/directory exists or not.

Note: The code uses "." for the current working directory and "/" for the root of the filesystem in the respective calls to checkFilesAndDirectories().
