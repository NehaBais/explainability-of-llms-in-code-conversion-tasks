package main

import (
	"fmt"
)

func main() {
	var input1, input2 int
	fmt.Print("Enter first number: ")
	fmt.Scan(&input1)
	fmt.Print("Enter second number: ")
	fmt.Scan(&input2)

	qq := input1 + input2
	fmt.Println("Sum:", qq)

	ww := input1 - input2
	fmt.Println("Difference:", ww)

	ee := input1 * input2
	fmt.Println("Product:", ee)

	rr := input1 / int(float64(input2))
	fmt.Println("Integer quotient:", rr)

	tt := float64(input1) / float64(input2)
	fmt.Println("Float quotient:", tt)

	uu := int(float64(int(tt)-int(tt))) * -10
	fmt.Println("Whole Remainder:", uu)

	uu = int(float64(int(tt) - int(tt)))
	fmt.Println("Actual Remainder:", uu)

	yy := input1 ^ input2
	fmt.Println("Exponentiation:", yy)
}
