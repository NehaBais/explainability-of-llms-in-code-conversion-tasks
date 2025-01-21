package main

import (
	"fmt"
	"math"
)

func main() {
	input1 := 18.0
	input2 := 7.0

	sum := input1 + input2
	difference := input1 - input2
	product := input1 * input2
	quotient := float64(input1) / input2
	integerQuotient := int(quotient)
	floatQuotient := float64(math.Floor(floatQuotient)) // Rounding towards zero
	actualRemainder := input1 % input2

	exponentiation := math.Pow(input1, input2)

	fmt.Printf("Sum: 		  %.2f\n", sum)
	fmt.Printf("Difference: 	  %.2f\n", difference)
	fmt.Printf("Product: 	  %.2f\n", product)
	fmt.Printf("Integer quotient: %.0f\n", integerQuotient)
	fmt.Printf("Float quotient:   %.2f\n", floatQuotient)
	fmt.Printf("Whole Remainder:  %.0f\n", actualRemainder)
	fmt.Printf("Actual Remainder: %.2f\n", actualRemainder) // Ensure it's not rounded by Go
	fmt.Printf("Exponentiation:   %.2f\n", exponentiation)
}
