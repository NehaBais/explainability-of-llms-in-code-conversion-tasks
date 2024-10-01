Here is the equivalent code in Golang:

```golang
package main

import (
	"fmt"
)

func main() {
    // No built-in prepend in Go, so we use concatenation
    var s string = ", World"
    s = "Hello" + s
    fmt.Println(s)
}
```

In Golang, strings are immutable which means that you can't directly change a string after it has been created. Therefore, instead of using a built-in prepend function we use the "+" operator to concatenate two strings.
