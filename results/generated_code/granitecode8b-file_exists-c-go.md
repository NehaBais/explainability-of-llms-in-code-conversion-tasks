Here's the converted code in Golang:
```go
package main
import (
 "fmt"
 "os"
)
func checkFile(path string) bool {
 info, err := os.Stat(path)
 if err != nil {
 return false
 }
 return !info.IsDir()
}
func checkDir(path string) bool {
 info, err := os.Stat(path)
 if err != nil {
 return false
 }
 return info.IsDir()
}
func main() {
 fmt.Printf("input.txt is a regular file? %v
", checkFile("input.txt"))
 fmt.Printf("docs is a directory? %v
", checkDir("docs"))
 fmt.Printf("/input.txt is a regular file? %v
", checkFile("/input.txt"))
 fmt.Printf("/docs is a directory? %v
", checkDir("/docs"))
}
``` 
This code checks if files and directories exist by using the `os` package in Golang to get information about the file or directory using the `os.Stat()` function. The `checkFile()` and `checkDir()` functions return a boolean value indicating whether the file or directory exists. The main function then calls these functions with different paths to verify that the files and directories exist.

