 Below is the equivalent Go code for your provided C code. However, remember that Go does not support command line arguments in the way you can do in C with argc and argv. So instead of using command line arguments we are going to use variables to get our input from the user directly in this case:

```go
package main

import (
	"fmt"
	"os"
	"strconv"
	"math"
)

func main() {
	var a, b int

	// Get two integers from user
	fmt.Print("Enter first integer: ")
	_, err := fmt.Scan(&a)
	if err != nil {
		fmt.Println(err)
		os.Exit(1)
	}

	fmt.Print("Enter second integer: ")
	_, err = fmt.Scan(&b)
	if err != nil {
		fmt.Println(err)
		os.Exit(1)
	}

	// If b is 0, print an error message and exit the program
	if b == 0 {
		fmt.Println("Error: Division by zero")
		os.Exit(2)
	}

	// Display their: sum, difference, product, integer quotient, remainder
	sum := a + b
	difference := a - b
	product := a * b
	quotient := float64(a) / float64(b) // truncates towards zero (in Go 1.8 and onwards)
	remainder := math.Mod(float64(a), float64(b)) // same sign as first operand (in Go 1.8 and onwards)

	fmt.Printf("Sum: %d\n", sum)
	fmt.Printf("Difference: %d\n", difference)
	fmt.Printf("Product: %d\n", product)
	fmt.Printf("Quotient: %.2f\n", quotient)
	fmt.Printf("Remainder: %.2f\n", remainder)
}
```
Keep in mind, when you run this program it will prompt for two integer inputs from the user and then print out their various mathematical operations based on what was inputted.
