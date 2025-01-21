Here is how you can convert the JavaScript code to Golang.

```golang
package main

import (
    "fmt"
)

func bitwise(a, b int) {
    fmt.Println("a AND b:", a & b)
    fmt.Println("a OR b:", a | b)
    fmt.Println("a XOR b:", a ^ b)
    fmt.Println("NOT a:", ^a)
    fmt.Println("a << b:", a << b)
    fmt.Println("a >> b:", a >> b)
    fmt.Println("a >>> b:", uint(a) >> uint(b))
}

func main() {
    bitwise(5, 2)
}
```

Note: In Golang, there is no direct operator for right arithmetic shift (>>>) as in JavaScript. Instead, you should use an unsigned integer type (like `uint`) and then perform a logical right shift. The `uint()` function converts a signed integer into its corresponding unsigned version.

Also note that the bitwise operators &, |, ^, << and >> work on integers not on booleans or strings as in JavaScript. If you want to handle boolean operations, you would need to convert them to integers first, using 0 for false and 1 for true.
