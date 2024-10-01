Answer: The equivalent code in Golang is as follows:

The package os provides functions for interacting with the file system, including creating and reading files, directories etc. 

The `os.Stat` function takes a path to a file or directory as an argument and returns a value of type `syscall.Stat_t`. This structure contains information about the file, such as its size, permissions, creation time, modification time etc. 

In this case we are only interested in whether the file or directory exists so we use the `os.IsNotExist` function to check if the file or directory does not exist. If it doesn't exist then an error is returned. Otherwise `nil` is returned and we know that the file or directory exists.


```go
package main

import (
    "fmt"
    "log"
    "os"
)

func FileExists(path string) bool {
    info, err := os.Stat(path)
    if os.IsNotExist(err) {
        return false
    } else if err != nil {
        log.Fatal("Error checking for file: ", err)
    }
    return !info.Mode().IsDir()
}

func DirExists(path string) bool {
    info, err := os.Stat(path)
    if os.IsNotExist(err) {
        return false
    } else if err != nil {
        log.Fatal("Error checking for directory: ", err)
    }
    return info.Mode().IsDir()
}

func main() {
    fmt.Println("Checking current working dir:")
    FileExists("./input.txt")
    DirExists("./docs")

    fmt.Println("\nChecking root of the filesystem:")
    FileExists("/input.txt")
    DirExists("/docs")
}
```