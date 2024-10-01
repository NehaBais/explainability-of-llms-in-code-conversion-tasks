Here's the equivalent code in Golang:
```go
package main
import (
 "fmt"
 "os"
)
func main() {
 // Get the size of a file called input.txt in the current working directory
 fi, err := os.Stat("input.txt")
 if err != nil {
 fmt.Println(err)
 return
 }
 fmt.Printf("Size of input.txt in current working directory: %d bytesn", fi.Size())
 // Get the size of a file called input.txt in the root file system
 fi, err = os.Stat("/input.txt")
 if err != nil {
 fmt.Println(err)
 return
 }
 fmt.Printf("Size of input.txt in root file system: %d bytesn", fi.Size())
}
``` 
This code uses the `os` package to get information about files. The `Stat()` function takes a filename as an argument and returns a `FileInfo` structure that contains information about the file, including its size. The code first gets the size of the file called `input.txt` in the current working directory by calling `Stat("input.txt")`. If there's an error, it prints the error message and exits. Otherwise, it prints the size of the file in bytes. 
The code then gets the size of the same file in the root file system by calling `Stat("/input.txt")`. Again, if there's an error, it prints the error message and exits. Otherwise, it prints the size of the file in bytes.

