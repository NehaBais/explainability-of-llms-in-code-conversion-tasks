Below is the Go version of your Python code:

```go
package main

import (
	"fmt"
	"math"
)

func main() {
	var input1, input2 int
	fmt.Scanf("%d", &input1)
	fmt.Scanf("%d", &input2)

	qq := input1 + input2
	fmt.Println("Sum: ", qq)

	ww := input1 - input2
	fmt.Println("Difference: ", ww)

	ee := input1 * input2
	fmt.Println("Product: ", ee)

	rr := input1 / input2
	fmt.Println("Integer quotient (towards zero): ", rr)
	
	floatQuotient := float64(input1) / float64(input2)
	fmt.Println("Float quotient: ", floatQuotient)

	wholeRemainder := math.Mod(float64(input1), float64(input2))
	actualRemainder := input1 % input2
	fmt.Printf("Whole Remainder (always positive): %.0f\n", wholeRemainder)
	fmt.Println("Actual Remainder: ", actualRemainder)

	yy := int(math.Pow(float64(input1), float64(input2)))
	fmt.Println("Exponentiation: ", yy)
}
```
Please note that Go doesn't have operator for exponentiation, so we use the Pow function from the math package. The whole remainder is always positive in Go as it does not follow the sign rules like Python.
