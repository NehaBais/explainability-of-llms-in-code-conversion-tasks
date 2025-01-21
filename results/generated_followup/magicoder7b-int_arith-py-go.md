 The error occurs because `math.DivInt` is not available in some Go versions, it was added in later versions of Go (for example Go 1.17). If you are using an older version of Go this function will be undefined and the compiler won't recognize it, which results in the compile-time error.

To fix this issue, either upgrade to a newer version of Go that supports `math.DivInt`, or use alternative methods for getting quotient and remainder if your version doesn't support this method. One common way is to convert both operands to float64 before performing division operation and then convert the result back to int.

However, this doesn't give exact results as `math.DivInt`, especially for large numbers or for fractional values in input1 and input2 which you want to convert to whole number quotient and remainder respectively. 

For the code after fixing this issue:

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
	floatRr := float64(input1) / float64(input2)
	fmt.Printf("Float quotient: %.2f\n", floatRr)

	// integer division with float64 conversion
	tt := float64(input1) / float64(input2)
	uu := (int(tt) - tt) * -10 // to get negative remainder
	fmt.Printf("Whole Remainder: %d\n", int(uu))
	fmt.Printf("Actual Remainder: %.2f\n", uu)

	// exponentiation equivalent in Go using math package, convert to float64 first
	yy := math.Pow(float64(input1), float64(input2))
	fmt.Printf("Exponentiation: %.2f\n", yy)
}
```

In the code above, I have fixed the error by using `math.Pow` for exponentiation and a workaround to get quotient and remainder without `math.DivInt`.
