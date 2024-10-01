 In Go language, you can use the `os` and `path/filepath` packages to achieve this task. Here is a simplified version of your C code in Golang:

```go
package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func createDir(dir string) {
    if _, err := os.Stat(dir); err != nil {
        // Create the directory.
        fmt.Printf("Directory %s does not exist, creating...\n", dir)
        if err = os.MkdirAll(dir, 0755); err != nil {
            fmt.Println("Error creating directory: ", err)
        }
    } else {
        // Directory exists.
        fmt.Printf("Directory %s already exists\n", dir)
    }
}

func main() {
	dir := "./path/to/directory"  // replace with your desired directory path
	createDir(dir)
}
```
This code creates a function named `createDir` which takes a string `dir` as an argument. It first tries to get the information of the directory, if it does not exist then it will create all missing directories along the given path and if the directory already exists it prints that the directory already exists. The MkdirAll function from the os package is used to create directories recursively.
