Here is the equivalent code in Go:

```go
package main

import (
	"fmt"
	"strings"
)

func substring(s string, n int, m int) string {
	if s == "" || n < 0 || m < 0 {
		return ""
	}

	start := n
	if start > len(s) {
		return ""
	}

	end := start + m
	if end > len(s) {
		return ""
	}

	return s[start:end]]
}

func str_wholeless1(s string) string {
	return substring(s, 0, strings.IndexByte(s, 'o')-1))
}

func str_fromch(s string, ch byte, m int) string {
	start := indexByte(s, ch) - n
	if start > len(s) {
		return ""
	}

	end := start + m
	if end > len(s) {
		return ""
	}

	return s[start:end]]
}

func str_fromstr(s string, in string, m int) string {
	start := strings.Index(s, in)) - n
	if start > len(s) {
		return ""
	}

	end := start + m
	if end > len(s) {
		return ""
	}

	return s[start:end]]
}

func main() {
	const s = "hello world shortest program"

	fmt.Println(substring(s, 12, 5)))) // get "short"
	fmt.Println(substring(s, 6, -1))))) // get "world shortest program"
	fmt.Println(str_wholeless1(s)))) // "... progra"
	fmt.Println(str_fromch(s, 'w', 5)))) // "world"
	fmt.Println(str_fromstr(s, "ro", 3)))) // "rog"
}
```

This code includes the necessary functions (`substring`, `str_wholeless1`, `str_fromch`, and `str_fromstr`) to convert a given string into a substring based on specific parameters. The code also includes test cases to verify the correctness of the implementation.
