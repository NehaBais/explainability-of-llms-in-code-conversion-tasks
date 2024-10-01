The equivalent Go code for the Python code you provided is as follows:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "abcdefgh"
	n, m := 2, 3
	char, chars := 'd', "cd"

	// starting from n=2 characters in and m=3 in length;
	fmt.Println(s[n-1 : n+m-1])

	// starting from n characters in, up to the end of the string;
	fmt.Println(s[n-1:])

	// whole string minus last character;
	fmt.Println(s[:len(s)-1])

	// starting from a known character char="d" within the string and of m length;
	indx := strings.IndexRune(s, char)
	fmt.Println(s[indx : indx+m])

	// starting from a known substring chars="cd" within the string and of m length. 
	indx = strings.Index(s, string(chars))
	fmt.Println(s[indx : indx+m])
}
```

Please note that Go does not directly support Python's `index` method which returns the first occurrence of a substring in a string. So, we need to use `strings.IndexRune` for single characters and `strings.Index` for substrings. Also, unlike Python, Go uses 0-based indexing, so `n - 1` is used instead of `n` to get the starting position.
