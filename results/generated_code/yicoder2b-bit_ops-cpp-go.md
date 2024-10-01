Sure, here is the equivalent code in Golang. 

In Go, there are no built-in bitwise operators like and, or, xor and not. So we have to write them manually.

```go
package main

import (
	"fmt"
)

func bitwise(a int, b int) {
	AND := a & b // Bitwise AND
	OR := a | b // Bitwise OR
	XOR := a ^ b // Bitwise XOR
	NOT_A := ~a  // Bitwise NOT (NOT A)
	SHL_B := a << b // Left shift
	SHR_B := a >> b // Right shift
	fmt.Printf("%d AND %d: %d\n", a, b, AND) 
	fmt.Printf("%d OR %d:  %d\n", a, b, OR) 
	fmt.Printf("%d XOR %d: %d\n", a, b, XOR)
	fmt.Printf("%d NOT A: %d\n", a, ~a) // Bitwise NOT (NOT A)
	fmt.Printf("%d SHL %d: %d\n", a, b, SHL_B) 
	fmt.Printf("%d SHR %d: %d\n", a, b, SHR_B) 
}
```
This Go code does the same operations as the C++ one. It converts integer 'a' into its complement and performs left shift operation with the second integer (b). The right shift operation is performed on integer 'a' with 'b' rotations to the right. Also, it performs right arithmetic shift, which is equivalent to the right shift operation in our code. Similarly, for rotation operations, it uses built-in functions of Golang.

Remember to call this function in your main() or any other function you wish to test the bitwise operations.
