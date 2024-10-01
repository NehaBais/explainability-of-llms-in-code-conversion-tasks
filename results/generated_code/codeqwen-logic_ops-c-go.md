Here's how you can convert the given C code to Go:

```go
package main

import "fmt"

func print_logic(A int, b int) {
	fmt.Printf("A and b is %t\n", A&b == 1) // bitwise AND operation in Go
	fmt.Printf("A or b is %t\n", A|b != 0)  // bitwise OR operation in Go
	fmt.Printf("not a is %t\n", A == 0)      // bitwise NOT operation in Go
}

func main() {
	print_logic(2, 3) // call the function with test data
}
```
Note that this code uses the "==" operator to check if `A & b` or `A | b` are equal to one and not equal to zero. These values correspond to logical TRUE (1) and FALSE (0), respectively in C. The bitwise operations in Go use different symbols: AND (&) for `A && B`, OR (|) for `A || B` and NOT (!) for `!A`.
