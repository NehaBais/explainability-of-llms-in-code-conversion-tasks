The error message indicates that there is a newline character in a string literal, which is not allowed in Go. Additionally, there are two more syntax errors in the code - one at line 6 where a closing parenthesis is expected, and another at line 13 where a closing quote is missing.
To fix these errors, you can simply remove the newlines from the string literals and ensure that the closing parentheses and quotes are included correctly. The corrected code is shown below:
```go
package main
import "fmt"
func main() {
 a := 10
 b := 5
 fmt.Printf("a and b: %d
", a & b)
 fmt.Printf("a or b: %d
", a | b)
 fmt.Printf("a xor b: %d
", a ^ b)
 fmt.Printf("not a: %d
", ^a)
 fmt.Printf("a << n: %d
", a << b) /* left shift */
 fmt.Printf("a >> n: %d
", a >> b) /* on most platforms: arithmetic right shift */
 // convert the signed integer into unsigned, so it will perform logical shift
 c := uint(a)
 fmt.Printf("c >> b: %d
", c >> b) /* logical right shift */
}
``` 
In this code, I have added comments to explain what each line does and removed the newlines from the string literals. The corrected code should now compile without errors.

