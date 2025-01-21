The error occurs because Go does not have a direct equivalent to Java's integer division that rounds towards zero, it also lacks a 'math' package for handling operations like exponentiation. 

The fix is to use type conversion on the operands to convert them into float64 first (which can be used with math.Pow), and then back into int which gives us integer division rounding towards zero behavior. Also, import of "fmt" package and its usage are corrected in this Go code:

```go
package main

import  (
	"fmt"
)

func main() {
	var a, b int
	fmt.Println("Enter two integer numbers")
	fmt.Scan(&a, &b)
	
	sum := a + b   
	difference := a - b  
	product := a * b  
	// To emulate this behavior, we can use type conversion on the operands
	quotient := int(float64(a) / float64(b))    
	remainder := a % b   

	fmt.Println("a + b =", sum)
        fmt.Println("a - b =", difference)
        fmt.Println("a * b =", product)
	fmt.Println("quotient of a / b (rounded towards zero) =", quotient)    
        fmt.Println("remainder of a / b has the same sign as first operand =", remainder) 
}
```

