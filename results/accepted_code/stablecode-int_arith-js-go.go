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