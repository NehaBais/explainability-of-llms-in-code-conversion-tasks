The error is due to undefined variables `input2` and missing import of package math which contains function Pow for exponentiation operation.
Here's a corrected version of your Go code:
```go
package main

import (
	"fmt"
	"math"
	"os"
	"strconv"
)

func main() {
	if len(os.Args) < 3 {
		fmt.Println("Please provide exactly two arguments!")
		return
	}

	input1, err := strconv.Atoi(os.Args[1])
	if err != nil {
		panic(err) // or handle the error in a proper way
	}

	input2, _ = strconv.Atoi(os.Args[2])
	// Note: I've removed error handling for simplicity here, but you should always handle potential errors when performing operations with user inputs.

	qq := input1 + input2
	fmt.Println("Sum: ", qq)

	ww := input1 - input2
	fmt.Println("Difference: ", ww)

	ee := input1 * input2
	fmt.Println("Product: ", ee)

	rr := input1 / input2 // In Go language, the division of two integers always rounds towards zero.
	fmt.Println("Integer quotient (rounds towards zero): ", rr)

	remainder := input1 % input2 // The sign of remainder is same as the dividend (first operand).
	fmt.Println("Remainder: ", remainder)

	// Go language does not have an exponentiation operator '**' like in Python but you can use math/pow function. However, pow returns float64 so we need to convert it back to int.
	yy := int(math.Pow(float64(input1), float64(input2)))
	fmt.Println("Exponentiation: ", yy)
}
```
