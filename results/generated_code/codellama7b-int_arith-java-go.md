 Here is the equivalent code in Go:
```
package main
import (
	"fmt"
)
func main() {
	// Get the 2 numbers from command line arguments
	var a, b int
	fmt.Scanf("%d %d", &a, &b)

	sum := a + b // The result of adding 'a' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
	difference := a - b // The result of subtracting 'b' from 'a'
	product := a * b // The result of multiplying 'a' and 'b'
	division := int(float64(a) / float64(b)) // The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional result)
	remainder := a % b // The remainder of dividing 'a' by 'b'

	fmt.Println("a + b = ", sum)
	fmt.Println("a - b = ", difference)
	fmt.Println("a * b = ", product)
	fmt.Println("quotient of a / b = ", division)   // truncates towards 0
	fmt.Println("remainder of a / b = ", remainder)   // same sign as first operand
}
```
Note that in Go, the `fmt` package is used for input and output operations, and the `%d %d` format specifier is used to scan and print integers respectively. The `float64()` function is used to convert an integer to a floating-point number before dividing it with another integer.
