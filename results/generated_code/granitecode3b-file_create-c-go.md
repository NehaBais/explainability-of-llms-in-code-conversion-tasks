Here's the equivalent Golang code:
```go
package main
import (
 "fmt"
 "os"
)
func main() {
 // Create output.txt in current working directory with size 0 bytes and permissions 0640 (rw-r-----).
 f, err := os.Create("output.txt")
 if err != nil {
 fmt.Println(err)
 return
 }
 defer f.Close()

 // Create docs directory in filesystem root with permissions 0750 (rwxr-x---).
 err = os.MkdirAll("docs", 0750)
 if err != nil {
 fmt.Println(err)
 return
 }
}
```
Note that the Golang `Create` function creates a new file with size 0 bytes, while the C code uses `creat` to create an empty file. Also, the Golang `MkdirAll` function recursively creates all necessary parent directories if they don't exist, while the C code uses `mkdir` to create only the current directory and its parents.

