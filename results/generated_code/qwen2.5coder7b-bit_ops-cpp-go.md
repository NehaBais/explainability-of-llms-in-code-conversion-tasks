Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func bitwise(a, b int32) {
	fmt.Printf("a and b: %d\n", a & b)
	fmt.Printf("a or b:  %d\n", a | b)
	fmt.Printf("a xor b: %d\n", a ^ b)
	fmt.Printf("not a:   %d\n", ^a)

	// Note: the Go shift operators are not guaranteed to work if the shift count (that is, b)
	// is negative, or is greater or equal to the number of bits in the integer being shifted.
	fmt.Printf("a shl b: %d\n", a << b)
	fmt.Printf("a shr b: %d\n", a >> b)

	var ua uint32 = uint32(a) // Golang doesn't support unsigned shift operations on integers
	fmt.Printf("a lsr b: %d\n", ua >> b)

	// As in C++, there are no rotation operators in Go, but we can implement them manually.
	fmt.Printf("a rol b: %d\n", (ua << uint32(b)) | (ua >> 32-uint32(b)))
	fmt.Printf("a ror b: %d\n", (ua >> uint32(b)) | (ua << 32-uint32(b)))
}

func main() {
	bitwise(10, 2)
}
```

Please note that Go doesn't support unsigned shift operations on integers. Therefore, if you want to perform an unsigned right shift operation, you need to use a typecast from int32 to uint32.

The left and right rotate operators do not exist in Golang, but they can be implemented manually as shown above. The rotation amount is calculated by shifting the bits of 'a' first to the left (or right) by b positions, then bitwise OR-ing it with the remaining bits shifted into position from the other end.

Also note that in Go we use `Printf` from `fmt` package to print out our values and `%d` is used as a format specifier for printing integers.
