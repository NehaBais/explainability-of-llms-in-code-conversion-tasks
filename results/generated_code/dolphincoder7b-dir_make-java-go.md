The equivalent of the Java code in Golang is:

```go
package main
import (
    "os"
    "path/filepath"
)
func main() {
    err := os.MkdirAll("C:/parent/test", 0755) // This creates all parents as well
    if err != nil {
        panic(err)
    } else {
        fmt.Println("path successfully created")
    }
}
```

This code is using the `os` package to perform file operations in Golang, and it uses `MkdirAll()` function to create a directory with all its parent directories. The second argument is the permission bits that are used if the directories need to be created. In this case, 0755 allows for full permissions for the owner (read/write/execute), read/write for group members and others.

By using `panic` instead of `return`, Golang's handling of panics is similar to exceptions in Java. This way of error handling can be used in all parts of the code, including calling functions which may panic themselves. In this case, we're wrapping the `os.MkdirAll()` call in a try-catch block to catch and handle any potential errors that might occur during directory creation.

Note: The Golang equivalent of Java's `File` class is `os.FileInfo`, not `java.io.File`. The difference between these two classes is minimal, but it's worth mentioning for clarity. 

The `filepath` package in Golang also provides some utility functions to work with file and directory paths, including `MkdirAll()` and `IsExist()`. This allows us to use relative paths in our code without needing to provide absolute paths.
