Here's the equivalent code in Golang:
```
package main
import (
 "fmt"
 "io/ioutil"
 "os"
)
func main() {
 err := ioutil.WriteFile("output.txt", []byte{}, 0644)
 if err != nil {
 fmt.Println(err)
 }
 err = os.MkdirAll("docs", 0755)
 if err != nil {
 fmt.Println(err)
 }
 err = ioutil.WriteFile("../output.txt", []byte{}, 0644)
 if err != nil {
 fmt.Println(err)
 }
 err = os.MkdirAll("../docs", 0755)
 if err != nil {
 fmt.Println(err)
 }
}
```
In Golang, we use the `ioutil.WriteFile()` function to create an empty file and the `os.MkdirAll()` function to create an empty directory. The path parameters are relative to the current working directory. To create files in other directories, we can use the relative path of the file or directory from the current working directory.

