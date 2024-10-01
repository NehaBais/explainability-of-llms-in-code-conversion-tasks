The equivalent Golang code for the given Rust code is:

```go
package main

import (
	"fmt"
	"strings"
	"unicode/utf8"
)

func main() {
	s := "abc文字化けdef"
	n := 2
	m := 3
	
	// Print 3 characters starting at index 2 (c文字)
	fmt.Println(getSubstring(s, n, m))

	// Print all characters starting at index 2 (c文字化けdef)
	fmt.Println(getSubstring(s, n, len([]rune(s))))

	// Print all characters except the last (abc文字化けde)
	fmt.Println(getSubstringExceptLastChar(s))

	// Print 3 characters starting with 'b' (bc文)
	cpos := strings.Index(s, "b")
	fmt.Println(getSubstring(s[cpos:], 0, m))

	// Print 3 characters starting with "けd" (けde)
	spos := strings.Index(s, "けd")
	fmt.Println(getSubstring(s[spos:], 0, m))
}

func getSubstring(str string, start int, length int) string {
	runeStr := []rune(str)
	var result string

	for i := start; i < len(runeStr) && length > 0; i++ {
		result += string(runeStr[i])
		length--
	}
	return result
}

func getSubstringExceptLastChar(str string) string {
	runeStr := []rune(str)
	if len(runeStr) == 0 {
		return ""
	}
	return string(runeStr[0 : len(runeStr)-1])
}
```

This program uses the `[]rune` type for working with Unicode characters. The `getSubstring()` function is used to get a substring starting from the given start index and of the specified length, while `getSubstringExceptLastChar()` gets all but the last character in the string.

Note that Go's strings are UTF-8 encoded by default, so when using `[]rune`, it will correctly handle any valid Unicode code points, not just Basic Multilingual Plane characters. The Golang standard library also provides a `strings.Index` function for finding the index of a substring or character in a string.

Also, this code assumes that the length of the substring (m) is less than or equal to the number of remaining runes in the string.
