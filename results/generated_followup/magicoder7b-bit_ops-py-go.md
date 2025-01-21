 The errors are because Go does not support bitwise operations on arbitrary-length integers (like Python does), so bits.FormatInt and uint type have been used instead, which can be used to format a 64-bit integer as binary string and RotateRight is not directly supported, it's done using shift operators.

Here is the corrected code:

```go
package main

import (
	"fmt"
	"math/bits"
)

func printBinary(n uint64, width int) {
	fmt.Printf("0b%s\n", bits.FormatUint(n, width))
}

func and(a, b uint64) uint64 {
	return a & b
}

func or(a, b uint64) uint64 {
	return a | b
}

func xor(a, b uint64) uint64 {
	return a ^ b
}

func not(a uint64) uint64 {
	return ^a & ((1 << bits.Size) - 1) // Assuming the size of bit is 32 or 64
}

func shifts() {
	printBinary(and(0b010, 1), 8)
	printBinary(or(0b010, 1), 8)
	printBinary(xor(0b010, 1), 8)
	printBinary(not(0b010), 8)

	// Use shift operators for rotate right.
	shiftRight := or(and(0b010, 1), 1)
	printBinary(shiftRight, 8)
}

func main() {
	shifts()
}
```
