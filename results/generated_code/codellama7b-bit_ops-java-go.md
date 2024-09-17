 Here is the code in Go:
```
package main

import (
	"fmt"
	"math/bits"
)

func main() {
	a := 32
	b := 4
	fmt.Println("a AND b: ", bits.And(a, b))
	fmt.Println("a OR b:", bits.Or(a, b))
	fmt.Println("a XOR b:", bits.Xor(a, b))
	fmt.Println("NOT a:", ^a)
	fmt.Println("a << b: ", bits.Lshift(a, uint(b))) // left shift
	fmt.Println("a >> b: ", bits.Rshift(a, uint(b))) // arithmetic right shift
	fmt.Println("a >>> b:", bits.Lshift(a, uint(b))) // logical right shift
	fmt.Println("a rol b:", bits.RotateLeft(a, uint(b))) // rotate left
	fmt.Println("a ror b:", bits.RotateRight(a, uint(b))) // rotate right
}
```
In Go, the bitwise operators are implemented as functions in the `math/bits` package. The `bits` package provides a set of functions for performing common bit manipulation operations such as AND (`And`), OR (`Or`), XOR (`Xor`), NOT (`Not`), shift left (`Lshift`), shift right (`Rshift`), and rotate left (`RotateLeft`) and rotate right (`RotateRight`).

In the example code, we use these functions to perform bitwise operations on two integers `a` and `b`. We also use the `^` operator for a bitwise NOT operation. The output of each operation is printed to the console using the `fmt` package's `Println` function.
