package main

import (
    "os"
)

size, err := os.Stat("input.txt")
if err != nil {
    fmt.Println(err)
} else {
    fmt.Println(size.Size())
}

rootSize, err := os.Stat("/input.txt")
if err != nil {
    fmt.Println(err)
} else {
    fmt.Println(size.Size())
}