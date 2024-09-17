Below is the equivalent Golang code:

```go
package main

import (
	"fmt"
	"math/bits"
)

func main() {
	var a uint8 = 105
	var b uint8 = 91
	
	fmt.Printf("a      = %08b\n", a)
	fmt.Printf("b      = %08b\n", b)
	fmt.Printf("a | b  = %08b\n", a|b)
	fmt.Printf("a & b  = %08b\n", a&b)
	fmt.Printf("a ^ b  = %08b\n", a^b)
	fmt.Printf("!a     = %08b\n", ^a)
	fmt.Printf("a << 3 = %08b\n", a<<3)
	fmt.Printf("a >> 3 = %08b\n", a>>3)
	
	// For right arithmetic shift
	left := uint(a) // Convert to an unsigned integer (of at least the same size as int)
	rightArithShifted := left >> uint(b)
	fmt.Printf("a >> b (arithmetic) = %08b\n", uint8(rightArithShifted))

	// For bitwise rotate and right rotate, GoLang does not provide builtin functions.
	// We have to manually perform these operations using shifts and OR/AND operations
	leftRotate := (a << b) | (a >> (8 - b))
	rightRotate := (a >> b) | (a << (8 - b))
	fmt.Printf("left rotate = %08b\n", leftRotate)
	fmt.Printf("right rotate = %08b\n", rightRotate)
}
```

Please note that there is no built-in function for arithmetic right shifts or rotates in Golang. The bitwise not (`!`) operator can only be used on an unsigned integer, so we have to convert `a` to a larger unsigned type before shifting it.

Left and right rotate operations are also not directly supported by Go's language features. They can be implemented manually using combination of left/right shifts and OR/AND operations as shown above.
