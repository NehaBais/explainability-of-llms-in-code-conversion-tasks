Here's a Golang implementation of the code you provided:
```
package main
import (
 "os"
 "path/filepath"
)
func mkdirp(path string) error {
 if err := os.MkdirAll(path, 0755); err != nil {
 return err
 }
 return nil
}
func main() {
 path := "./path/to/dir"
 if err := mkdirp(path); err != nil {
 panic(err)
 }
}
```
The `mkdirp` function takes a single path string as input and creates any missing directories in the path. It uses the `os.MkdirAll` function from the Golang standard library to create the directory if it does not already exist. If an error occurs during the creation of the directory, it is returned.
Note that this implementation assumes that the user has sufficient permissions to create directories in the specified path. Additionally, you may want to add error handling for cases where the user does not have sufficient permissions or if there are other issues with creating the directory.

