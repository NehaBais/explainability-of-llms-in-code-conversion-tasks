package main

import "fmt"

func compare(a int, b int) {

    if a == b {
        fmt.Println(a, "equals", b))
    } else if a < b {
        fmt.Println(a, "is less than", b))
    } else if a > b {
        fmt.Println(a, "is greater than", b))
    }

}

func main() {

    var a int
    var b int

    fmt.Print("Enter first integer: ")
    fmt.Scan(&a)

    fmt.Print("Enter second integer: ")
    fmt.Scan(&b)

    compare(a, b)

}