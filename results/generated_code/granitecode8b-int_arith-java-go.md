Here's the equivalent code in Golang:
```
package main
import (
 "fmt"
)
func main() {
 var a, b int
 fmt.Println("Enter two integers:")
 fmt.Scan(&a, &b)
 sum := a + b
 difference := a - b
 product := a * b
 quotient := a / b
 remainder := a % b
 fmt.Printf("a + b = %dn", sum)
 fmt.Printf("a - b = %dn", difference)
 fmt.Printf("a * b = %dn", product)
 fmt.Printf("quotient of a / b = %dn", quotient) // rounds towards 0
 fmt.Printf("remainder of a / b = %dn", remainder) // same sign as first operand
}
```
Note that the Golang code uses `fmt.Scan` to read integers from the user, and `fmt.Printf` to print the results. The behavior of integer division and modulus is similar to Java, but there are some differences in how decimal numbers are handled. In this case, the quotient rounds towards 0 (i.e., it removes any fractional part), and the remainder has the same sign as the first operand if they have different signs.

