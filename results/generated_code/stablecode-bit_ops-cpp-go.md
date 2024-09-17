Here is the equivalent code in Go:

```go
package main

import (
	"fmt"
	"math/bits"
)

func bitwise(a int, b int) {
	fmt.Printf("a and b: %d\n", a&b))
	fmt.Printf("a or b: %d\n", a|b))
	fmt.Printf("a xor b: %d\n", a^b))
	fmt.Printf("not a: %d\n", ^a))

	// Note: the Go shift operators are not guaranteed to work if the shift count 
	// is negative, or is greater or equal to the number of bits in the integer being shifted.
	// Therefore, it's recommended to use the bitutils functions provided by the "math/bits" package instead.
	fmt.Printf("a shl b: %d\n", a<<b))
	fmt.Printf("a shr b: %d\n", a>>b))

	// Note: there are no rotation operators in Go, but as of Go v1.17, the standard-library "math/bits" package provides a "RotateLeft" and "RotateRight" function that works for all rotation amounts.
	fmt.Printf("a rol b: %d\n", bits.RotateLeft(uint64(a), uint64(b))))
	fmt.Printf("a ror b: %d\n", bits.RotateRight(uint64(a), uint64(b))))
}

func main() {
	var a int = 10
	var b int = 2

	bitwise(a, b)
}
```

This code defines a function `bitwise` that takes two integers `a` and `b`. 

The `bitwise` function performs bitwise operations (AND, OR, XOR, NOT, shift left, shift right) on the input integers. The results are then printed to the console.

In the `main` function, an example input of 10 for `a` and 2 for `b` is passed into the `bitwise` function to demonstrate its usage.

Note: In Go, the standard-library "math/bits" package provides a "RotateLeft" and "RotateRight" function that works for all rotation amounts. Therefore, it's recommended to use these functions provided by the "math/bits" package instead of implementing your own rotation functions.
