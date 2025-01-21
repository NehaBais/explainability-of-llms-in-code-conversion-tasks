The error occurs because the "^" operator is not defined for booleans, as it's not possible to XOR a boolean value with another (which would be 0 and 1). The correct fix would be to use the "bitwise AND", "&", or logical AND, operator (&), instead of the "^". 

Here's the corrected code:
```go
package main
import "fmt"
func boolean_ops(a bool, b bool) {
    fmt.Printf("%v and %v  ->  %v\n", a, b, a && b)
    fmt.Printf("%v or %v  ->  %v\n", a, b, a || b)
    fmt.Printf("%v xor %v  ->  %v\n", a, b, a != b)
    fmt.Printf("not %v  ->  %v\n", a, !a)
}
func main() {
    boolean_ops(true, true)
    boolean_ops(true, false)
    boolean_ops(false, true)
    boolean_ops(false, false)
}
```
In Golang, we use `!=` instead of `^` to check for xor. The `!` operator is used for logical NOT operation. 

I hope this helps!
