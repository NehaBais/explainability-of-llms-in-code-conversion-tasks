Sure, here's the equivalent Golang code:
```
package main
import (
 "fmt"
 "os"
)
func checkFile(path string) bool {
 fi, err := os.Stat(path)
 if err != nil {
 return false
 }
 return !fi.IsDir()
}
func checkDir(path string) bool {
 fi, err := os.Stat(path)
 if err != nil {
 return false
 }
 return fi.IsDir()
}
func main() {
 fmt.Println("input.txt is a regular file? ", checkFile("input.txt"))
 fmt.Println("docs is a directory? ", checkDir("docs"))
 fmt.Println("/input.txt is a regular file? ", checkFile("/input.txt"))
 fmt.Println("/docs is a directory? ", checkDir("/docs"))
}
``` 
Note that in Golang, the `stat()` function returns an `os.FileInfo` struct, which includes information about the file or directory. We can use the `IsDir()` method of this struct to check if it's a directory or not. Additionally, we need to import the `fmt` and `os` packages for these functions to work.

