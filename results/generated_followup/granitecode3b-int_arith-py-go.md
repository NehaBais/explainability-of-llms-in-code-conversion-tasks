The error in the provided Python code is that it uses the `math` module to calculate the exponentiation, which is not available in Go. The fix for this is to use the built-in `Pow()` function from the `math` package, which can handle floating-point exponents without the need for an external library.
Here's the corrected code:
```go
package main
import (
 "fmt"
 "math"
)
func main() {
 var input1 int
 fmt.Print("Enter first integer: ")
 fmt.Scan(&input1)
 var input2 int
 fmt.Print("Enter second integer: ")
 fmt.Scan(&input2)
 sum := input1 + input2
 diff := input1 - input2
 product := input1 * input2
 quotient := float64(input1) / float64(input2)
 remainder := input1 % input2
 exponentiation := int(math.Pow(float64(input1), float64(input2)))
 fmt.Printf("Sum: 		  %dn", sum)
 fmt.Printf("Difference: 	  %dn", diff)
 fmt.Printf("Product: 	  %dn", product)
 fmt.Printf("Integer quotient: %vn", int(quotient))
 fmt.Printf("Float quotient:   %.1f%sn", quotient, " ")
 if remainder < 0 {
 fmt.Println("Whole Remainder:  -")
 } else {
 fmt.Println("Whole Remainder:  +")
 }
 fmt.Printf("Actual Remainder: %vn", remainder)
 fmt.Printf("Exponentiation:   %dn", exponentiation)
}
```
The error in the Python code was due to using an external library (`math`) to calculate the exponentiation, which is not available in Go. The fix for this was to use the built-in `Pow()` function from the `math` package instead, which can handle floating-point exponents without the need for an external library.

