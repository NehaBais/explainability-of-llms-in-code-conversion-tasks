This is the converted code in Golang:
```
package main
import "fmt"
func boolean_ops(a bool, b bool) {
    fmt.Printf("%v and %v -> %v\n", a, b, a && b)
    fmt.Printf("%v or %v -> %v\n", a, b, a || b)
    fmt.Printf("%v xor %v -> %v\n", a, b, a ^ b)
    fmt.Printf("not %v -> %v\n", a, !a)
}
func main() {
    boolean_ops(true, true)
    boolean_ops(true, false)
    boolean_ops(false, true)
    boolean_ops(false, false)
}
```
In Golang, you can use `fmt.Printf` instead of `println`. The bitwise operators work exactly the same as in Rust, so there is no need to change them. In fact, the "and", "or" and "not" operations are represented by the corresponding Golang keywords (`&&`, `||`, `!`).
I hope this helps!
