Sure, here is the equivalent code in Golang:
```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func printFileSize(filename string) {
    if _, err := os.Stat(filename); err != nil {
        panic(err)
    } else {
        info := filepath.Dir(filename) + "/" + filename
        size, err := os.Stat(info).Size()
        if err != nil {
            panic(err)
        }
        fmt.Printf("Size of file %s is %d bytes.\n", info, size)
    }
}

func main() {
	printFileSize("input.txt")
	printFileSize(filepath.Abs("/input.txt"))
}
```
This code does essentially the same thing as your original C++ code: it reads the size of a file, or, if given an absolute path to the file, the size of its directory. Please note that Golang's `os.Stat` function returns errors that are not `std::exception`. In fact, it doesn't throw exceptions at all. Instead, you should check for `err != nil` after calling `os.Stat(filename)` to see if the operation succeeded or not. If an error is returned, then `filepath.Dir(filename)` and `filepath.Abs("/input.txt")` will fail because they can't work with a non-existent path.
