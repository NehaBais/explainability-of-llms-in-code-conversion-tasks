Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"math/bits"
)

func main() {
	A := uint(105)
	b := uint(91)
	fmt.Printf("a      = %08b\n", A)
	fmt.Printf("b      = %08b\n", b)
	fmt.Printf("A | b  = %08b\n", A | b)
	fmt.Printf("A & b  = %08b\n", A & b)
	fmt.Printf("A ^ b  = %08b\n", A ^ b)
	fmt.Printf("!A     = %08b\n", ^A)
	fmt.Printf("A << 3 = %08b\n", A << 3)
	fmt.Printf("A >> 3 = %08b\n", A >> 3)

	// Golang doesn't have a native bit rotation function, but this is how you can do it:
	fmt.Printf("Right rotate of A by b = %08b\n", bits.RotateLeft32(uint32(A), int32(-int(b)))) // -1 to get the right rotation because Golang's RotateLeft function rotates left (not right)
	fmt.Printf("Left rotate of A by b = %08b\n", bits.RotateLeft32(uint32(A), int32(int(b)))) // positive number for left rotation

}
```

This code will print out the binary representation of each operation using the `fmt.Printf` function, with leading zeros. The bitwise NOT operator is represented by `^`. Right and left shifts are done using the `<<` and `>>` operators respectively. Note that Golang doesn't have a native bit rotation function, but this is how you can do it using the `bits.RotateLeft32` function from the `math/bits` package. 

Please note: the right shift operation in Rust requires a signed integer and its result will be an unsigned integer if the operand is also unsigned. In Golang, the sign of the bits is maintained during arithmetic operations but not during bitwise operations.
