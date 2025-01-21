The errors occur because `utf8.IndexRune` and `utf8.Index` are not recognized, likely due to missing imports or a typo in their names.

Fix: Ensure that the correct functions from the `unicode/utf8` package are imported and used properly.

Corrected Code:

```go
package main

import (
	"fmt"
	"unicode/utf8"
)

func substring(s string, n int, m int) (string, error) {
	if len(s) == 0 || n < 0 || m < 0 {
		return "", fmt.Errorf("invalid input")
	}

	runes := []rune(s)
	if n >= utf8.RuneCountInString(s) {
		return "", fmt.Errorf("n is out of bounds")
	}

	startIndex := n
	if m < 0 {
		m = len(runes) + m - startIndex + 1
	}

	endIndex := startIndex + m
	if endIndex > len(runes) {
		endIndex = len(runes)
	}

	return string(runes[startIndex:endIndex]), nil
}

func strWholeLess1(s string) (string, error) {
	return substring(s, 0, len(s)-1)
}

func strFromCh(s string, ch rune) (string, error) {
	index := utf8.IndexRune(s, ch)
	if index == -1 {
		return "", fmt.Errorf("character not found")
	}
	return substring(s, index, -1)
}

func strFromStr(s string, in string) (string, error) {
	index := utf8.Index(s, []byte(in))
	if index == -1 {
		return "", fmt.Errorf("substring not found")
	}
	return substring(s, index, -1)
}

func test(a func() (string, error)) {
	r, err := a()
	if err != nil {
		fmt.Println("--error--")
	} else {
		fmt.Println(r)
	}
}

func main() {
	s := "hello world shortest program"

	test(func() (string, error) { return substring(s, 12, 5) }) // get "short"
	test(func() (string, error) { return substring(s, 6, -1) }) // get "world shortest program"
	test(strWholeLess1)                                         // "... progra"
	test(func() (string, error) { return strFromCh(s, 'w') })   // "world"
	test(func() (string, error) { return strFromStr(s, "ro") }) // "rog"
}
```
