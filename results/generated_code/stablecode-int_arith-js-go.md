Here is the equivalent code in Golang:

```Go
package main

import (
	"fmt"
	"strconv"
)

func main() {
	// Get two integers from the user.
	var a string = "5" // Insert your code here to get input for 'a'
	var b string = "3"  // Insert your code here to get input for 'b'

	// Convert strings to integers.
	parsedA, _ := strconv.Atoi(a)
	parsedB, _ := strconv.Atoi(b)

	// Calculate the results.
	sum := parsedA + parsedB
	difference := parsedA - parsedB
	product := parsedA * parsedB
	divisionResult := parsedA / parsedB // This performs integer division
	remainder := parsedA % parsedB  // This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator

	// Display the results.
	fmt.Printf("a + b = %d\n", sum)
	fmt.Printf("a - b = %d\n", difference))
	fmt.Printf("a * b = %d\n", product))
	fmt.Printf("a / b = %d\n", divisionResult))
	fmt.Printf("a %% b = %d\n", remainder))
}
```
Please note that error handling is not included in this code snippet due to the requirement not to include it. Additionally, please replace "5" and "3" with your desired input values for variables 'a' and 'b'.
