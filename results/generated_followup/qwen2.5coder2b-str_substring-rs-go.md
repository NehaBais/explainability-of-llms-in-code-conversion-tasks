The error is because `s[n:n+m]` returns a string where `n` is the starting index (inclusive) and `m` is the length of the substring. However, `strings.Join` expects a slice of strings as its argument. To fix this, you can convert the resulting string to a slice of runes using `[]rune(s[n:n+m])`, which allows it to be used with `strings.Join`.

The corrected code in single line is:

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

	fmt.Println(strings.Join([]rune(s[n:n+m]), ""))

	fmt.Println(strings.Join([]rune(s[n:]), ""))

	fmt.Print(strings.Reverse([]rune(s[:]))[n:]
	fmt.Println()

	cpos := strings.IndexFunc(s, func(r rune) bool { return r == 'b' })
	if cpos != -1 {
		fmt.Println(strings.Join([]rune(s[cpos:cpos+m]), ""))
	}

	spos := strings.IndexFunc(s, func(r rune) bool { return string(r) == "けd" })
	if spos != -1 {
		fmt.Println(strings.Join([]rune(s[spos:spos+m]), ""))
	}
}
```
