The provided Rust code can be converted to Golang as follows:

```go
package main

import (
	"strings"
	"unicode"
)

func main() {
	s := "abc文字化けdef"
	n := 2
	m := 3

	// Print 3 characters starting at index n and of m length.
	println(string([]rune{runet(s[n:n+m]...)}))

	// Print all characters starting at index n and up to the end of the string.
	println(string([]rune{runet(s[n:]...)}))

	// Print all characters except the last, starting at index n.
	println(string([]rune{runet(s[:n] + s[n+1:]...)}))

	cpos := findRuneInString(s, 'b')
	if cpos == -1 {
		println("No character 'b' found in string")
	} else {
		println(string([]rune{runet(s[cpos:cpos+m]...)}))
	}

	spos := findRuneInString(s, []rune{'け', 'd'})
	if spos == -1 {
		println("No substring 'けd' found in string")
	} else {
		println(string([]rune{runet(s[spos:span]...)}))
	}
}

func findRuneInString(s string, r rune[]rune) int {
	for i, _ := range s {
		if unicode.Is(r, runet(s[i])) {
			return i
		}
	}
	return -1
}
```

Note: In Golang the `unicode` package contains functions that can be used to check if a character is of a certain Unicode category (like alphabetic, digit or space). The `findRuneInString` function here does the same in Golang as the Rust code does with `s.find()`.
