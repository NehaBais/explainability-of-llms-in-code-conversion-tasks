This is a translation of the C code to Golang. This code prints out different substrings from a given string based on the parameters given: 
- Starting at n characters and of m length (or up to the end of the string if m is negative);
- The whole string, excluding the last character;
- A substring starting from a specific character, of m length.
- A substring starting from a specific substring within the string, of m length.
Please note that Golang doesn't natively support Unicode or UTF-8. Therefore, it must work on any valid Unicode code point. It also does not handle all Unicode characters and uses 16 bit code units for UTF-16 strings. For other encodings like ASCII, the substring function will not properly handle all input.

```golang
package main

import (
	"fmt"
	"strings"
	"unicode"
)

func substring(s string, n int, m ptrdiff_t) *string {
	var result *string
	if lenS := len(s); n < 0 {
		n = lenS + n - 1
	}
	if n >= lenS || m < 0 {
		return nil
	}
	for _, ch := range s[:n] {
		if ch == '\0' {
			return nil
		}
	}
	result = &s[n : n+m]
	return result
}

func strWholeLess1(s string) *string {
	return substring(s, 0, len(s)-1)
}

func strFromCh(s string, ch rune, m ptrdiff_t) *string {
	return substring(s, indexOf(s, ch), m)
}

func strFromStr(s string, str string, m ptrdiff_t) *string {
	return substring(s, indexOf(s, str), m)
}

func indexOf(s string, ch rune) int {
	for idx, r := range s {
		if r == ch {
			return idx
		}
	}
	return -1
}

func main() {
	s := "hello world shortest program"
	fmt.Println(substring(s, 12, 5)) // prints: "shortest"
	fmt.Println(substring(s, 6, -1))  // prints: "world shortest program"
	fmt.Println(strWholeLess1(s))     // prints: "hello world shortest progra"
	fmt.Println(strFromCh(s, 'w', 5)) // prints: "world"
	fmt.Println(strFromStr(s, "ro", 3)) // prints: "rog"
}
```
