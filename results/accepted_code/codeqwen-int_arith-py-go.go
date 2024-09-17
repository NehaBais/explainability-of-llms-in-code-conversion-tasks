package main

import (
	"fmt"
)

func main() {
	input1 := 18
	input2 := 7

	qq := input1 + input2
	fmt.Println("Sum: 		  ", qq)

	ww := input1 - input2
	fmt.Println("Difference: 	  ", ww)

	ee := input1 * input2
	fmt.Println("Product: 	  ", ee)

	rr := float64(input1) / float64(input2)
	fmt.Println("Integer quotient: ", int(rr))
	fmt.Println("Float quotient: ", rr)

	tt := float64(input1) / float64(input2)
	uu := (int(tt) - int(rr)) * 10
	// fmt.Println(tt)
	fmt.Println("Whole Remainder:  ", int(uu))
	fmt.Println("Actual Remainder: ", uu)

	yy := float64(input1) / float64(input2)
	fmt.Println("Exponentiation: ", yy)
}
