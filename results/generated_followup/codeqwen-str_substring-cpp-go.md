The error occurs because the `unicode/utf8` and `strings` packages are not imported at the top of the Go file, so the compiler doesn't know about them.

The fix is to add the import statements for the packages.


Here's the corrected code:

```go
package main

import (
	"fmt"
	"unicode/utf8"
	"strings"
)

func main() {
	s := "0123456789"
	n, m := 3, 4
	c, sub := '2', "456"

	// Substring starting from n characters in and of m length
	fmt.Println(s[n : n+m])

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
