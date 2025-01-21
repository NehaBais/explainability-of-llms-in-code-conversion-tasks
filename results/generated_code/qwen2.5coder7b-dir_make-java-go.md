Here is how you can implement the same functionality in Golang.

```golang
package main

import (
    "fmt"
    "os"
)

func createPath(path string) error {
    err := os.MkdirAll(path, 0755)
    if err != nil {
        return fmt.Errorf("failed to create directory: %w", err)
    }
    
    fmt.Println("path successfully created")
    return nil
}

func main() {
    path := "./parent/test"
    if err := createPath(path); err != nil {
        fmt.Println(err)
    }
}
```

This code will create a directory and any missing parents. If the directory already exists, it will not produce an error and will print "path successfully created". This function works equally well cross-platform. The permissions for the directories are set to 0755 (read/write/execute for owner and read/execute for group others).

Please note that `os.MkdirAll()` in Go does exactly what you described it should do - create any missing parent directories as needed.
