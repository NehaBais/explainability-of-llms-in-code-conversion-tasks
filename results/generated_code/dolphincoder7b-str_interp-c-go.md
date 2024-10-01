In Golang, string interpolation is done using the `fmt.Sprintf()` function and the `%v` verb (for values). Here's how to do it:

```go
package main

import "fmt"

func main() {
    const extra = "little"
    fmt.Printf("Mary had a %s lamb.\n", extra)
}
```

In this code, `extra` is being interpolated into the string using `%v`. The output will be:

Mary had a little lamb.

This is equivalent to the original C code.
