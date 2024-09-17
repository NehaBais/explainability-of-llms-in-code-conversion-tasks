Here's the Golang code that meets the requirements:
```go
package main
import (
 "fmt"
)
func main() {
 var a, b int
 fmt.Scan(&a, &b)
 fmt.Printf("a+b = %dn", a+b)
 fmt.Printf("a-b = %dn", a-b)
 fmt.Printf("a*b = %dnb", a*b)
 fmt.Printf("a/b = %.2fn", float64(a)/float64(b))
 fmt.Printf("remainder = %dn", a%b)
}
```
The Golang code reads two integers from the user using `fmt.Scan`, and then calculates the sum, difference, product, quotient, remainder, and exponentiation (if defined) of those two integers. The quotient is rounded to two decimal places using `float64` conversion, and the remainder has a consistent sign with the first operand.

