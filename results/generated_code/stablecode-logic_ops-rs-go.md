Here is the equivalent code in Go:

```go
package main

import "fmt"

func booleanOps(a bool, b bool) {
    fmt.Printf("The result of '%s and %s' operation is: %t\n", a, b, a && b))
    fmt.Printf("The result of '%s or %s' operation is: %t\n", a, b, a || b))
    fmt.Printf("The result of 'xor(%s, %s)' operation is: %t\n", a, b, a ^ b))
    fmt.Printf("The result of 'not(%s)' operation is: %t\n", a, !a))
}

func main() {
    booleanOps(true, true)
    booleanOps(true, false)
    booleanOps(false, true)
    booleanOps(false, false)
}
```
This Go code includes the same functionality as the given Rust code. It defines a function named `boolean_ops` that takes two boolean values, and performs "and", "or", "xor", and "not" operations on these values and prints the results. The main function calls this method with different boolean values to demonstrate its usage.
