Here is the equivalent Go code for your Python script. This will take two integer inputs from user, and then print out their sum, difference, product, quotient, remainder, and exponentiation results. Please note that in Go language, we don't have operator to get float part of division so I used strconv package to convert int to float.

```go
package main
  
import (
    "fmt" 
)

func main() {
     var input1, input2 int64 // can handle large numbers using int64
     
	 fmt.Println("Enter first integer:")
	 fmt.Scan(&input1)
	 
	 fmt.Println("Enter second integer:")
	 fmt.Scan(&input2)
    
     sum := input1 + input2
     difference := input1 - input2
     product := input1 * input2
     quotientInt := input1 / input2 // integer division rounding towards zero
     remainder := input1 % input2 // signed remainder, matches sign of dividend
     
     var floatQuotient float64 = float64(input1) / float64(input2) 
   
     fmt.Println("Sum: ", sum)
     fmt.Println("Difference:", difference)
     fmt.Println("Product:", product)
     fmt.Println("Integer quotient (rounded towards zero):", quotientInt)
     fmt.Printf("Float quotient: %0.2f\n", floatQuotient) // limiting to 2 decimal points for more readable output
     fmt.Println("Actual Remainder: ", remainder)
     
     if input2 >= 0 {  
        fmt.Println("Remainder sign matches the first operand")
     } else {
        fmt.Println("Remainder sign matches the second operand (or zero, for unsigned types)") 
     }
     
     exponentiation := input1 ^ input2 // exponentiation operator in Go is '^'
     fmt.Println("Exponentiation: ", exponentiation) 
}
```
Please run this code on https://play.golang.org/ to see the output.

