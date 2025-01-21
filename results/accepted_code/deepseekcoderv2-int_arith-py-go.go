package main

import (
	"fmt"
)

func main() {
	var input1, input2 int
	fmt.Print("Enter first integer: ")
	fmt.Scan(&input1)
	fmt.Print("Enter second integer: ")
	fmt.Scan(&input2)

	sum := input1 + input2
	fmt.Println("Sum: ", sum)

	difference := input1 - input2
	fmt.Println("Difference: ", difference)

	product := input1 * input2
	fmt.Println("Product: ", product)

	// Go does not have a built-in function to get the integer quotient directly, so we use division and type casting.
	floatQuotient := float64(input1) / float64(input2)
	intQuotient := int(floatQuotient) // This will round towards zero for positive numbers.
	fmt.Println("Integer quotient: ", intQuotient)
	fmt.Println("Float quotient: ", floatQuotient)

	// For remainder, Go's % operator follows the sign of the first operand if they are different.
	wholeRemainder := input1 / input2
	actualRemainder := input1 % input2
	fmt.Println("Whole Remainder: ", wholeRemainder)
	fmt.Println("Actual Remainder: ", actualRemainder)

	// Exponentiation is not directly supported in Go, but you can use math.Pow if needed.
	exponentiation := 1.0
	for i := 0; i < input2; i++ {
		exponentiation *= float64(input1)
	}
	fmt.Println("Exponentiation: ", exponentiation)
}
