Here's the converted code in Golang:
```
package main
import (
 "fmt"
 "io/ioutil"
 "log"
 "os"
)
func create(directory string) {
 if err := ioutil.WriteFile(fmt.Sprintf("%s%coutput.txt", directory, os.PathSeparator), []byte(""), 0644); err != nil {
 log.Fatal(err)
 }
 if err := os.MkdirAll(fmt.Sprintf("%s%cdocs", directory, os.PathSeparator), 0755); err != nil {
 log.Fatal(err)
 }
}
func main() {
 create(".") // current directory
 create("/") // root directory
}
```
The `create` function takes a directory path as an argument and uses the `ioutil.WriteFile` function to create an empty file called "output.txt" in that directory, and the `os.MkdirAll` function to create an empty directory called "docs". The `main` function calls the `create` function twice, once with the current working directory as the argument ("."), and once with the root directory ("/").

