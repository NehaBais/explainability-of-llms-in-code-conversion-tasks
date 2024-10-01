Here's the converted Golang code that creates an empty file called "output.txt" of size 0 bytes and an empty directory called "docs" in the current working directory and in the filesystem root:
```
package main
import (
 "fmt"
 "io/ioutil"
 "os"
)
const FILE_NAME = "output.txt"
const DIR_NAME = "docs"
func main() {
 create(".")
 create("/")
}
func create(root string) {
 if err := os.MkdirAll(fmt.Sprintf("%s/%s", root, DIR_NAME), 0755); err != nil {
 panic(err)
 }
 if f, err := ioutil.TempFile(root, FILE_NAME); err != nil {
 panic(err)
 } else {
 f.Close()
 os.Remove(f.Name())
 }
}
``` 
This code uses the `os` package in Golang to create files and directories. The `create()` function takes a root directory path as an argument and creates the directory and file using the `os.MkdirAll()` and `ioutil.TempFile()` functions respectively. The `panic()` function is used to handle any errors that may occur during the creation process.

