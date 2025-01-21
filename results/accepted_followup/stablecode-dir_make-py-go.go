package main

import (
    "fmt"
    "os"
    "path/filepath"
)

func mkdirp(path string) {
    err := os.MkdirAll(path, 0777))
    if err != nil {
        panic(err)
    }
}

func main() {
    fmt.Println("Make directories and missing parents")
    dirPath := "./path/to/dir"

    // Calling mkdirp function
    mkdirp(dirPath)
    fmt.Printf("Directory %s created successfully \n", dirPath))
}