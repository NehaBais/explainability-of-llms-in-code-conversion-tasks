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