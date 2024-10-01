 Here is the converted code in Go:
```
package main
import "fmt"
func booleanOps(a bool, b bool) {
    fmt.Printf("%t and %t -> %t\n", a, b, a && b)
    fmt.Printf("%t or %t -> %t\n", a, b, a || b)
    fmt.Printf("%t xor %t -> %t\n", a, b, a ^ b)
    fmt.Printf("not %t -> %t\n", a, !a)
}
func main() {
    booleanOps(true, true)
    booleanOps(true, false)
    booleanOps(false, true)
    booleanOps(false, false)
}
```
The `fmt` package is imported to use its formatting functions such as `Printf()`. The function `booleanOps()` takes two bool arguments and prints the results of "and", "or", "xor" and "not" on them. The `main()` function calls `booleanOps()` with different bool values and prints the output.
