 In Golang, you can perform bitwise operations using the built-in `&`, `|` and `^` operators. To perform right shifts and arithmetic right shifts, use the `>>` operator for unsigned integers, and the `>>=` operator for signed integers. 
To rotate, use a package like `math/bits`. Here is how you can rewrite your code in Go:

```go
package main

import (
	"fmt"
	"math/bits"
)

func main() {
	a := uint8(105)
	b := uint8(91)
	fmt.Printf("a      = %s\n", bits.FormatUint(uint64(a), 2))
	fmt.Printf("b      = %s\n", bits.FormatUint(uint64(b), 2))
	fmt.Printf("a | b  = %s\n", bits.FormatUint(uint64(a|b), 2))
	fmt.Printf("a & b  = %s\n", bits.FormatUint(uint64(a&b), 2))
	fmt.Printf("a ^ b  = %s\n", bits.FormatUint(uint64(a^b), 2))
	fmt.Printf("!a     = %s\n", bits.FormatUint(uint64(!a), 2))
	fmt.Printf("a << 3 = %s\n", bits.FormatUint(uint64(a<<3), 2))
	fmt.Printf("a >> 3 = %s\n", bits.FormatUint(uint64(a>>3), 2))
}
```

Please note that Golang does not provide built-in bitwise left rotate, so we need to write a helper function. Here's an example:

```go
func main() {
	a := uint8(105)
	b := uint8(91)
	fmt.Printf("a      = %s\n", bits.FormatUint(uint64(a), 2))
	fmt.Printf("b      = %s\n", bits.FormatUint(uint64(b), 2))
	fmt.Printf("a | b  = %s\n", bits.FormatUint(uint64(a|b), 2))
	fmt.Printf("a & b  = %s\n", bits.FormatUint(uint64(a&b), 2))
	fmt.Printf("a ^ b  = %s\n", bits.FormatUint(uint64(a^b), 2))
	fmt.Printf("!a     = %s\n", bits.FormatUint(uint64(!a), 2))
	fmt.Printf("a << 3 = %s\n", bits.FormatUint(uint64(a<<3), 2))
	fmt.Printf("a >> 3 = %s\n", bits.FormatUint(uint64(a>>3), 2))
	fmt.Printf("rotate left a by b bits: %s\n", rotateLeft(a, b))
}

func rotateLeft(num uint8, shift int) uint8 {
	mask := (1 << shift) - 1
	return ((num & mask) << shift) | ((num >> (8 - shift)))
}
```
