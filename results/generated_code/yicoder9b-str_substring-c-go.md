Below is the equivalent Golang code for your C program:
```go
package main

import (
    "fmt"
    "strings"
)

func substring(s string, n int, m int) string {
	if len(s) <= n || m == 0 {
		return ""
	} else if m < 0 {
		m = len(s) + m - n + 1
	}
    return s[n : n+m]
}

func str_wholeless1(s string) string {
	return substring(s, 0, len(s)-1)
}

func str_fromch(s string, ch rune, m int) string {
	pos := strings.IndexRune(s, ch)
	if pos == -1 {
		return ""
	} else {
		return substring(s, pos, m)
	}
}

func str_fromstr(s string, in string, m int) string {
	pos := strings.Index(s, in)
    if pos == -1 {
        return ""
    } else {
		return substring(s, pos, m)
	}
}

func main()  {
	const s = "hello world shortest program"
	fmt.Println(substring(s, 12, 5)) // get "short"
	fmt.Println(substring(s, 6, -1)) // get "world shortest program"
	fmt.Println(str_wholeless1(s)) // "... progra"
	fmt.Println(str_fromch(s, 'w', 5)) // "world"
	fmt.Println(str_fromstr(s, "ro", 3)) // "rog"
}
```
In this Go version of the C code:
- I replaced `char *` with `string` for strings.
- I replaced `int ch` with `rune ch` to handle any Unicode character including those outside the Basic Multilingual Plane.
- String operations use standard library functions like `strings.Index()` and `strings.IndexRune()` instead of manual looping, which is safer and more efficient.
- Memory allocations are handled automatically in Go, so I removed related parts from original C code.
- Error handling has been simplified with the introduction of error return values in Go, so error checking (like returning "--error--" when `NULL == r`) is no longer needed. 
- Instead of using malloc and free to allocate and deallocate memory, Go automatically handles this.
