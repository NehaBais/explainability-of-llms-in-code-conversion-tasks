Here is the conversion of your C code to Golang. It's important to note that in Go, shifts and rotates behave as expected. They don't have overflow checks like in C, which can be a potential source of bugs. Also, Go has a built-in '<<=' operator for bitwise left shift assignment, and a '>>=' operator for bitwise right shift assignment.

```go
package main

import (
	"fmt"
)

func bitwise(A int, b int) {
	fmt.Printf("a and b: %d\n", A & b)
	fmt.Printf("A or b: %d\n", A | b)
	fmt.Printf("A xor b: %d\n", A ^ b)
	fmt.Printf("not A: %d\n", ^A)

	c := uint(A)
	fmt.Printf("c >> b: %d\n", c >> b)
}

func main() {
    bitwise(10, 3)
}
```

This will output the same result as your C code when run with `go run bitwise.go`.
