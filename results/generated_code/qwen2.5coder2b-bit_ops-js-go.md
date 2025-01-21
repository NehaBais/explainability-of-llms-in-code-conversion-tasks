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
}

func main() {
	bitwise(5, 3)
}
```

The `bitwise` function takes two integers as input and performs the specified bitwise operations. The `main` function calls this `bitwise` function with the arguments 5 and 3.

Note that Go doesn't have a built-in type for bit shift operators like JavaScript. However, you can use arithmetic shift to simulate these operations by adding/subtracting one from the argument before performing the shift. For example, for left shift, you can do `a<<b` where `b` is added to `a`. Similarly, for right shift and right arithmetic shift, you can do `a>>b`, and for logical right shift, you can do `(a-b)>>b`.
