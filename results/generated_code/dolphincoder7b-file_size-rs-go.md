This is a Rust program that verifies the size of a file named "input.txt". The `main` function first gets the file name from command-line arguments. It then uses the `fs::metadata` function to get the metadata for the given file, including its size. If no error occurs during this operation, it prints out the size of the file in bytes.
```go
package main

import (
    "fmt"
    "os"
    "syscall"
)

func main() {
    if len(os.Args) < 2 {
        fmt.Println("No file name supplied")
        os.Exit(1)
    }

    file, err := syscall.Stat(os.Args[1])
    if err != nil {
        fmt.Fprintln(os.Stderr, "Error:", err)
        os.Exit(2)
    }

    fmt.Printf("Size of %s is %d bytes\n", os.Args[1], file.Size())
}
```
In Golang, the `os` package provides access to operating-system functionality. The `syscall.Stat` function retrieves information about a file using its pathname. If no error occurs during this operation, it prints out the size of the file in bytes.

