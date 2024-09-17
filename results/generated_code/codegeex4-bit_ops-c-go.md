In Go language, bitwise operations can be performed directly on integers and the function `Printf` is used to print strings. Here's how the code from your question could look like:

```go
package main

import (
	"fmt"
)

func bitwise(a int, b uint) {
	fmt.Printf("a and b: %d\n", a&b)
	fmt.Printf("a or b: %d\n", a|b)
	fmt.Printf("a xor b: %d\n", a^b)
	fmt.Printf("not a: %d\n", ^a)
	fmt.Printf("a << n: %d\n", a<<b) // left shift
	fmt.Printf("a >> n: %d\n", a>>b) // arithmetic right shift
	// convert the signed integer into unsigned, so it will perform logical shift
	c := uint(a)
	fmt.Printf("c >> b: %d\n", c>>b) // logical right shift
	return
}

func main() {
	bitwise(10, 2)
}
```
Please note that in Go, you can't do bitwise operations with a negative integer for the right shift because it would result in an invalid operation. In order to perform logical right shifts on negative integers, we need to cast our integer to unsigned before performing the shift.
