Here is the equivalent code in Golang:

```golang
package main

import (
	"fmt"
)

func bitwise(A int, b int) {
	fmt.Printf("A AND b: %d\n", A & b)
	fmt.Printf("A OR b: %d\n", A | b)
	fmt.Printf("A XOR b: %d\n", A ^ b)
	fmt.Printf("NOT a: %d\n", ^A)
	fmt.Printf("A << b: %d\n", A << b) // left shift
	fmt.Printf("A >> b: %d\n", A >> b) // arithmetic right shift
	fmt.Printf("A >>> b: %d\n", A>>b)  // logical right shift

	// Go doesn't support Integer rotateLeft and rotateRight as java does,
	// so we need to implement the equivalent functions using bitwise operations.

	for i := 0; i < b; i++ {
		A <<= 1 // left shift
		if A < 0 {
			A |= (^(^0)) >> (32 - b)
		}
	}

	for i := 0; i < b; i++ {
		A >>= 1 // right shift
		if A&1 == 1 {
			A |= ^(^0) << (31 - i)
		}
	}
}

func main() {
	bitwise(12, 3) // For example purposes, replace with your inputs
}
```

Please note that Go doesn't support Integer rotateLeft and rotateRight as Java does. So we have to implement the equivalent functions using bitwise operations.
