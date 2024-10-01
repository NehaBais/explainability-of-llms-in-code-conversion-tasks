Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"unicode/utf8"
)

func main() {
	s := "0123456789"
	n, m := 3, 4
	c, sub := '2', "456"

	// Substring starting from n characters in and of m length
	fmt.Println(s[n:n+m])

	// Substring starting from n characters in, up to the end of the string
	fmt.Println(s[n:])

	// Whole string minus the last character
	fmt.Println(s[:len(s)-1])

	// Substring starting from a known character within the string and of m length
	if i := strings.IndexRune(s, c); i >= 0 {
		fmt.Println(s[i : i+m])
	} else {
		fmt.Println("Character not found")
	}

	// Substring starting from a known substring within the string and of m length
	if i := strings.Index(s, sub); i >= 0 {
		fmt.Println(s[i : i+m])
	} else {
		fmt.Println("Substring not found")
	}
}
```
This Go code does the same thing as the C++ code: it prints substrings from a given string `s`.
