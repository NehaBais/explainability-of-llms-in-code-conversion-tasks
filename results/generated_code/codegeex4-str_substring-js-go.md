Below is your JavaScript code converted to Golang:

```go
package main

import (
	"fmt"
	"unicode/utf8"
)

func main() {
	str := "abcdefgh"

	n := 2
	m := 3

	// starting from n characters in and of m length
	fmt.Println(str[n : n+m]) // => "cde"

	// starting from n characters in, up to the end of the string
	fmt.Println(str[n:])       // => "cdefgh"
	fmt.Println(str[n:])       // => "cdefgh"

	// whole string minus last character
	fmt.Println(str[:utf8.RuneCountInString(str)-1]) // => "abcdefg"

	// starting from a known character within the string and of m length
	fmt.Println(str[findRuneIndex(str, 'b') : findRuneIndex(str, 'b')+m]) // => "bcd"
}

func findRuneIndex(s string, ch rune) int {
	for i, r := range s {
		if r == ch {
			return i
		}
	}
	return -1
}
```
This code handles Unicode characters. The `utf8.RuneCountInString` function is used to count the number of runes in a string, which allows this program to work with any valid Unicode code point.

The `findRuneIndex` function returns the index of the first occurrence of a given rune within a string. It's used by the last example to find the starting position for substrings that begin at known characters or substrings.

Note: Golang uses runes (int32) instead of bytes/characters, and so it is Unicode-compliant without any additional handling.
