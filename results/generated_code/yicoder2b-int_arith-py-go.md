Sure, here is the equivalent code in Golang. This task involves working with user inputs and some mathematical operations such as addition, subtraction, multiplication, division, exponentiation, and rounding. Error handling isn't included for simplicity. 

```go
package main
import (
	"fmt"
)
func main() {
	var input1, input2 float64
	fmt.Scan( &input1 )
	fmt.Scan( &input2 )

	sum := input1 + input2
	difference := input1 - input2
	product := input1 * input2
	quotient := input1 / input2
	remainder := input1 % input2
	exponentiation := pow(input1, input2)

	fmt.Printf("Sum: 		%v\n", sum )
	fmt.Printf("Difference: %v\n", difference )
	fmt.Printf("Product: 	%v\n", product )
	fmt.Printf("Integer quotient: %v\n", int(quotient))
	fmt.Printf("Float quotient: %v\n", float64(int(quotient)))
	fmt.Printf("Whole Remainder: %v\n", remainder )
	if remainder > 0 {
		remainder = -1 * (remainder - int(remainder)) * 10
	} else if remainder < 0{
		remainder = (-1)*(int(-remainder) - int(float64(remainder)))*10
	}
	fmt.Printf("Actual Remainder: %v\n", remainder )
	fmt.Printf("Exponentiation: %v\n", exponentiation )
}
func pow(x float64, n int) float64 {
	var result float64 = 1
	for i := 0; i < n; i++ {
		result *= x
	}
	return result
}
```
This script gets two user inputs and performs the asked operations. It handles both integer and floating point division, as well as finding the remainder of division.
