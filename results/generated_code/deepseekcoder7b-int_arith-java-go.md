Below is the equivalent Go code for your Java program:

```Go
package main

import (
	"fmt"
)

func main() {
	// Get two integers from user input
	var a, b int
	fmt.Println("Enter two integer numbers")
	fmt.Scan(&a, &b)
	
	sum := a + b  // The result of adding 'a' and 'b'
	difference := a - b  // The result of subtracting 'b' from 'a'
	product := a * b  // The result of multiplying 'a' and 'b'
	// Go does not have direct equivalent to Java's integer division that rounds towards zero. 
        // To emulate this behavior, we can use a type conversion on the operands: int(float64(a)/float64(b))
	quotient := int(float64(a) / float64(b))   // The result of dividing 'a' by 'b' (rounds towards zero)
	remainder := a % b  // The remainder of dividing 'a' by 'b'
	exponentiation := int(math.Pow(float64(a), float64(b)))   // the result of raising 'a' to the power 'b'. Note: this will not handle if a negative number is raised to a fractional power or zero.

	fmt.Println("a + b =", sum)
        fmt.Println("a - b =", difference)
        fmt<｜begin▁of▁sentence｜>Println("a * b =", product)
	fmt.Println("quotient of a / b (rounded towards zero) =", quotient)   // truncates towards 0
        fmt.Println("remainder of a / b has the same sign as first operand =", remainder)    // same sign as first operand
	fmt.Println("a ^ b =", exponentiation)  // handles positive and negative integers, zero and fractional powers
}
```

