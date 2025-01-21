Sure, here's the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"os"
)

// Check if the path is a regular file.
func checkReg(path string) bool {
	fileInfo, err := os.Stat(path)
	if err != nil {
		return false
	}
	return !fileInfo.IsDir()
}

// Check if the path is a directory.
func checkDir(path string) bool {
	fileInfo, err := os.Stat(path)
	if err != nil {
		return false
	}
	return fileInfo.IsDir()
}

func main() {
	fmt.Println("input.txt is a regular file?", checkReg("input.txt"))
	fmt.Println("docs is a directory?", checkDir("docs"))
	fmt.Println("/input.txt is a regular file?", checkReg("/input.txt"))
	fmt.Println("/docs is a directory?", checkDir("/docs"))
}
```

This Go code does the same thing as your C code. It checks if `input.txt` and `docs` are regular files, as well as `/input.txt` and `/docs` for being directories. The functions `checkReg` and `checkDir` use `os.Stat` to retrieve file information and then check if it's a regular file or directory using the `IsDir` method.
