package main

import (
	"fmt"
)

func main() {
	var input1, input2 int
	fmt.Println("Enter two integers:")
	fmt.Scan(&input1, &input2)
	sum := input1 + input2
	fmt.Printf("Sum: %dnn", sum)
	difference := input1 - input2
	fmt.Printf("Difference: %dnn", difference)
	product := input1 * input2
	fmt.Printf("Product: %dnn", product)
	quotient := float64(input1) / float64(input2) // integer division returns a float
	fmt.Printf("Integer quotient: %.0fnn", quotient)
	fmt.Printf("Float quotient: %.2fnn", quotient)
	wholeRemainder := input1 % input2
	fmt.Printf("Whole Remainder: %.0fnn", wholeRemainder)
	actualRemainder := float64(input1%input2) / float64(input2)
	fmt.Printf("Actual Remainder: %.2fnn", actualRemainder)
	exponentiation := int(math.Pow(float64(input1), float64(input2)))
	fmt.Printf("Exponentiation: %dnn", exponentiation)
}
