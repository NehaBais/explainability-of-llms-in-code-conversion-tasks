Sure, here's the equivalent Golang code that meets the requirements you specified:
```
package main
import "fmt"
func main() {
 var a, b int
 fmt.Println("Enter two integers:")
 fmt.Scan(&a, &b)
 if b == 0 {
 fmt.Println("Error: Division by zero")
 return
 }
 sum := a + b
 diff := a - b
 prod := a * b
 quot := a / b // Truncates towards zero (in C99)
 rem := a % b // Remainder has the same sign as the first operand (in C99)
 exp := int(float64(a) / float64(b)) // Exponentiation in Golang is floating-point division
 fmt.Printf("Sum: %d, Difference: %d, Product: %d, Quotient: %d, Remainder: %d, Exponentiation: %d
", sum, diff, prod, quot, rem, exp)
}
```
Note that Golang has different syntax for operators than C, and division is a floating-point operation by default. Also, the `%d` format specifier in `fmt.Printf()` is used to print integers, so we need to explicitly cast `a`, `b`, and other values to integers using type assertions or conversion functions like `int(float64(...))`.

