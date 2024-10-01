The equivalent Golang code for the given C program would be as follows:

```go
package main

import (
    "os"
    "path/filepath"
)

func checkFile(filename string, root "") bool {
    f, err := os.Stat(filename)
    if err != nil {
        return false
    }
    _, isReg := filepath.IsAbs(filename), f.IsDir()
    return isReg && f.Mode()&0177 == 0
}

func main() {
    printf("%s is a regular file? %s\n", "input.txt", checkFile("input.txt", "") ? "yes" : "no")
    printf("docs is a directory? %s\n", checkFile("docs", "/") ? "yes" : "no")
    printf("%s is a regular file? %s\n", "/input.txt", checkFile("/input.txt", "") ? "yes" : "no")
    printf("/docs is a directory? %s\n", checkFile("/docs", "/") ? "yes" : "no")
}
```
This code verifies if the file exists and whether it's a regular file or a directory based on its absolute path. It uses the `filepath` package in Go to simplify file operations. If the `filepath.IsAbs()` function returns true, that means it is an absolute path and the filename provided as argument is a regular file; otherwise, it checks if the given filename exists and whether it's a directory or not. The check for mode bits (the first 9 bits) are set to zero, hence verifying that the file is not owned by others than the user executing this program.
