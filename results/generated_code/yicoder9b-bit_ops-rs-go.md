Here is the equivalent Golang code for the Rust code provided.
This program will perform bitwise AND, OR and XOR operations between two integers. It also does a bitwise NOT operation on the first integer, left shift, right shift of the first integer using the second integer as a shift/rotate amount etc.
```go
package main

import (
	"fmt"
)

func main() {
	a := uint8(105)
	b := uint8(91)

	fmt.Printf("a      = %08b\n", a)
	fmt.Printf("b      = %08b\n", b)
	fmt.Printf("a | b  = %08b\n", a|b)
	fmt.Printf("a & b  = %08b\n", a&b)
	fmt.Printf("a ^ b  = %08b\n", a^b)
	fmt.Printf("~a     = %08b\n", ^a)
	fmt.Printf("a << 3 = %08b\n", a<<3)
	fmt.Printf("a >> b = %08b\n", a>>uint(b)) // Go does not allow shift with negative or a value larger than the bit width of the type. So casting to uint here.
}
```
