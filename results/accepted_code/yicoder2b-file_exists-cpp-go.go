package main

import (
    "fmt"
    "os"
)

func fileExists(path string) bool {
    return os.Path exists(path)
}

func main() {
    // Check current working directory
    fmt.Printf("'input.txt'\n%v\n",fileExists("input.txt"))
    fmt.Printf("'zero_length.txt'\n%v\n",fileExists("zero_length.txt"))
    // Check root directory
    fmt.Printf("/docs/input.txt\n%v\n",fileExists("/docs/input.txt"))
    fmt.Printf("/docs/zero_length.txt\n%v\n",fileExists("/docs/zero_length.txt"))
}