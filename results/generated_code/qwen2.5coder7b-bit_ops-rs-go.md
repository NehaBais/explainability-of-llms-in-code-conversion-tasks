Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func binaryShifts(a, b uint8) {
	fmt.Printf("a      = %08b\n", a)
	fmt.Printf("b      = %08b\n", b)
	fmt.Printf("a | b  = %08b\n", a|b)
	fmt.Printf("a & b  = %08b\n", a&b)
	fmt.Printf("a ^ b  = %08b\n", a^b)
	fmt.Printf("!a     = %08b\n", ^a)
	fmt.Printf("a << %d = %08b\n", int(b), a<<int(b))
	fmt.Printf("a >> %d = %08b\n", int(b), a>>int(b))
}

func main() {
	var a uint8 = 105
	var b uint8 = 91

	binaryShifts(a, b)
}
```
This Go code will achieve the same result as your Rust code. The `binaryShifts` function accepts two `uint8` parameters and prints their bitwise OR, AND, XOR results, NOT of a, left shift by b, right shift by b. It also uses `%08b` format specifier to print integers in binary with leading zeros.
