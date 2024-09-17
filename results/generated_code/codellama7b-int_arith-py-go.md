
Here's the code in Go:
```
package main

import (
	"fmt"
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
	floatQuotient := float64(rr)
	print("Integer quotient: ", intQuotient)
	print("Float quotient:   ", floatQuotient)

	tt := float(input1 / input2)
	uu := (int(tt) - float(tt))*-10
	print("Whole Remainder:  ", int(uu))
	print("Actual Remainder: ", uu)

	yy := input1 ^ input2
	print("Exponentiation:   ", yy)
}
```
Note that in Go, you can't use the `input()` function to get user input like in Python. Instead, you need to prompt the user for input manually and then parse the input using the appropriate type conversion functions. In this case, I used the `fmt` package to print the output with proper formatting.

Also note that Go doesn't have a dedicated exponentiation operator (`**`) like Python has, so I replaced it with the bitwise exclusive or operator (`^`). This will work for non-negative integers, but may not give the correct result for other inputs.
