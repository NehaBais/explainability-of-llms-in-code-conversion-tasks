The error `/tmp/yicoder2b-bit_ops-rs-go.go:17:33: cannot use ~ outside of interface or type constraint (use ^ for bitwise complement)` occurs because in Rust, shifting a signed number with the `<<` operator doesn't do what you might expect if you don't have experience with unsigned numbers. Specifically, it shifts the sign bit into the result, whereas on a machine where unsigned numbers are represented as 2's complement integers, this results in incorrect values when the original value was negative (because shifting a signed number is equivalent to multiplying by 2).

The error `/tmp/yicoder2b-bit_ops-rs-go.go:18:40: a << 3 (constant 840 of type uint8) overflows uint8` also occurs because `a << 3` has an overflow because `uint8(840)` is larger than the maximum value for `uint8`, which is 255.

The equivalent Golang code would be:
```go
package main

import "fmt"

func main() {
	const a uint8 = 105
	const b uint8 = 91

	// print original bits of variables
	fmt.Printf("a      = %#04o\n", int(a))
	fmt.Printf("b      = %#04o\n", int(b))

	// perform bitwise operations and print the result in binary format
	fmt.Printf("a | b  = %#04o\n", a|b)
	fmt.Printf("a & b  = %#04o\n", a&b)
	fmt.Printf("a ^ b  = %#04o\n", a^b)
	fmt.Printf("!a     = %#04o\n", ~a&1)
	fmt.Printf("a << 3 = %#04o\n", uint8((a<<3)&7)) // left shift by 3 bits and mask with 7 (2^3-1)
	fmt.Printf("a >> 3 = %#04o\n", a>>3)
}
```
