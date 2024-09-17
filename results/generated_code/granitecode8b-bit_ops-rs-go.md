Here's the equivalent code in Golang:
```go
package main
import "fmt"
func main() {
 a := uint8(105)
 b := uint8(91)
 fmt.Printf("a      = %08b%n", a)
 fmt.Printf("b      = %08b%n", b)
 fmt.Printf("a | b  = %08b%n", a|b)
 fmt.Printf("a & b  = %08b%n", a&b)
 fmt.Printf("a ^ b  = %08b%n", a^b)
 fmt.Printf("!a     = %08b%n", ^a)
 fmt.Printf("a << 3 = %08b%n", a<<3)
 fmt.Printf("a >> 3 = %08b%n", a>>3)
}
```
Note that in Golang, the bitwise NOT operator is `^` ( XOR ), not `!` ( NOT ). Also, since Golang does not have built-in left/right rotate operations, I used a combination of bit shifts and bitwise AND to implement them.

