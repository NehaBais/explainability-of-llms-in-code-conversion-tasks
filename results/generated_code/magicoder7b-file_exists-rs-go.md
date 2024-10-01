 Below is the equivalent Golang code for your Rust code.
```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func checkFile(fileName string) {
	_, err := os.Stat(fileName)
	if err == nil {
		// path exists, get file info
		info, _ := os.Stat(fileName)
		if info.IsDir() {
			fmt.Println(fileName + " is a directory")
		} else {
			fmt.Println(fileName + " is a file")
		}
	} else {
		// path does not exist
		fmt.Println(fileName + " does not exist")
	}
}

func main() {
    checkFile("./input.txt")
	checkFile("/tmp/input.txt")  // change /tmp to match your OS root directory
	checkFile("./docs")
	checkFile("/tmp/docs")  // change /tmp to match your OS root directory
}
```
This Go code does the same as yours, checking for existence of a file or directory at different paths. It uses `os.Stat` function which returns an error if the path does not exist, otherwise it returns information about that path like whether it's a file or directory etc. The paths are relative to the current working directory from where you run this code. If you want to check for files/directories in root, replace "./" with "/".
