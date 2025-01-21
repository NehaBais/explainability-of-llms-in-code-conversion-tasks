package main

import (
    "fmt"
    "bufio"
    "os"
)

func main() {
    reader := bufio.NewReader(os.Stdin)

    var a, b int

    // Read the first integer from user input
    fmt.Print("Enter the first integer: ")
    a, _ = reader.ReadInt()

    // Read the second integer from user input
    fmt.Print("Enter the second integer: ")
    b, _ = reader.ReadInt()

    // Test for less-than condition
    if a < b {
        fmt.Printf("%d is less than %d\n", a, b))
    }

    // Test for equality condition
    if a == b {
        fmt.Printf("%d is equal to %d\n", a, b))
    }

    // Test for greater-than condition
    if a > b {
        fmt.Printf("%d is greater than %d\n", a, b))
    }
}