This problem requires Rust programming language to be solved correctly. 

Please provide the Golang code that needs verification of existence of an input file or directory in current working directory and filesystem root. If it verifies its existence, print whether it is a file or directory. If it encounters an error, print the specific error message.

The provided Golang code is: 
```Go
package main

import (
    "fmt"
    "os"
)

func printStat(p string) {
    if err := os.Stat(p); err != nil {
        fmt.Println(err)
    } else if i.IsDir() {
        fmt.Println(p, "is a directory")
    } else {
        fmt.Println(p, "is a file")
    }
}

func main() {
    printStat("input.txt")
    printStat("/input.txt")
    printStat("docs")
    printStat("/docs")
}
```
Your task is to convert the Golang code provided into Rust and write the equivalent Rust program with error handling for the same.
Please ensure that you provide the correct solution in a single fenced code block which contains your Rust program.
