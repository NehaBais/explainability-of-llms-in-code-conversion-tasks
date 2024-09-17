Sure, here's the code in Golang that performs the same task as the Python code you provided:
```
package main
import "fmt"
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
This code uses the `fmt` package to prompt the user for input and print the results. The `input1` and `input2` variables are declared using `var`, and the values are assigned using `fmt.Scan()`. 
The sum, difference, product, quotient, remainder, and exponentiation of the two integers are calculated using standard arithmetic operators. The `float64()` function is used to convert `input1` and `input2` from integers to floats, which allows for floating-point division and exponentiation calculations.
The `int()` and `float()` functions are used to extract the integer and fractional parts of the quotient, respectively. The `-10` factor is applied to the fractional part to indicate whether it rounds towards zero or negative infinity, based on the context.
Finally, the results are printed using `fmt.Printf()`. The `%d` format specifier is used for integers, and the `%f` format specifier is used for floats.

