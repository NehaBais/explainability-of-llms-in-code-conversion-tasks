The error occurred because `strings` package does not have a method named `Substring`. The correct methods are `Index`, `Replace`, or `Join`. 

To fix this, we can use `s[i:i+m]` to get a substring starting at index i with length m.

Corrected code:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "0123456789"

	n := 3
	m := 4
	c := '2'
	sub := "456"

	fmt.Println(s[n : n+m])
	fmt.Println(s[n:])
	fmt.Println(strings.TrimSuffix(s, "9"))
	if i := strings.Index(s, string(c)); i >= 0 {
		fmt.Println(s[i : i+m])
	}
	if i := strings.Index(s, sub); i >= 0 {
		fmt.Println(s[i : i+m])
	}
}
```
