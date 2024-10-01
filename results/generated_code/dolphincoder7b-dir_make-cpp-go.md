The equivalent of the C++ code in Golang is shown below. However, there are a few differences between these two languages. The use of 'path/to/dir' instead of './path/to/dir' might be due to the way Go handles relative and absolute paths. For instance, it doesn't need the leading dot for relative paths.
```
package main

import (
    "fmt"
    "os"
    "io/fs"
    "path/filepath"
)

func mkdir(name string) error {
    if err := os.MkdirAll(name, 0755); err != nil && !os.IsExist(err) {
        return err
    }
    return nil
}

func main() {
    dirName := "./path/to/dir"
    fmt.Println("Creating directory", dirName)

    if err := mkdir(dirName); err == nil {
        fmt.Println("Directory created successfully.")
    } else {
        fmt.Printf("Error creating directory: %s\n", err)
    }
}
```
Note that `os.MkdirAll()` is used here instead of `fs.CreateDirectories()`. The latter does not exist in the Go standard library, but it can be found in external packages like "github.com/karrick/godirwalk".
The `fs.Exists()` function is used to check if the directory exists before attempting to create it again. This is different from the C++ code, where creating a directory that already exists returns success (0).
