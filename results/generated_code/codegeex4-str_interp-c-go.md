In Go language, you can use the `fmt` package's `Printf` function to achieve string interpolation. 

Here is the equivalent Go code for your C program:

```go
package main

import "fmt"

func main() {
    extra := "little"
    fmt.Printf("Mary had a %s lamb.\n", extra)
}
```

In this code, `%s` in the format string is a placeholder that will be replaced with the value of `extra` when `Printf` executes.
