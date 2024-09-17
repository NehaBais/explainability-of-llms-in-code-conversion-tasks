 Here is the code in Go:
```
package main

import (
	"fmt"
	"math/bits"
)

func main() {
	a := 5
	b := 3

	// Bitwise AND, OR, XOR
	fmt.Println("a and b:", bits.And(a, b)) // Note: parentheses are needed because & has lower precedence than <<
	fmt.Println("a or b: ", bits.Or(a, b))
	fmt.Println("a xor b:", bits.Xor(a, b))

	// Bitwise NOT
	fmt.Println("not a:  ", bits.Not(a)) // Note: ~ is not used because it is a bitwise operator

	// Shift and rotate
	fmt.Println("a shl b:", bits.LShift(a, b)) // Note: "<<" is used both for output and for left shift
	fmt.Println("a shr b:", bits.RShift(a, b)) // typically arithmetic right shift, but not guaranteed
	ua := uint(a)
	fmt.Println("a lsr b:", bits.LRotate(ua, b)) // logical right shift (guaranteed)
	fmt.Println("a rol b:", bits.Rotl(ua, b))
	fmt.Println("a ror b:", bits.Ror(ua, b))
}
```
Note that the `bits` package is used to perform bitwise operations and shifting on integers in Go. The `And`, `Or`, and `Xor` functions are used for bitwise AND, OR, and XOR, respectively. The `Not` function is used for bitwise NOT. The `LShift`, `RShift`, `LRotate`, and `Rotl` functions are used for shifting and rotating left or right on integers in Go.

Also note that the code uses the `fmt` package to print the results of the operations, which is a standard library in Go.
