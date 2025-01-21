The equivalent Go code for the above Rust code would be as follows:

```go
package main

import (
    "fmt"
)

func main() {
    var a, b uint8 = 105, 91
    fmt.Printf("a      = %08b\n", a)
    fmt.Printf("b      = %08b\n", b)

    var sum, and, xor uint8
    sum = a | b
    and = a & b
    xor = a ^ b

    fmt.Printf("a | b  = %08b\n", sum)
    fmt.Printf("a & b  = %08b\n", and)
    fmt.Printf("a ^ b  = %08b\n", xor)

    not := ^a
    fmt.Printf("!a     = %08b\n", not)

    leftShift := a << 3
    rightShift := a >> 3

    fmt.Printf("a << 3 = %08b\n", leftShift)
    fmt.Printf("a >> 3 = %08b\n", rightShift)
}
```
In Go, the ^ operator represents bitwise XOR operation whereas the << and >> operators represent left shift and right shift respectively. The `^` operator works with integers only, while `<<` and `>>` operate on bits of an integer. Bit shifting operations in Go are performed using left shift (<<) and right shift (>>) operator respectively.
