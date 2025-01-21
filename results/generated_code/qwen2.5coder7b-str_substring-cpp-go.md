In Go language, we can use the `unicode/utf8` and `strings` packages to handle Unicode code points. Here is an equivalent code:

```go
package main

import (
	"fmt"
	"unicode/utf8"
)

func main() {
	s := "0123456789"

	n := 3
	m := 4
	c := '2'
	sub := "456"

	fmt.Println(substring(s, n, m))
	fmt.Println(substring(s, n, utf8.RuneCountInString(s)))
	fmt.Println(substring(s, 0, utf8.RuneCountInString(s)-1))
	fmt.Println(substring(s, runeIndex(s, c), m))
	fmt.Println(substring(s, runeIndex(s, sub[0]), m))
}

func substring(s string, start int, length int) string {
	runes := []rune(s)
	start = utf8.RuneCountInString(string(runes[:start]))
	end := utf8.RuneCountInString(string(runes[:start+length]))
	return string(runes[start:end])
}

func runeIndex(s string, r rune) int {
	for i, r1 := range s {
		if r1 == r {
			return i
		}
	}
	return -1
}
```

The `substring` function converts the string into a slice of runes and then slices that slice according to the start and length parameters. The `runeIndex` function scans through the string, returning the index of the first occurrence of the rune.

Please note that Go strings are UTF-8 encoded by default, so we do not need to specify any encoding in this program.
