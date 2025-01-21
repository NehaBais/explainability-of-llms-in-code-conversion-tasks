 Sure! Below is the equivalent Go code for the provided C++ function. Note that in Go, we don't have built-in functions for bitwise rotations, so we will need to implement them manually if needed. However, since Go 1.12, there are standard library functions for left and right shifts (`<<` and `>>`), which can be used directly on integers.

```go
package main

import (
	"fmt"
)

func bitwise(a int, b int) {
	fmt.Printf("a and b: %b\n", a&b)
	fmt.Printf("a or b:  %b\n", a|b)
	fmt.Printf("a xor b: %b\n", a^b)
	fmt.Printf("not a:   %b\n", ^a)

	// Go provides left shift and right shift operators directly on integers.
	fmt.Printf("a shl b: %b\n", a<<b)
	fmt.Printf("a shr b: %b\n", a>>b)

	// For logical right shift, we can cast to uint before shifting.
	ua := uint(a)
	fmt.Printf("a lsr b: %b\n", ua>>uint(b))

	// Implementing left and right rotations manually since Go does not have built-in rotation functions.
	leftRotate := func(val uint, shift int) uint {
		return (val << shift) | (val >> (32 - shift))
	}
	rightRotate := func(val uint, shift int) uint {
		return (val >> shift) | (val << (32 - shift))
	}
	fmt.Printf("a rol b: %b\n", leftRotate(ua, b))
	fmt.Printf("a ror b: %b\n", rightRotate(ua, b))
}

func main() {
	bitwise(10, 2) // Example usage
}
```

### Explanation:
1. **Bitwise Operations**: The bitwise AND (`&`), OR (`|`), and XOR (`^`) operations are performed directly in Go using the same operators as in C++.
2. **Bitwise NOT**: In Go, the `^` operator is used for bitwise NOT, but it requires a cast to an unsigned type if you want to perform a logical shift right operation on signed integers.
3. **Shift Operations**: The left shift (`<<`) and right shift (`>>`) operators are directly available in Go for both signed and unsigned integers.
4. **Logical Right Shift**: For the logical right shift, we cast the integer to `uint` before performing the shift.
5. **Left and Right Rotations**: Since Go does not have built-in rotation functions, we implement them manually using bitwise shifts. The provided implementations for left and right rotations are based on the standard library's behavior.

This code should work similarly to the C++ version, performing all the specified bitwise operations with the given integers `a` and `b`.
