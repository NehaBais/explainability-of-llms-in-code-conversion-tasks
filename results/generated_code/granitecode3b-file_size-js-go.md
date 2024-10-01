Here's the equivalent code in Golang:
```go
package main
import (
 "fmt"
 "os"
)
func main() {
 f1, err := os.Stat("input.txt")
 if err != nil {
 fmt.Println(err)
 return
 }
 fmt.Println(f1.Size())
 f2, err := os.Stat("/input.txt")
 if err != nil {
 fmt.Println(err)
 return
 }
 fmt.Println(f2.Size())
}
```
This code uses the `os` package to get information about files and directories in the file system. The `Stat()` function is used to retrieve information about a file or directory, including its size. The sizes are then printed to the console.

