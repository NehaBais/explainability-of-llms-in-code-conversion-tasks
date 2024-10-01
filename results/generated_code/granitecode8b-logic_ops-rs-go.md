Here's the equivalent code in Golang:
```go
package main
import "fmt"
func main() {
 fmt.Println(booleanOps(true, true))
 fmt.Println(booleanOps(true, false))
 fmt.Println(booleanOps(false, true))
 fmt.Println(booleanOps(false, false))
}
func booleanOps(a bool, b bool) string {
 return fmt.Sprintf("%t and %t -> %t%n%t or %t -> %t%n%t xor %t -> %t%nnot %t -> %t", a, b, a && b, a, b, a || b, a, b, a ^ b, a, !a)
}
``` 
The `fmt.Println` function is used to print the output of the `booleanOps` function for each combination of input values. The `booleanOps` function takes two logical values as input and returns a formatted string containing the results of "and", "or", "xor", and "not" operations on those values.

