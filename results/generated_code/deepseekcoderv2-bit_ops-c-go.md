 Sure! Below is the equivalent Go code for the provided C code. The Go language has built-in support for bitwise operations and shifts, which makes this conversion straightforward.

```go
package main

import (
	"fmt"
)

func bitwise(a int, b int) {
	fmt.Printf("a and b: %d\n", a&b)
	fmt.Printf("a or b: %d\n", a|b)
	fmt.Printf("a xor b: %d\n", a^b)
	fmt.Printf("not a: %d\n", ^a)
	fmt.Printf("a << n: %d\n", a<<b) // left shift
	fmt.Printf("a >> n: %d\n", a>>b) // arithmetic right shift on most platforms
	// logical right shift for the unsigned representation of 'a'
	c := uint(a)
	fmt.Printf("c >> b: %d\n", c>>b) // logical right shift
}

func main() {
	bitwise(10, 5) // Example usage
}
```

### Explanation:
- **Bitwise AND (`&`)**: `a & b`
- **Bitwise OR (`|`)**: `a | b`
- **Bitwise XOR (`^`)**: `a ^ b`
- **Bitwise NOT (`^`)**: In Go, the bitwise NOT operator is `^`, but it operates on unsigned integers. To perform a bitwise NOT on a signed integer, we first convert it to an unsigned integer: `uint(a)` or `uint(b)`.
- **Left Shift (`<<`)**: `a << b`
- **Arithmetic Right Shift (`>>`)**: In Go, the right shift operator (`>>`) performs an arithmetic shift on signed integers and a logical shift on unsigned integers. Since we want to perform an arithmetic shift for the second integer in your case, it will work as expected with signed integers.
- **Logical Right Shift (`>>`)**: To perform a logical right shift, convert the integer to `uint` type: `c := uint(a)` and then use `c >> b`.

This Go code should provide the same output as the provided C code when executed.
