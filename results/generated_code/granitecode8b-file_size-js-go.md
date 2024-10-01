Here's the converted code from JavaScript to Golang:
```go
package main
import (
 "os"
 "fmt"
)
func main() {
 fi, err := os.Stat("input.txt")
 if err != nil {
 fmt.Println(err)
 return
 }
 fmt.Printf("Size of input.txt: %d bytesn", fi.Size())
 
 fi2, err := os.Stat("/input.txt")
 if err != nil {
 fmt.Println(err)
 return
 }
 fmt.Printf("Size of /input.txt: %d bytesn", fi2.Size())
}
```
This code uses the `os` package in Golang to get information about a file called "input.txt" and another one in the root directory of the current file system. The `Stat()` function is used to retrieve information such as size, mode, and modification time of the files. The retrieved information is then printed to the console using `fmt.Printf()`.

