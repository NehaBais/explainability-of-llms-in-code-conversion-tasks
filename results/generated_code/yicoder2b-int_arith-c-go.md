This is how you can convert the given code from C to Go:

```go
package main
import "fmt"
func main() {
    a, _ := strconv.Atoi(readLine()) // reading first number
    b, _ := strconv.Atoi(readLine()) // reading second number
    add := a + b                      // addition of two numbers
    sub := a - b                     // subtraction of two numbers
    mul := a * b                     // multiplication of two numbers
    div := a / b                     // division of two numbers (truncates towards zero)
    mod := a % b                     // finding remainder of two numbers (same sign as first operand)
    fmt.Printf("a+b = %d\n", add)      // printing the sum
    fmt.Printf("a-b = %d\n", sub)      // printing the difference 
    fmt.Printf("a*b = %d\n", mul)      // printing the product 
    fmt.Printf("a/b = %d\n", div)      // printing quotient (truncates towards zero)
    fmt.Printf("a%%b = %d\n", mod)     // finding remainder of two numbers (same sign as second operand if they are different)
}
```
This code reads the inputs from standard input using `readLine()` and converts them to integers using `strconv.Atoi`, then performs all operations and prints the results to the console. This assumes that the user provides valid input and the program is being run with two numbers as arguments.
