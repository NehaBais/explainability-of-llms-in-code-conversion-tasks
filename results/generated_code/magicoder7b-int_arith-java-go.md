 In Go, the code would look like this:

```go
package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	// Get the 2 numbers from command line arguments
    a, _ := strconv.Atoi(os.Args[1])
	b, _ := strconv.Atoi(os.Args[2])

	sum := a + b       // The result of adding 'a' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
	difference := a - b // The result of subtracting 'b' from 'a'
	product := a * b    // The result of multiplying 'a' and 'b'
	division := a / b   // The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional result)
	remainder := a % b  // The remainder of dividing 'a' by 'b'

	fmt.Printf("a + b = %d\n", sum)
	fmt.Printf("a - b = %d\n", difference)
	fmt.Printf("a * b = %d\n", product)
	fmt.Printf("quotient of a / b = %.0f\n", division)   // truncates towards 0
	fmt.Printf("remainder of a / b = %d\n", remainder)   // same sign as first operand
}
```
This code takes two arguments (the integers 'a' and 'b') from the command line, converts them to integers with strconv.Atoi(), then performs the arithmetic operations on them as specified in your Java code. The results are then printed out with fmt.Printf(). Note that Go's division truncates towards zero, while modulus returns the remainder of the division operation and has the same sign as either the first or second operand (not necessarily both).
