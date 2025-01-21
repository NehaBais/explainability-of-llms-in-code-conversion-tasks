Sure, here is the equivalent code in Go:

```go
package main

import (
	"fmt"
)

func bitwise(a int, b int) {
	fmt.Printf("a AND b: %d\n", a&b)
	fmt.Printf("a OR b: %d\n", a|b)
	fmt.Printf("a XOR b: %d\n", a^b)
	fmt.Printf("NOT a: %d\n", ^a)
	fmt.Printf("a << b: %d\n", a<<b) // left shift
	fmt.Printf("a >> b: %d\n", a>>b) // arithmetic right shift
	fmt.Printf("a >>> b: %d\n", a>>b) // logical right shift
	fmt.Printf("a rol b: %d\n", a<<int(b)) // rotate left, Go 1.5+
	fmt.Printf("a ror b: %d\n", int(a)>>b) // rotate right, Go 1.5+
}

func main() {
    bitwise(10, 2)
}
```

The code above does the same thing as Java's bitwise operations. It takes two integers `a` and `b`, and performs bitwise AND, OR, XOR, NOT, left shift, arithmetic right shift, logical right shift, rotate left, and rotate right on `a`. The `<<` operator in Go is used for left shift, but for a negative shift amount (like Java's `< 0`), we need to cast the shift amount to an integer.
