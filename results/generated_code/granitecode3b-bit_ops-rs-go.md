Sure, here's the converted code in Golang:
```go
package main
import "fmt"
func main() {
	a := uint8(105)
	b := uint8(91)
	fmt.Printf("a      = %08b\n", a)
	fmt.Printf("b      = %08b\n", b)
	fmt.Printf("a | b  = %08b\n", a|b)
	fmt.Printf("a & b  = %08b\n", a&b)
	fmt.Printf("a ^ b  = %08b\n", a^b)
	fmt.Printf("!a     = %08b\n", ^a)
	fmt.Printf("a << 3 = %08b\n", a<<3)
	fmt.Printf("a >> 3 = %08b\n", a>>3)
}
```
This code performs the same operations as the Rust code, but in Golang syntax and idioms. The bitwise NOT operator is represented by the `^` symbol, and left shift and right shift are represented by the `<` and `>` symbols respectively. Left rotate and right rotate are not built-in operators in Golang, but can be implemented using bit shifting and masking operations.

