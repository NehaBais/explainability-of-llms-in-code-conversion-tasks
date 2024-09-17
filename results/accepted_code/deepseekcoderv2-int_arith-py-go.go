package main

import (
	"fmt"
	"math"
)

func convertPythonToGolangCode() {
	var input1, input2 int
	fmt.Println("Enter two integers:")
	fmt.Scan(&input1, &input2)

	qq := input1 + input2
	fmt.Printf("Sum: 			%d\n", qq)
	ww := input1 - input2
	fmt.Printf("Difference: 		%d\n", ww)
	ee := input1 * input2
	fmt.Printf("Product: 		%d\n", ee)
	rr := float64(input1 / input2)
	fmt.Printf("Integer quotient: 	%d\nFloat quotient:  		%f\n", int(rr), rr)
	var uu float64 = math.Mod(float64(input1/input2), float64(input1))
	uu *= -10
	fmt.Printf("Whole Remainder: 	%d\nActual Remainder: %f\n", int(math.Floor(math.Abs(float64(rr)))), uu)
	yy := math.Pow(float64(input1), float64(input2))
	fmt.Printf("Exponentiation: 	%f\n", yy)
}
