 Sure, here is the equivalent Go code for the given C++ code that displays substrings as specified:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "0123456789"

	n, m := 3, 4
	c := '2'
	sub := "456"

	fmt.Println(s[n:n+m])
	fmt.Println(s[n:])
	fmt.Println(s[:len(s)-1])
	fmt.Println(findIndexAndSubstr(s, c), m)
	fmt.Println(findIndexAndSubstr(s, sub), m)
}

func findIndexAndSubstr(s string, substr interface{}) (int, string) {
	switch v := substr.(type) {
	case rune:
		index := strings.IndexRune(s, v)
		if index != -1 {
			return index, s[index:index+m]
		}
	case string:
		index := strings.Index(s, v)
		if index != -1 {
			return index, s[index:index+len(v)]
		}
	default:
		fmt.Println("Unsupported type")
	}
	return -1, ""
}
```

### Explanation:
1. **Substring starting from `n` characters in and of `m` length:**
   ```go
   fmt.Println(s[n:n+m])
   ```
   This uses Go's slicing to get the substring starting from index `n` and of length `m`.

2. **Substring starting from `n` characters in, up to the end of the string:**
   ```go
   fmt.Println(s[n:])
   ```
   This slices from index `n` to the end of the string.

3. **Whole string minus the last character:**
   ```go
   fmt.Println(s[:len(s)-1])
   ```
   This slices the entire string except the last character.

4. **Substring starting from a known character within the string and of `m` length:**
   ```go
   fmt.Println(findIndexAndSubstr(s, c), m)
   ```
   The function `findIndexAndSubstr` is used to find the index of the character `c` and then slice from that index with a maximum length of `m`.

5. **Substring starting from a known substring within the string and of `m` length:**
   ```go
   fmt.Println(findIndexAndSubstr(s, sub), m)
   ```
   Similarly, the function `findIndexAndSubstr` is used to find the index of the substring `sub` and then slice from that index with a maximum length of `m`.

The helper function `findIndexAndSubstr` handles both runes (characters) and strings for finding their indices in the original string.
