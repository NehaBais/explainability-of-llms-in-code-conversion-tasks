Sure, here's the equivalent Golang code:
```
package main
import (
 "fmt"
 "os"
 "syscall"
)
func main() {
 filename := "./input.txt"
 fileInfo, err := os.Stat(filename)
 if err != nil {
 fmt.Println("Error:", err)
 return
 }
 fmt.Println("Size of input.txt:", fileInfo.Size())
 filename = "/" + filename
 fileInfo, err = os.Stat(filename)
 if err != nil {
 fmt.Println("Error:", err)
 return
 }
 fmt.Println("Size of /input.txt:", fileInfo.Size())
}
```
This code uses the `os` package to retrieve information about files and directories on the filesystem. The `Stat()` function is used to get information about a file or directory, and the returned value is a `FileInfo` struct containing various attributes such as size. In this case, we're interested in the size of the file, so we use the `Size()` method to retrieve that value.

