In Go, you can use the `os` package's `MkdirAll()` function to create directories and their parents as needed. Here is how your Rust code would look in Go:

```go
package main

import (
    "fmt"
    "os"
)

func main() {
    err := os.MkdirAll("./path/to/dir", 0755) // set the directory permissions
    if err != nil {
        fmt.Println(err) // handle error
    } else {
        fmt.Println("Directory created successfully")
    }
}
```

In this Go code, `MkdirAll()` creates a new directory and its parents if they do not already exist. The second argument is the permissions for the new directory. If `err` is non-nil after the call to `os.MkdirAll()`, it indicates that an error occurred (such as insufficient permissions, missing parent directories, or a disk error).
