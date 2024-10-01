In Go, strings are immutable and concatenation is handled natively using the `+` operator. Here's how you can translate your C code to Golang:

```go
package main

import (
	"fmt"
)

func main() {
    var s string = "hello"
    var s2 string = s + " literal"

    fmt.Println(s)       // Outputs: hello
    fmt.Println(s2)      // Outputs: hello literal
}
```
