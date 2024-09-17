The equivalent code in Golang is as follows:
```
package main
import "fmt"
func main() {
    a, b := 128, 64
    fmt.Printf("a and b: %d\n", a & b)
    fmt.Printf("a or b: %d\n", a | b)
    fmt.Printf("a xor b: %d\n", a ^ b)
    fmt.Printf("not a: %d\n", ^a) /* equivalent to 2's complement */
    fmt.Printf("a << n: %d\n", a<<b)   /* left shift */
    fmt.Printf("a >> n: %d\n", a>>b)   /* right arithmetic shift */
    c := uint(a)
    fmt.Printf("c >> b: %d\n", c>>b)  /* logical right shift */
}
```
Please note that Golang does not support rotations or right shifts, so the equivalent code in C is not included in the converted program. Also, there are no 2's complements in Go, so we have used bitwise negation (^a) to get the equivalent result (which is similar to 2's complement).
