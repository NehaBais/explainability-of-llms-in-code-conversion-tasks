Here's the equivalent code in Golang:
```
package main
import (
 "fmt"
 "os"
)
func main() {
 file1, err := os.Stat("input.txt")
 if err != nil {
 fmt.Println(err)
 return
 }
 size1 := file1.Size()
 fmt.Printf("Size of input.txt: %d bytesn", size1)
 
 file2, err := os.Stat("/input.txt")
 if err != nil {
 fmt.Println(err)
 return
 }
 size2 := file2.Size()
 fmt.Printf("Size of /input.txt: %d bytesn", size2)
}
```
This code uses the `os` package in Golang to get the size of two files, `input.txt` in the current working directory and `/input.txt` in the file system root. It first gets the information about each file using `os.Stat()`, which returns a `FileInfo` struct containing various attributes of the file. The size of each file is then obtained from the `Size()` method of the `FileInfo` struct. Finally, the sizes are printed to the console using `fmt.Printf()`.

