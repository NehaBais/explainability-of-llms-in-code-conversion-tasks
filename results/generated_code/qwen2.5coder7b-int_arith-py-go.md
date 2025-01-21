Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func main() {
	var input1, input2 int
	fmt.Print("Enter first number: ")
	fmt.Scan(&input1)
	fmt.Print("Enter second number: ")
	fmt.Scan(&input2)

	qq := input1 + input2
	fmt.Println("Sum:", qq)
	
	ww := input1 - input2
	fmt.Println("Difference:", ww)
	
	ee := input1 * input2
	fmt.Println("Product:", ee)
	
	rr := input1 / int(float64(input2))
	fmt.Println("Integer quotient:", rr)
	
	tt := float64(input1) / float64(input2)
	fmt.Println("Float quotient:", tt)
	
	uu := (int(tt) - int(tt)) * -10
	fmt.Println("Whole Remainder:", uu)
	
	uu = float64(int(tt) - int(tt))
	fmt.Println("Actual Remainder:", uu)

	yy := input1 ^^ input2
	fmt.Println("Exponentiation:", yy)
}
```

The Go language doesn't support exponentiation operator(^^) like Python, so `input1 ^^ input2` is used to calculate the remainder of the division. The `int()` function is used to convert float64 to int for integer quotient and to get the whole remainder. For calculating actual remainder, we subtract the fractional part from the integer part and multiply it by -10.

Please note that Go doesn't support rounding towards negative infinity or zero in integer division. If you want to do this, you would need to add additional logic. Also, for inputting and printing strings, the `fmt` package is used which provides functionality similar to Python's print function.
