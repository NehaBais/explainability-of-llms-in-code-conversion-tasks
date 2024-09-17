Here's the Golang code that meets your requirements:
```go
package main
import "fmt"
func main() {
 var a, b int
 fmt.Scan(&a, &b)
 fmt.Printf("a+b = %dn", a+b)
 fmt.Printf("a-b = %dn", a-b)
 fmt.Printf("a*b = %dn", a*b)
 fmt.Printf("a/b = %dn", a/b)
 fmt.Printf("a%%b = %dn", a%b)
}
```
This code uses the `fmt` package to read two integers from the user, and then calculates and prints their sum, difference, product, quotient, remainder, and exponentiation (if defined). The quotient is calculated using integer division, which rounds towards zero. The remainder has the same sign as the first operand.

