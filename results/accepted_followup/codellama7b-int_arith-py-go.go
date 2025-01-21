package main

import (
	"fmt"
	"math"
)

func main() {
	input1 := 18
	input2 := 7

	qq := input1 + input2
	print("Sum: ", qq)

	ww := input1 - input2
	print("Difference: ", ww)

	ee := input1 * input2
	print("Product: ", ee)

	rr := input1 / input2
	intQuotient := int(rr)
	floatQuotient := math.Pow(float64(input1), float64(input2))
	print("Integer quotient: ", intQuotient)
	print("Float quotient:   ", floatQuotient)

	tt := float(input1 / input2)
	uu := (int(tt) - float(tt)) * -10
	print("Whole Remainder:  ", int(uu))
	print("Actual Remainder: ", uu)

	yy := math.Pow(float64(input1), float64(input2))
	print("Exponentiation:   ", yy)
}
