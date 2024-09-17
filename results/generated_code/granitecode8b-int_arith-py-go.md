Here's the Golang code that meets the requirements you've specified:
```go
package main
import (
 "fmt"
)
func main() {
 var input1, input2 int
 fmt.Println("Enter two integers:")
 fmt.Scan(&input1, &input2)
 sum := input1 + input2
 fmt.Printf("Sum: %dnn", sum)
 difference := input1 - input2
 fmt.Printf("Difference: %dnn", difference)
 product := input1 * input2
 fmt.Printf("Product: %dnn", product)
 quotient := float64(input1) / float64(input2) // integer division returns a float
 fmt.Printf("Integer quotient: %.0fnn", quotient)
 fmt.Printf("Float quotient: %.2fnn", quotient)
 wholeRemainder := input1 % input2
 fmt.Printf("Whole Remainder: %.0fnn", wholeRemainder)
 actualRemainder := float64(input1%input2) / float64(input2)
 fmt.Printf("Actual Remainder: %.2fnn", actualRemainder)
 exponentiation := int(math.Pow(float64(input1), float64(input2)))
 fmt.Printf("Exponentiation: %dnn", exponentiation)
}
```
Note that I've used `fmt.Scan` to read the inputs, and I've used `%.0f`, `%.2f`, and `%.0f` formatting specifiers to format the output for integer quotient, float quotient, and whole remainder. 
Also note that I've used `int(math.Pow(float64(input1), float64(input2)))` to calculate exponentiation instead of using the `**` operator, which is not available in Golang. 
Finally, I've added a few newlines between each print statement to improve readability.

