Here is the equivalent code in Go:

```go
package main

import "fmt"

func bitwise(a int, b int) {

    fmt.Printf("a and b: %d\n", a&b))
    fmt.Printf("a or b: %d\n", a|b))
    fmt.Printf("a xor b: %d\n", a^b))
    fmt.Printf("not a: %d\n", ^a))
    fmt.Printf("a << n: %d\n", a<<b))
    fmt.Printf("a >> n: %d\n", a>>b))
    c := uint(a)

    // convert the signed integer into unsigned, so it will perform logical shift 
    fmt.Printf("c >> b: %d\n", c>>uint(b))) // logical right shift 

    return
}

func main() {
    bitwise(10, 2)
}
```
The Go code above performs the same operations as your C function. It prints out all of the results using `fmt.Printf`.
It converts the signed integer into unsigned by type conversion (`uint(a)`)).
Go doesn't have bitwise rotate operators like in C, so these are not included in the Go version.
However, all of the other operations (AND, OR, XOR, NOT, shift left and right) are performed as usual using the corresponding operators (`&`, `|`, `^`, `~`, `<<` and `>>`).
