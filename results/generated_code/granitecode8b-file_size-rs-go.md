Here's the equivalent Golang code for verifying the size of a file called input.txt in the current working directory and the file system root:
```
package main
import (
 "fmt"
 "os"
)
func main() {
 if len(os.Args) < 2 {
 fmt.Println("Usage: ", os.Args[0], " <filename>")
 return
 }
 fileName := os.Args[1]
 fileInfo, err := os.Stat(fileName)
 if err != nil {
 fmt.Println("Error:", err)
 return
 }
 fmt.Printf("Size of %s is %d bytesn", fileName, fileInfo.Size())
}
```
This code uses the `os` and `fmt` packages to read the command line arguments and get information about the file. The `Stat()` function returns a `FileInfo` structure that contains various attributes of the file, including its size. The program then prints the size of the file in bytes.

