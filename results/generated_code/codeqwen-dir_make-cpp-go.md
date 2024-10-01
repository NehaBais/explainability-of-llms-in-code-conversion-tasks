Below is the equivalent code in Golang for the given C++ function.

```go
package main

import (
    "fmt"
    "os"
    "path/filepath"
)

func main() {
    args := os.Args
    if len(args) != 2 {
        fmt.Println("usage: mkdir <path>")
        return
    }

    dir := args[1]
    err := filepath.MkdirAll(dir, 0755)
    if err == nil {
        return
    } else if os.IsExist(err) {
        fmt.Println("Directory already exists:", dir)
        return
    } else {
        fmt.Println("Couldn't create directory: ", dir, "- Error:", err)
        return
    }
}
```

This Go program creates a directory using `os/filepath.MkdirAll()`. This function will create all the directories in the path (including any intermediate ones) if they don't already exist. It also creates parent directories with permissions 0755 recursively. If the directory already exists, it returns nil and no error is returned. If an error occurs while creating the directory, it returns the error. The program will print out a message when an error occurs or when the directory is successfully created.
