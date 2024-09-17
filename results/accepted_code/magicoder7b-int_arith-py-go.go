package main

import (
	"fmt"
	"math"
)

func main() {
	var input1 int
	var input2 int

	// For testing purposes, hardcode inputs instead of getting from user
	input1 = 18
	input2 = 7

	qq := input1 + input2
	fmt.Printf("Sum: %d\n", qq)
	ww := input1 - input2
	fmt.Printf("Difference: %d\n", ww)
	ee := input1 * input2
	fmt.Printf("Product: %d\n", ee)
	rr := input1 / input2
	fmt.Printf("Integer quotient: %d\n", int(rr))
	floatRr := float64(input1) / float64(input2)
	fmt.Printf("Float quotient: %.2f\n", floatRr)

	// integer division
	tt, _ := math.DivInt(input1, input2)
	uu := (int(tt) - tt) * -10 // to get negative remainder
	fmt.Printf("Whole Remainder: %d\n", int(uu))
	fmt.Printf("Actual Remainder: %.2f\n", uu)

	// exponentiation equivalent in Go using math package
	yy := math.Pow(float64(input1), float64(input2))
	fmt.Printf("Exponentiation: %.2f\n", yy)
}
