Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"math"
)

func main() {
	var A, b int
	fmt.Println("Enter two integers: ")
	fmt.Scan(&A)
	fmt.Scan(&b)

	sum := A + b           // The result of adding 'A' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
	difference := A - b      // The result of subtracting 'b' from 'A'
	product := A * b         // The result of multiplying 'A' and 'b'
	division := math.Floor(float64(A) / float64(b))  // The result of dividing 'A' by 'b' (Note: 'division' does not contain the fractional result)
	remainder := A % b       // The remainder of dividing 'A' by 'b'

	fmt.Println("A + b =", sum)
	fmt.Println("A - b =", difference)
	fmt.Println("A * b =", product)
	fmt.Println("quotient of a / b =", division)  // truncates towards 0
	fmt.Println("remainder of a / b =", remainder) // same sign as first operand
}
```

In Golang, the division operation is handled differently compared to Java. The `/` operator performs floor division in Golang which results in an integer truncated towards zero. Similarly, Go's modulus operator `%` has the same behavior as Java's modulus operator and returns the remainder of a / b with its sign matching the first operand.
