Here's how you can implement the `mkdirp` function in Golang:
```go
package main
import (
 "os"
 "path/filepath"
)
func mkdirp(path string) error {
 err := os.MkdirAll(path, os.ModePerm)
 if err != nil {
 return err
 }
 return nil
}
func main() {
 path := "./path/to/dir"
 err := mkdirp(path)
 if err != nil {
 panic(err)
 }
}
```
The `filepath.Join` function is used to join multiple path components into a single path string. The `os.ModePerm` constant is used to set the permissions of the created directory to the default file permissions.

