Here's the converted code in Golang:
```go
package main
import (
 "fmt"
 "os"
)
func main() {
 fileA, err := os.Open("file.txt")
 if err != nil {
 panic(err)
 }
 defer fileA.Close()
 fmt.Printf("%d Bn", fileA.Stat().Size())
 fileB, err := os.Open("/file.txt")
 if err != nil {
 panic(err)
 }
 defer fileB.Close()
 fmt.Printf("%d Bn", fileB.Stat().Size())
}
```
The code uses the `os` package in Golang to open and read files. It first opens the file in the current working directory, and then opens the same file in the root file system. The `Stat()` method is used to retrieve the size of the file in bytes. Finally, the size is printed to the console using `Printf()`.

