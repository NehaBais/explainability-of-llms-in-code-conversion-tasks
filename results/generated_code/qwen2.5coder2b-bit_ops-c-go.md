The equivalent Go code for the given C function would look like this:

```go
package main

import (
    "fmt"
)

func bitwise(a int, b int) {
    fmt.Printf("a and b: %d\n", a&b)
    fmt.Printf("a or b: %d\n", a|b)
    fmt.Printf("a xor b: %d\n", a^b)
    fmt.Printf("not a: %d\n", ^a)
    fmt.Printf("a << n: %d\n", a<<b) // left shift
    fmt.Printf("a >> n: %d\n", a>>b) // on most platforms: arithmetic right shift
    var c unsigned int = uint(a)
    fmt.Printf("c >> b: %d\n", c>>b) // logical right shift
}

func main() {
    bitwise(5, 3)
}
```

When run with `go run bitwise.go`, it would output the results of the bitwise operations and shifts.
