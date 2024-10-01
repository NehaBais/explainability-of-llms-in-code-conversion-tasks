Here is the converted code in Golang:
```go
package main
import (
 "fmt"
 "os"
)
func fileExists(path string) {
 fmt.Println(path)
 if _, err := os.Stat(path); !os.IsNotExist(err) {
 if fi, err := os.Stat(path); err == nil {
 if fi.IsDir() {
 fmt.Printf(" is a directoryn")
 } else {
 fmt.Printf(" exists with a file size of %d bytes.n", fi.Size())
 }
 }
 } else {
 fmt.Println(" does not exist")
 }
}
func main() {
 fileExists("./input.txt")
 fileExists("./zero_length.txt")
 fileExists("./docs/input.txt")
 fileExists("./docs/zero_length.txt")
 fileExists("/input.txt")
 fileExists("/zero_length.txt")
 fileExists("/docs/input.txt")
 fileExists("/docs/zero_length.txt")
}
``` 
The code above checks for the existence of a file or directory using the `os.Stat()` function and the `os.IsNotExist()` function to handle errors. It then prints out whether the file or directory exists, its type (file or directory), and its size if it is a file. The code has been modified to check for files and directories in both the current working directory and in the root filesystem directory.

