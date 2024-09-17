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