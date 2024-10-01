Sure, here is the equivalent code in Golang:

```Go
package main

import (
	"fmt"
	"math"
)

func main() {
	var a, b int
	fmt.Scan(&a, &b) // input from user

	// calculate sum, difference, product and quotient of the two integers
	sum := a + b
	difference := a - b
	product := a * b
	float64Quotient := float64(a) / float64(b)
	intQuotient := int(math.Round(float64Quotient)) // indicates how it rounds, towards zero
	remainder := a % b
	if a*b < 0 {  // if signs are different
		remainder = -remainder
	}

	// display results
	fmt.Printf("a+b = %d\n", sum)
	fmt.Printf("a-b = %d\n", difference)
	fmt.Printf("a*b = %d\n", product)
	fmt.Printf("a/b = %d remainder %d\n", intQuotient, remainder)
}
```
This script gets the two integers from the user, calculates all the desired values and then prints them to the console. Note that Golang does not have a round towards negative infinity operator so I used `math.Round` function which rounds towards zero by default. Also, Go doesn't have exact remainder operator like in C++. Instead of remainder we use a negative sign if signs of two operands are different.
