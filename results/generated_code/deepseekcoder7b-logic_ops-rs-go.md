Here is the equivalent code in Golang. The standard logic operators '&&' (and), '||' (or) and '!' (not) are directly applicable to booleans in Go like they were in Rust. XOR operation ('^') isn't available out of box for boolean but can be implemented using bitwise operations:
```go
package main

import "fmt"

func booleanOps(a, b bool) {
    fmt.Printf("%t and %t -> %t\n", a, b, a && b)
    fmt.Printf("%t or %t -> %t\n", a, b, a || b)
    fmt<｜begin▁of▁sentence｜>t.Printf("%t xor %t -> %t\n", a, b, (int(a)+int(b))%2==1 )
    fmt.Printf("not %t -> %t\n", a, !a)
}

func main() {
    booleanOps(true, true)
    booleanOps(true, false)
    booleanOps(false, true)
    booleanOps(false, false)
}
```
The XOR operation is implemented using the bitwise operations. It converts a and b to int (which represents bool as an integer type in Go, where false is 0 and true is 1). Then it adds these two numbers together and gets the modulus of that sum with respect to 2. If the result is 1 then XOR operation returns true otherwise false.

