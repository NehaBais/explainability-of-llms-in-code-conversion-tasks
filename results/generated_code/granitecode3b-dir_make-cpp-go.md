Sure, here's the equivalent Golang code for the given C++ code:
```
package main
import (
 "fmt"
 "os"
)
func main() {
 if len(os.Args) != 2 {
 fmt.Println("usage: mkdir <path>")
 return
 }
 path := os.Args[1]
 _, err := os.Stat(path)
 if err == nil {
 fmt.Println("directory already exists")
 return
 }
 err = os.MkdirAll(path, 0755)
 if err != nil {
 fmt.Printf("couldn't create directory: %sn", path)
 return
 }
 fmt.Println("created directory:", path)
}
```
Note that the Golang code uses the `os` package to interact with the file system, and the `fmt` package for outputting messages. The `os.Stat` function is used to check if the directory already exists, and if not, the `os.MkdirAll` function is used to create all necessary directories in the path.

