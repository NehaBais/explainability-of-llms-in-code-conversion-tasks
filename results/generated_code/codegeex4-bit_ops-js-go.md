In Go, you can perform bitwise operations using the `&` for AND, `|` for OR, and `^` for XOR. For the NOT operation, use the `^` operator with an integer of all 1s (`0xFFFFFFFFFFFFFFFF` if working with 64 bit integers). Left shifts can be done with the `<<` operator, right arithmetic shift with the `>>` operator, and logical right shift with the `>>>` operator (Go does not support unsigned integers as it treats them as signed).

Here's how you would implement your JavaScript function in Go:

```go
package main

import (
	"fmt"
)

func bitwise(a int64, b int) {
	fmt.Printf("a AND b: %d\n", a&int64(b))
	fmt.Printf("a OR b: %d\n", a|int64(b))
	fmt.Printf("a XOR b: %d\n", a^int64(b))
	fmt.Printf("NOT a: %d\n", ^a)
	fmt.Printf("a << b: %d\n", a<<uint(b)) // left shift
	fmt.Printf("a >> b: %d\n", a>>uint(b)) // arithmetic right shift (Go does not differentiate between logical and arithmetic shifts for signed integers, so it's the same as >>>)
}

func main() {
	bitwise(10, 2) // Replace with your desired inputs
}
```
In this code, we use `int64` for the first integer to match the bitwise NOT operation which works on 64-bit numbers. Also, note that Go uses `uint` for shift operations to avoid negative shifts.

Please replace "10" and "2" in the last line with your own inputs. The `main()` function is required to run this program, so we call our `bitwise()` function from there.
