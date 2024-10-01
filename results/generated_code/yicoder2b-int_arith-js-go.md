Sure, here is the equivalent code in Golang:

```Go
package main

import (
	"fmt"
	"math"
	"strconv"
)

func main() {
	a, err := strconv.Atoi(os.Args[2])
	if err != nil {
		panic(err) // handle error
	}
	b, err := strconv.Atoi(os.Args[3])
	if err != nil {
		panic(err) // handle error
	}

	sum := a + b
	difference := a - b
	product := a * b
	division := float64(a) / float64(b)
	remainder := a % b
	exponentiation := math.Pow(float64(a), float64(b)) // note: math.Pow returns the power of 'base' raised to 'exp'

	fmt.Printf("The sum of %d and %d is %d\n", a, b, sum)
	fmt.Printf("The difference between %d and %d is %d\n", a, b, difference)
	fmt.Printf("The product of %d and %d is %d\n", a, b, product)
	fmt.Printf("The quotient of %d divided by %d is %.0f (towards zero)\n", a, b, division) // note: the print format string uses the .0 modifier to truncate towards zero
	fmt.Printf("The remainder when %d is divided by %d is %d\n", a, b, remainder)
	if remainder*sign(b) == sign(a)*remainder {
		fmt.Println("The signs of the first and second operand are the same; therefore, their results do not match.")
	} else {
		fmt.Println("The signs of the first and second operand differ; therefore, their results match.")
	}
	fmt.Printf("The power of %d raised to the power of %d is %.0f\n", a, b, exponentiation)
}
```
This Go code is equivalent to your JavaScript code. It uses the built-in `strconv` functions to convert strings to integers and uses the `math` package for calculating powers and logarithm operations.
