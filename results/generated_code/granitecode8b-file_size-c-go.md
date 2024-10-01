Here's the converted code from C to Golang:
```
package main
import (
 "fmt"
 "os"
)
func main() {
 fi, err := os.Stat("input.txt")
 if err != nil {
 fmt.Println(err)
 return
 }
 fmt.Printf("%d
", fi.Size())
 fi, err = os.Stat("/input.txt")
 if err != nil {
 fmt.Println(err)
 return
 }
 fmt.Printf("%d
", fi.Size())
}
``` 
This code uses the `os` package in Golang to get information about a file. The ` Stat()` function returns a `FileInfo` struct that contains information about the file, including its size. We use the `Println()` and `Printf()` functions to print out the sizes of the files.

