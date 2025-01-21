Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "abc文字化けdef"
	n := 2
	m := 3

	// Print 3 characters starting at index 2 (c文字)
	fmt.Println(s[n:n+m])

	// Print all characters starting at index 2 (c文字化けdef)
	fmt.Println(s[n:])

	// Print all characters except the last (abc文字化けde)
	fmt.Println(s[:len(s)-1])

	// Print 3 characters starting with 'b' (bc文)
	cpos := strings.IndexRune(s, rune('b'))
	fmt.Println(s[cpos:cpos+m])

	// Print 3 characters starting with "けd" (けde)
	spos := strings.Index(s, "けd")
	fmt.Println(s[spos:spos+m])
}
```

In Golang, `strings` package is used for string operations. Also note that Go does not use UTF-8 or UTF-16 code units like Rust. In Go, a string is a sequence of bytes, and the way it's represented is an implementation detail that may change between versions. Therefore, Go automatically takes care of Unicode characters when you work with strings.

Also, `rune` type in Golang represents a single Unicode character, while `byte` represents an 8-bit value. 

In `strings.IndexRune()`, we search for the rune 'b' in the string and return its index. Similarly, in `strings.Index()`, we search for the substring "けd" in the string and return its index.

And the slicing operation `[n:n+m]`, `[n:]` and `[:len(s)-1]` is used to get a substring from the string.
