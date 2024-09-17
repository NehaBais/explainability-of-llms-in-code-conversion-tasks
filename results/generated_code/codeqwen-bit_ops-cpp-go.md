The equivalent Go code would be as follows:

```go
package main

import (
	"fmt"
	"math/bits"
)

func bitwise(A int, b int) {
	fmt.Printf("A and b: %d\n", A & b)
	fmt.Printf("A or b:  %d\n", A | b)
	fmt.Printf("A xor b: %d\n", A ^ b)
	fmt.Printf("not A:  %d\n", ^A)

	fmt.Printf("A shl b: %d\n", A << b)
	fmt.Printf("A shr b: %d\n", A >> b)
	ua := uint(A)
	fmt.Printf("A lsr b: %d\n", ua >> b)

	fmt.Printf("A rol b: %d\n", bits.RotateLeft32(uint32(A), int32(b)))
	fmt.Printf("A ror b: %d\n", bits.RotateRight32(uint32(A), int32(b)))
}

func main() {
	bitwise(10, 3)
}
```
In the Go code above, we're making use of the `math/bits` package to perform the rotation operations. The `RotateLeft32` and `RotateRight32` functions are used for left and right rotations, respectively.
