 Here is the equivalent Go code for your Python script. 

However, please note that in Go language we don't have implicit type conversion as Python does for different types of variables. We need to explicitly convert them from one type to another while performing operations or storing values. Also there isn't a native way to get input from user like `input()` function in Python but we can use `fmt.Scanf` for this purpose, also the exponentiation operator `**` doesn't exist in Go, instead you could use the math package's `Pow` method:

```go
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
	floatRr := float64(input1)/float64(input2)
	fmt.Printf("Float quotient: %.2f\n", floatRr)
	
	// integer division
	tt, _ := math.DivInt(input1, input2)
	uu := (int(tt) - tt)*-10  // to get negative remainder
	fmt.Printf("Whole Remainder: %d\n", int(uu))
	fmt.Printf("Actual Remainder: %.2f\n", uu)

	// exponentiation equivalent in Go using math package
	yy := math.Pow(float64(input1), float64(input2))
	fmt.Printf("Exponentiation: %.2f\n", yy)
}
```

Please note that the `math.DivInt` function is used for integer division which returns both quotient and remainder, then it subtracts the quotient from the total to get the negative remainder.
