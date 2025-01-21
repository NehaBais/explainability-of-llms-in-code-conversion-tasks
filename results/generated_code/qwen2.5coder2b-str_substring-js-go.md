To convert this JavaScript code to Golang, you can use Go's string manipulation functions. Here is how you could do it:

```go
package main

import (
	"fmt"
)

func main() {
	str := "abcdefgh"

	n := 2
	m := 3

	fmt.Printf("Substring starting from n characters and of m length: %s\n", str[n:n+m])
	fmt.Printf("Substring starting from n characters up to the end of the string: %s\n", str[n:])
	fmt.Printf("Substring of whole string minus last character: %s\n", str[:len(str)-1])
	fmt.Printf("Substring starting from a known character within the string and of m length: %s\n", str[str.IndexRune('b', 0)+n:n+m])
	fmt.Printf("Substring starting from a known substring within the string and of m length: %s\n", str[str.IndexRune(str, 'bc')+n:n+m])
}
```

Explanation:
1. `str[n : n+m]` - this will return a substring starting from index `n` and having length `m`.
2. `str[n:]` - this will return a substring starting from index `n` until the end of the string.
3. `str[:len(str)-1]` - this will return a substring of the whole string excluding the last character.
4. `str[str.IndexRune('b', 0)+n:n+m]` and `str[str.IndexRune(str, 'bc')+n:n+m]` - these will return a substring starting from the index of the first occurrence of 'b' and 'bc' respectively, having length `m`. The `str.IndexRune` function finds the index of the first occurrence of a rune (character) in a string. The `str.IndexRune(str, 'bc')` function is used to find the index of the substring "bc".
