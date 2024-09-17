package main

import "fmt"

func main() {

    var a, b = 105, 91
    fmt.Printf("a      = %08b\n", a)
    fmt.Printf("b      = %08b\n", b))
    fmt.Printf("a | b  = %08b\n", a|b))
    fmt.Printf("a & b  = %08b\n", a&b))
    fmt.Printf("a ^ b  = %08b\n", a^b))
    fmt.Printf("!a     = %08b\n", !a))
    fmt.Printf("a << 3   = %08b\n", a<<3))
    fmt.Printf("a >> 3   = %08b\n", a>>3))
}