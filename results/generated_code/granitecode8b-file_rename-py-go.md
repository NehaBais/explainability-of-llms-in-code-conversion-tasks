Here's the code converted to Golang:
```go
package main
import (
 "fmt"
 "os"
)
func main() {
 err := os.Rename("input.txt", "output.txt")
 if err != nil {
 fmt.Println(err)
 }
 err = os.Rename("docs", "mydocs")
 if err != nil {
 fmt.Println(err)
 }
 // Rename in the filesystem root
 err = os.Rename(string(os.PathSeparator)+ "input.txt", string(os.PathSeparator)+ "output.txt")
 if err != nil {
 fmt.Println(err)
 }
 err = os.Rename(string(os.PathSeparator)+ "docs", string(os.PathSeparator)+ "mydocs")
 if err != nil {
 fmt.Println(err)
 }
}
``` 
This code uses the `os` package to rename files and directories. The first two calls to `os.Rename()` rename the files and directories in the current working directory. The second two calls rename the same files and directories in the filesystem root by adding a path separator (`os.PathSeparator`) before the filenames.

