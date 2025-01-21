The error `undefined: strconv` is due to an unresolved symbol that appears to be from another language or environment, which was not expected in the context of Go language. The error `undefined: readLine` is also a similar issue, it may refer to some other function/method defined elsewhere.

As for the fix, you need to ensure that these symbols are properly imported into your Golang program. For instance, if they were previously included in C code, they should be converted from their C equivalent to Go equivalents or removed entirely when converting to Go.

The corrected Go code would look like:
```go
package main

import "fmt"

func main() {
	a, _ := strconv.Atoi("<number1>") // replace '<number1>' with user input or read from standard input
	b, _ := strconv.Atoi("<number2>") // replace '<number2>' with user input or read from standard input
	add := a + b                       // addition of two numbers
	sub := a - b                       // subtraction of two numbers
	mul := a * b                       // multiplication of two numbers
	div := a / b                       // division of two numbers (truncates towards zero)
	mod := a % b                       // finding remainder of two numbers (same sign as first operand)
	fmt.Printf("a+b = %d\n", add)      // printing the sum
	fmt.Printf("a-b = %d\n", sub)      // printing the difference
	fmt.Printf("a*b = %d\n", mul)      // printing the product
	fmt.Printf("a/b = %d\n", div)      // printing quotient (truncates towards zero)
	fmt.Printf("a%%b = %d\n", mod)     // finding remainder of two numbers (same sign as second operand if they are different)
}
```
Where "<number1>" and "<number2>" should be replaced by actual user input or read from standard input.
This assumes that the user provides valid inputs and that the program is being run with correct arguments, please check and modify accordingly if there are any other issues present.
