Sure! Here's the equivalent code in Golang:
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
 statA, err := fileA.Stat()
 if err != nil {
 panic(err)
 }
 fmt.Printf("%d B%n", statA.Size())
 fileB, err := os.Open("/file.txt")
 if err != nil {
 panic(err)
 }
 defer fileB.Close()
 statB, err := fileB.Stat()
 if err != nil {
 panic(err)
 }
 fmt.Printf("%d B%n", statB.Size())
}
``` 
This code reads the size of two files using Go's built-in `os` package: 
1. The first one is in the current working directory and is named "file.txt".
2. The second one is in the file system root and is also named "file.txt". 
The output will be the size of each file in bytes, formatted as a comma-separated value with two decimal places.

