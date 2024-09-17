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