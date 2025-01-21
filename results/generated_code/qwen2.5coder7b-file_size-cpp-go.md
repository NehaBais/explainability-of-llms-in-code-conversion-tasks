Here's how you can convert the given C++ code to Go:

```go
package main

import (
    "fmt"
    "os"
)

func printFileSize(filename string) {
    info, err := os.Stat(filename)
    if err != nil {
        fmt.Fprintf(os.Stderr, "%s\n", err)
        return
    }
    
    size := info.Size()
    fmt.Printf("Size of file %s is %d bytes.\n", filename, size)
}

func main() {
    printFileSize("./input.txt")
    printFileSize("/input.txt")
}
```
This Go code will do the same thing as your C++ code. It tries to get the file info using `os.Stat()`, then checks if there was an error. If there is no error, it will print the size of the file.
