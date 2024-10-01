Sure, here is the equivalent code in Golang:
```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "0123456789"

	const n = 3
	const m = 4
	c := '2'
	sub := "456"

	fmt.Println(s[n:m+n], "\n")  // Substring from n to n+m (exclusive).
	fmt.Println(s[n:], "\n")     // Substring until the end of string.
	fmt.Println(s[:len(s)-1], "\n") // String minus the last character.
	fmt.Println(strings.Index(s, string(c)), m, "\n")  // Starting index from c in s.
	fmt.Println(strings.Index(s, sub), m, "\n")       // Starting index from sub in s.
}
```
