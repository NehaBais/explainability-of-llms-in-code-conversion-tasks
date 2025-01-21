 Here's the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func main() {
	s := "12345678"
	// Prepend a string literal to s
	s = "0" + s
	fmt.Println(s)
}
```

This Golang code does the same thing as the provided Python code: it initializes a string variable `s` with the value `"12345678"`, prepends the character `"0"` to it, and then prints the resulting string.
