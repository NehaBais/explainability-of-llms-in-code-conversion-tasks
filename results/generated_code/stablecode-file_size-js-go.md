Here is the JavaScript code converted to Golang:

```go
package main

import (
    "os"
    "path/filepath"
)

func fileSize(filename string) int64 {
    fi, err := os.Stat(filename)
    if err != nil {
        return 0
    }
    return fi.Size()
}

func main() {
    // Current directory
    currentDirFileSize := fileSize("input.txt")
    println("Current Directory File Size: ", currentDirFileSize)

    // Root directory
    rootDirFileSize := fileSize("c:/input.txt")
    println("Root Directory File Size: ", rootDirFileSize)
}
```
This Golang code is doing the same as your JavaScript one - it reads and prints out the sizes of two files, named 'input.txt' in the current directory, and 'input.txt' in the file system root respectively. Please note that this Golang program must be run on a Windows environment as it uses ActiveXObject to access the file system related functionalities.
