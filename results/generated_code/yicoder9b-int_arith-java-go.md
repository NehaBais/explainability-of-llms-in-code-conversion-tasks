Below is the equivalent Golang code for your Java program:

```go
package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Scan(&a, &b)

	sum := a + b             // The result of adding 'a' and 'b'
	difference := a - b     // The result of subtracting 'b' from 'a'
	product := a * b         // The result of multiplying 'a' and 'b'
	quotient := a / b        // The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional result)
	remainder := a % b       // The remainder of dividing 'a' by 'b'

	fmt.Println("a + b = ", sum)        
	fmt.Println("a - b = ", difference) 
	fmt.Println("a * b = ", product)    
	fmt.Println("quotient of a / b = ", quotient) // truncates towards 0
	fmt.Println("remainder of a / b = ", remainder) // same sign as first operand
}
```
In this Go code:
- `var a, b int` declares two integer variables 'a' and 'b'.
- `fmt.Scan(&a, &b)` gets the value of 'a' and 'b' from standard input.
- The rest is an equivalent operations to your original Java program. It calculates sum, difference, product, quotient (integer division), and remainder just like in your Java code.
- The `Println` statements print the result on the terminal/console just like the `System.out.println` statement in your Java code.
