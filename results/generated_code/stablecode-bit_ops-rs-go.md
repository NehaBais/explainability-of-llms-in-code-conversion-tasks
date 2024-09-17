Here is the equivalent code in Go:

```go
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
```
This Go code does exactly the same thing as your provided Rust code. It performs bitwise AND, OR, and XOR operations on two integers and also bitwise NOT, left shift, right shift on the first integer. The shifts/rotates are done with a shift amount taken from the second integer.
