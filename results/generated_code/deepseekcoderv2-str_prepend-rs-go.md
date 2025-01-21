 Sure, here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func main() {
	s := "World"
	s = "Hello " + s
	fmt.Println(s)
}
```

This Go code does the following:
1. Initializes a string variable `s` with the value `"World"`.
2. Prepends the string literal `"Hello "` to the variable `s`.
3. Prints the resulting string using `fmt.Println`.
