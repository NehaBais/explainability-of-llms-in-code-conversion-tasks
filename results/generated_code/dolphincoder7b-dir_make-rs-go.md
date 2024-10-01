To convert the Rust code to Golang, we need to install the equivalent packages for creating directories. In this case, we will use os and io/ioutil packages to create a directory. Here is the updated Go code:
```go
package main
import (
    "os"
    "io/ioutil"
)
func main() {
    err := os.MkdirAll("./path/to/dir", 0755)
    if err != nil {
        panic(err)
    }
}
```
This Go code creates a directory named "./path/to/dir". If the directory already exists, it returns successfully. The MkdirAll function is used to create parent directories and the specified directory.
