Below is the Go version of your C code:

```go
package main

import (
	"fmt"
	"strings"
)

func substring(s string, n int, m int) *string {
	if len(s) == 0 || n < 0 || m <= 0 {
		return nil
	}

	begin := n
	end := begin + m
	if end > len(s) {
		end = len(s)
	}
	
	result := s[begin:end]
	return &result
}

func strWholeLess1(s string) *string {
	result, _ := substring(s, 0, len(s)-1)
	return result
}

func strFromCh(s string, ch byte, m int) *string {
	index := strings.IndexByte(s, ch)
	if index == -1 {
		return nil
	}
	result, _ := substring(s, index, m)
	return result
}

func strFromStr(s string, substr string, m int) *string {
	index := strings.Index(s, substr)
	if index == -1 {
		return nil
	}
	result, _ := substring(s, index, m)
	return result
}

func main() {
	s := "hello world shortest program"

	fmt.Println(*substring(s, 12, 5)) // get "short"
	fmt.Println(*substring(s, 6, len(s))) // get "world shortest program"
	fmt.Println(*strWholeLess1(s)) // "... progra"
	fmt.Println(*strFromCh(s, 'w', 5)) // "world"
	fmt.Println(*strFromStr(s, "ro", 3)) // "rog"
}
```

This Go version of your code provides the same functionality as the original C code:

- The `substring` function starts at the specified index and retrieves a substring up to the specified length.
- The `strWholeLess1` function removes the last character from a string.
- The `strFromCh` function finds the first occurrence of a specified byte in a string, starting from this position, and returns a substring of the given length.
- The `strFromStr` function works similarly to `strFromCh`, but it searches for substrings rather than single bytes.

The Go code uses pointers (`*string`) to return these results, similar to how C's `malloc()` allocates memory for a string. However, in Go we typically use built-in methods and data structures that handle strings more efficiently and safely.
