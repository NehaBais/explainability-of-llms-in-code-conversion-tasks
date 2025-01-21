Here is the equivalent code in Golang:

```go
package main

import (
    "fmt"
    "os"
)

func createFile() error {
    f, err := os.Create("output.txt")
    if err != nil {
        return err
    }
    defer f.Close()
    return nil
}

func createDir() error {
    err := os.Mkdir("docs", 0755)
    if err != nil {
        return err
    }
    return nil
}

func main() {
    fmt.Println("Creating files and directories in the current directory...")
    if err := createFile(); err != nil {
        fmt.Println(err)
    }
    if err := createDir(); err != nil {
        fmt.Println(err)
    }

    fmt.Println("Creating files and directories at the root of the filesystem...")
    // Note: Directories can't be created in the root directory on certain systems
    path, _ := os.Getwd()
    absPath, _ := filepath.Abs(filepath.Join(path, ".."))
    
    if err := createFileInRoot(absPath); err != nil {
        fmt.Println(err)
    }
    if err := createDirInRoot(absPath); err != nil {
        fmt.Println(err)
    }
}

func createFileInRoot(path string) error {
    f, err := os.Create(filepath.Join(path, "output.txt"))
    if err != nil {
        return err
    }
    defer f.Close()
    return nil
}

func createDirInRoot(path string) error {
    // Directories can't be created in the root directory on certain systems
    fmt.Println("Can't create directories in the root of the filesystem on certain systems.")
    return nil
}
```
Note: You may need to use the `os.Create` and `os.Mkdir` functions with appropriate permissions. Also, creating directories at the filesystem root can be restricted based on the system policies or user privileges.
