This is how the equivalent code in Golang would look like:

```go
package main

import (
	"fmt"
	"math"
)

func main() {
	// Get the 2 numbers from command line arguments
	var a int = getInput("Enter first number: ")
	var b int = getInput("Enter second number: ")

	sum := a + b                  // The result of adding 'a' and 'b'
	difference := a - b            // The result of subtracting 'b' from 'a'
	product := a * b               // The result of multiplying 'a' and 'b'
	quotient := int(float64(a)/float64(b))  // The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional part)
	remainder := a % b            // The remainder of dividing 'a' by 'b'

	fmt.Printf("a + b = %d\n", sum)    // String formatting is used for output
	fmt.Printf("a - b = %d\n", difference)  
	fmt.Printf("a * b = %d\n", product) 
	fmt.Printf("quotient of a / b = %d\n", quotient) // Truncates towards zero
	if remainder > 0 {                   // If the sign of 'remainder' and first operand are different
		fmt.Println("remainder of a / b = positive")
	} else if remainder < 0 {          // If the sign of 'remainder' and second operand are different
		fmt.Println("remainder of a / b = negative") 
	} else {                             // If both signs match or one is positive zero
		fmt.Println("remainder of a / b = same sign as first operand") 
	}
}

func getInput(prompt string) int {
	var inp int
	for {
		fmt.Scanf("%d\n", &inp) // Scan input from stdin
		if inp > 0 {           // Return the input if it is valid
			return inp
		} else {               // Print error message and ask for input again
			fmt.Println(prompt)
		}
	}
}
```

In Golang, there's no direct equivalent of Java's command line inputs or modulus operator (%). Therefore, we had to create helper functions getInput() and compare the signs of the remainder and one of the operands to simulate the behavior of the modulus operation in the original code snippet.
