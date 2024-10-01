The equivalent of the Rust code in Golang is:

```go
package main
import (
    "os"
    "io/fs"
)
func main() {
    err := "File move error"
    os.Rename("input.txt",  "output.txt")
    os.Rename("docs",  "mydocs")
    fs.Rename("input.txt",  "output.txt")
    fs.Rename("docs",  "mydocs")
}
```

Please note, that Golang doesn't have a built-in function to rename a directory as it does in Rust. The `os` package provides the necessary functionality for renaming files and directories by using either `os.Rename()` or `fs.Rename()`. In this case we're just trying to rename files or directories within the current working directory (`"input.txt", "output.txt"`), at the filesystem root (`"/input.txt", "/output.txt"`), so both methods will work fine.
