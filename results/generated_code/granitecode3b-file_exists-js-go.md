Here's the equivalent code in Golang:
```go
package main
import (
 "fmt"
 "os"
)
func main() {
 _, err := os.Stat("input.txt")
 if err != nil {
 fmt.Println(err)
 }
 
 _, err = os.Stat("/input.txt")
 if err != nil {
 fmt.Println(err)
 }
 
 _, err = os.Stat("docs")
 if err != nil {
 fmt.Println(err)
 }
 
 _, err = os.Stat("/docs")
 if err != nil {
 fmt.Println(err)
 }
}
```
The `os.Stat()` function returns an `os.FileInfo` struct for the named file, directory, or symbolic link. If there is an error, it will be of type `*os.PathError`. If the file or directory does not exist, ` Stat()` returns an `*os.PathError` with the `os.NotExist` error.

