```go
package main

import (
    "os"
)

func main() {
    if err := os.Rename("input.txt", "output.txt"); err != nil {
        panic(err)
    }

    if err := os.Rename("docs", "mydocs"); err != nil {
        panic(err)
    }

    if err := os.Rename("/input.txt", "/output.txt"); err != nil {
        panic(err)
    }

    if err := os.Rename("/docs", "/mydocs"); err != nil {
        panic(err)
    }
}
```
In Golang, you can use the `os` package and its methods to perform file renaming operations. The `Rename()` method is used to change the name of a file or directory. It takes two arguments: oldPath and newPath, which represent the path of the original file or directory and the desired new path for the renamed item respectively.
