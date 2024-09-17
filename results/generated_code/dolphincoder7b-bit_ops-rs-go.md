### Code:
```go
package main

import "fmt"

func main() {
    a := uint8(105)
    b := uint8(91)

    fmt.Printf("a       = %08b\n", a)
    fmt.Printf("b       = %08b\n", b)
    fmt.Printf("a | b   = %08b\n", bitwiseOr(a, b))
    fmt.Printf("a & b   = %08b\n", bitwiseAnd(a, b))
    fmt.Printf("a ^ b   = %08b\n", bitwiseXor(a, b))
    fmt.Printf("!a      = %08b\n", not(a))
    fmt.Printf("a << 3  = %08b\n", leftShift(a, 3))
    fmt.Printf("a >> 3  = %08b\n", rightShift(a, 3))
}

func bitwiseOr(a, b uint8) uint8 {
    return a | b
}

func bitwiseAnd(a, b uint8) uint8 {
    return a & b
}

func bitwiseXor(a, b uint8) uint8 {
    return a ^ b
}

func not(a uint8) uint8 {
    return 0xff - a
}

func leftShift(a, shift_amount uint8) uint8 {
    return a << shift_amount
}

func rightShift(a, shift_amount uint8) uint8 {
    return a >> shift_amount
}
```
