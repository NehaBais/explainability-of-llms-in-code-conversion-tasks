 Sure, here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "abcdefgh"
	n, m := 2, 3
	char := "d"
	chars := "cd"

	// starting from n=2 characters in and m=3 in length;
	fmt.Println(s[n-1 : n+m-1])

	// starting from n characters in, up to the end of the string;
	fmt.Println(s[n-1:])

	// whole string minus last character;
	fmt.Println(s[:len(s)-1])

	// starting from a known character char="d" within the string and of m length;
	indx := strings.Index(s, char)
	if indx != -1 {
		fmt.Println(s[indx : indx+m])
	} else {
		fmt.Println("Character not found")
	}

	// starting from a known substring chars="cd" within the string and of m length.
	indx = strings.Index(s, chars)
	if indx != -1 {
		fmt.Println(s[indx : indx+m])
	} else {
		fmt.Println("Substring not found")
	}
}
```

### Explanation:
1. **Starting from n=2 characters in and m=3 in length:**
   - In Go, the slice syntax `s[n-1 : n+m-1]` is used to get a substring starting from index `n-1` and of length `m`.

2. **Starting from n characters in, up to the end of the string:**
   - The slice syntax `s[n-1:]` is used to get the substring from index `n-1` to the end of the string.

3. **Whole string minus last character:**
   - Using `s[:len(s)-1]` in Go, we can get the whole string except the last character.

4. **Starting from a known character char="d" within the string and of m length:**
   - The function `strings.Index` is used to find the index of the character, and then we use slice syntax to get the substring of length `m`.

5. **Starting from a known substring chars="cd" within the string and of m length:**
   - Similarly, using `strings.Index`, we find the index of the substring, and then extract a substring of length `m` starting from that index.

This code should work for any valid Unicode code point in UTF-8 encoding.
