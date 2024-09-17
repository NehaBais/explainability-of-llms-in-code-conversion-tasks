In Golang, bitwise operations are done using built-in methods of the types. Bitwise NOT operator is represented by "^". Below is your Rust code converted to GoLang. For left rotate and right rotate, we need custom functions. The equivalent for left shift is `<<`, same as in Rust, but for right shift there are no built-in operators so a function has been written to mimic the operation:

```go
package main
import (
    "fmt"
)
func RightShift(a uint8, b uint8) uint8 {
    return a >> b
}
func LeftRotate(a uint8,b uint8) uint8 {
    return (a << b) | (a >> (8 - b)) 
}
func RightRotate(a uint8, b uint8) uint8 {
   return (a >> b) | (a << (8 - b)) 
}
func main()  {
    var a uint8 = 105
    var b uint8 = 91
    fmt.Printf("a      = %08b\n", a)
    fmt.Printf("b      = %08b\n", b)
    fmt<｜begin▁of▁sentence｜> := s{a, "|", b, "  = ", (a | b)}
    fmt.Printf(s.format(), s.args()...)
    s = s{a, "&", b, "  = ", (a & b)}
    fmt.Printf(s.format(), s.args()...)
    s = s{a, "^", b, "  = ", (a ^ b)}
    fmt.Printf(s.format(), s.args()...)
    fmt.Printf("!a     =  %08b\n", ^a)
    fmt.Printf("a << 3 = %08b\n", a<<3)
    fmt.Printf("a >> 3 = %08b\n", RightShift(a, 3))
    fmt.Printf("Left rotate of a by b is  = %08b\n", LeftRotate(a,b))
    fmt.Printf("Right rotate of a by b is = %08b\n", RightRotate(a,b))
}
``` 
In this GoLang code:
- The bitwise operations `|` (OR), `&` (AND) and `^` (XOR) are used.
- For Bitwise NOT operation a custom function is written that uses the built-in operator `^` for integer types, but it needs to be applied on each byte of input which means we take uint8 as input type. 
- Shift operations `<<` and `>>` are already available in Golang. But there's no direct right shift operation so a custom function is written to mimic the same.
- For left rotate and right rotate, we need to use bitwise shifting along with OR operation. So again custom functions are used for these operations as compared to built-in methods which would have been simpler to write directly in Golang.

