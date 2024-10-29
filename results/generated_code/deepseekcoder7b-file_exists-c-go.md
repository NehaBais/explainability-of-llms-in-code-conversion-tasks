The Go code for the above C program can be written as follows. For file/directory existence, we use the `os` package which provides a way to interact with the operating system's filesystem in go. The function os.Stat returns a FileInfo describing the named file and an error if there was one.
```go
package main

import (
	"fmt"
	"os"
)

// Check for regular file. 
func checkReg(path string) bool {
	fileInfo, err := os.Stat(path)
	return err == nil && !fileInfo.IsDir()
}

// Check for directory. 
func checkDir(path string) bool {
	fileInfo, err := os.Stat(path)
	return err == nil && fileInfo.IsDir()
}

func main() {
	fmt.Printf("input.txt is a regular file? %s\n", 
        checkReg("input.txt") ? "yes" : "no")
    fmt.Printf("docs is a directory? %s\n", 
        checkDir("docs") ? "yes" : "no")
	fmt.Printf("/input.txt is a regular file? %s\n", 
        checkReg("/input.txt") ? "yes" : "no")
	fmt.Printf("/docs is a directory? %s\n", 
        checkDir("/docs") ? "yes" : "no")
}
```
This Go code does not handle the error if file/directory doesn't exist, to do so you would use err != nil in your condition and return an appropriate message.

