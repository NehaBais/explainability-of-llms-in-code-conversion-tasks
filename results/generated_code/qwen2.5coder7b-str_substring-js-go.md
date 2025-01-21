In Go, you can use the `unicode/utf8` package to handle UTF-8 strings properly. Below is the equivalent code that meets all the requirements:

```go
package main

import (
	"fmt"
	"unicode/utf8"
)

func getSubstring(s string, start int, length int) (string, error) {
	runes := []rune(s)
	if start < 0 || start >= len(runes) || start+length > len(runes) {
		return "", fmt.Errorf("invalid start index or length")
	}
	return string(runes[start : start+length]), nil
}

func main() {
	str := "abcdefgh"
	n := 2
	m := 3

	// * starting from n characters in and of m length;
	substr, _ := getSubstring(str, n, m)
	fmt.Println(substr) // => "cde"

	// * starting from n characters in, up to the end of the string;
	substr, _ = getSubstring(str, n, utf8.RuneCountInString(str)-n)
	fmt.Println(substr) // => "cdefgh"

	// * whole string minus last character;
	substr, _ = getSubstring(str, 0, utf8.RuneCountInString(str)-1)
	fmt.Println(substr) // => "abcdefg"

	// * starting from a known character within the string and of m length
	index := utf8.IndexRune(str, 'b')
	if index != -1 {
		substr, _ = getSubstring(str, index, m)
		fmt.Println(substr) // => "bcd"
	}

	// * starting from a known substring within the string and of m length.
	index = utf8.Index(str, []byte("bc"))
	if index != -1 {
		substr, _ = getSubstring(str, index, m)
		fmt.Println(substr) // => "bcd"
	}
}
```

### Explanation:
1. **getSubstring Function**: This function takes a string `s`, a starting index `start`, and a length `length`. It returns a substring of `s` starting from the `start` index for `length` runes.
2. **UTF-8 Handling**: The `unicode/utf8` package is used to handle UTF-8 strings properly, ensuring that operations like indexing and slicing are performed on logical characters (runes) rather than 8-bit code units.
3. **Error Handling**: The function returns an error if the start index or length is invalid.

### Usage:
- `getSubstring(str, n, m)` gets a substring starting from the `n`th rune and of length `m`.
- `utf8.RuneCountInString(str)` counts the number of runes in the string.
- `utf8.IndexRune(str, 'b')` finds the index of the first occurrence of the rune `'b'` in the string.
- `utf8.Index(str, []byte("bc"))` finds the index of the substring `"bc"` in the string.

This code will work correctly for any valid Unicode code point, whether in the Basic Multilingual Plane or above it.
