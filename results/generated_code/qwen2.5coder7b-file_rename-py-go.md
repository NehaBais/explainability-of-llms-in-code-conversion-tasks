Here is how you can convert the given Python code to Golang:

```go
package main

import (
    "fmt"
    "os"
)

func renameInDirectory(directory string) {
    err := os.Rename(directory+"input.txt", directory+"output.txt")
    if err != nil {
        fmt.Println("Error renaming file:", err)
    }

    err = os.Rename(directory+"docs", directory+"mydocs")
    if err != nil {
        fmt.Println("Error renaming directory:", err)
    }
}

func renameInRoot() {
    err := os.Rename("/input.txt", "/output.txt")
    if err != nil {
        fmt.Println("Error renaming file in root:", err)
    }

    err = os.Rename("/docs", "/mydocs")
    if err != nil {
        fmt.Println("Error renaming directory in root:", err)
    }
}

func main() {
    // Rename files and directories in current working directory
    renameInDirectory(".")

    // Rename files and directories in filesystem root
    renameInRoot()
}
```

This Go code uses the `os` package to rename files and directories. The `renameInDirectory` function takes a string argument representing the path of the directory where you want to perform renaming operations, while the `renameInRoot` function performs the same operations in the filesystem root ("/"). If an error occurs during the renaming process, it prints out an error message.
