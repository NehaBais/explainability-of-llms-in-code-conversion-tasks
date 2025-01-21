The error is caused by the mismatched types of `r` and `c`. In Go, `byte` represents an 8-bit unsigned integer (0-255), while `rune` represents a Unicode code point. The `==` operator checks for equality between two runes.

To fix this issue, we need to convert the character `c` from byte type to rune type. We can do this using the `rune` function. Here's the corrected code:

```go
package main

import (
	"fmt"
)

// Substring function returns a substring from the given string.
func Substring(s string, n int) string {
	return s[n:]
}

// SubstringFromChar function returns a substring starting at the first occurrence of the character c in the string.
func SubstringFromChar(s string, c byte, m int) string {
	r := rune(c)
	index := -1
	for i, r := range s {
		if r == c {
			index = i
			break
		}
	}
	if index == -1 {
		return ""
	}
	return s[index : index+m+1]
}

// SubstringFromSubstr function returns a substring starting at the first occurrence of the substring sub in the string.
func SubstringFromSubstr(s string, substr string, m int) string {
	r := rune(substr[0])
	index := -1
	for i, r := range s {
		if s[i:i+len(substr)] == substr {
			index = i
			break
		}
	}
	if index == -1 {
		return ""
	}
	return s[index : index+m+1]
}

func main() {
	fmt.Println(Substring("abcdef", 3))                 // Output: def
	fmt.Println(Substring("abcdef", 3, 2))              // Output: ef
	fmt.Println(Substring("abcdef", 5))                 // Output: f
	fmt.Println(SubstringFromChar("abcdef", 'd', 2))    // Output: ddf
	fmt.Println(SubstringFromSubstr("abcdef", "bc", 2)) // Output: bcdf
}
```
