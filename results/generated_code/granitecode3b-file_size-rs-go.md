Sure, here's the equivalent Golang code:
```
package main
import (
 "fmt"
 "io/fs"
 "os"
)
func main() {
 file_name := os.Args[1]
 metadata, err := fs.Stat(file_name)
 if err != nil {
 fmt.Println("Error:", err)
 return
 }
 fmt.Printf("Size of %s is %d bytes\n", file_name, metadata.Size())
}
``` 
Note that the `fs` package in Golang is different from the `std::fs` package in Rust. Also, the `env` and `process` modules are not available in Golang, so we need to use `os.Args[1]` to get the file name and `fmt.Println` instead of `exit_err`.

