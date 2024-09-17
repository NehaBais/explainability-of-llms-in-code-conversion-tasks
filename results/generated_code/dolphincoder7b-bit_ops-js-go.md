The equivalent code in Golang is as follows:
```
package main
import "fmt"
func main() {
    a, b := 1024, 512
    fmt.Printf("a AND b: %d\n", a&b)       // Bitwise AND 
    fmt.Printf("a OR b: %d\n", a|b)        // Bitwise OR
    fmt.Printf("a XOR b: %d\n", a^b)        // Bitwise XOR
    fmt.Printf("NOT a: %d\n", ^a)            // Bitwise NOT
    fmt.Printf("a  << b: %d\n", a<<uint(b))  // Left shift 
    fmt.Printf("a >> b: %d\n", a>>uint(b))  // Arithmetic right shift 
    fmt.Printf("a >>> b: %d\n", a>>uint(b))   // Logical right shift
}
```
In this case, the equivalent Golang operators for bitwise AND (&), OR (|), XOR (^), NOT (~), left shift (<<), arithmetic right shift (>>), and logical right shift (>>) are the same as their corresponding JavaScript operators. The only difference is in the type of the second operand for the left shift operator. In JavaScript, the left shift operator has a more permissive type conversion rule that can convert other types into integers, whereas Golang restricts this to just unsigned integers. Therefore, we need to explicitly cast the second argument as an unsigned integer using the uint function in Golang.
