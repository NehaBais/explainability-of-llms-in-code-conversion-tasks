 Sure, here is the equivalent code in Golang:

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
	fmt.Printf("!a     = %08b\n", ^a)
	fmt.Printf("a << 3 = %08b\n", a<<3)
	fmt.Printf("a >> 3 = %08b\n", uint8(int8(a)>>3))
}
```

In this Golang code:
- The bitwise AND (`&`), OR (`|`), and XOR (`^`) operations are performed using the same syntax as in Rust.
- The bitwise NOT (`!`) is performed by using the `^` operator with a single operand, where the operand is the number itself prefixed with `^`.
- Left shift (`<<`) and right shift (`>>`) are performed directly on integers using the respective operators.
- Right arithmetic shift (`>>`) for signed integers is achieved by casting to an `int8` before shifting, then casting back to a `uint8`. This ensures that the sign bit is preserved correctly.
