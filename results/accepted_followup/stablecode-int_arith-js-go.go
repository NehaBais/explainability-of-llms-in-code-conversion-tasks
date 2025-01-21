package main

import (
		"fmt"
)

func main() {
		// Get two integers from the user.
		var a int = 5 // Insert your desired input value for 'a'
						var b int = 3 // Insert your desired input value for 'b'

						// Calculate the results.
						sum := a + b
						difference := a - b
						product := a * b
						divisionResult := a / b // This performs integer division
						remainder := a % b // This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator

						// Display the results.
						fmt.Printf("a + b = %d\n", sum))
						fmt.Printf("a - b = %d\n", difference))
						fmt.Printf("a * b = %d\n", product))
						fmt.Printf("a / b = %d\n", divisionResult))
						fmt.Printf("a %% b = %d\n", remainder))
}