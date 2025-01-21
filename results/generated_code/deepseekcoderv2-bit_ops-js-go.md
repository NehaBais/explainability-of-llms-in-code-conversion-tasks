 Sure, here is the equivalent code in Go that performs the bitwise operations as specified:

```go
package main

import (
	"fmt"
)

func bitwise(a, b int) {
	fmt.Println("a AND b:", a&b)
	fmt.Println("a OR b:", a|b)
	fmt.Println("a XOR b:", a^b)
	fmt.Println("NOT a:", ^a)
	fmt.Println("a << b:", a<<b) // left shift
	fmt.Println("a >> b:", a>>b) // arithmetic right shift
	// In Go, there is no logical right shift operator (>>>), so we use the arithmetic right shift instead
	fmt.Println("a >>> b (arithmetic right shift):", uint(a)>>uint(b)) // logical right shift emulation
}

func main() {
	a := 10 // Example values for a and b
	b := 5
	bitwise(a, b)
}
```

### Explanation:
- **AND (`&`)**: `a & b`
- **OR (`|`)**: `a | b`
- **XOR (`^`)**: `a ^ b`
- **NOT (`~`)**: In Go, the bitwise NOT operator is `^`, but since it returns a signed integer (which might be platform-dependent), we cast to `uint` before applying the NOT operation. This effectively performs a logical NOT on an unsigned representation of the number.
- **Left Shift (`<<`)**: `a << b`
- **Right Shift (`>>`)**: In Go, there are two types of right shifts: arithmetic (`>>`) and logical (`>>>`). The logical shift is emulated by casting to `uint` before shifting.

This code will perform the specified bitwise operations on the integers `a` and `b` as per your requirements.
