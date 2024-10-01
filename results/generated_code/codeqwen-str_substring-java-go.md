Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"unicode/utf8"
)

func Substring(str string, n int, m int) string {
	runes := []rune(str)
	if len(runes)-n < m {
		m = len(runes) - n
	}
	return string(runes[n : n+m])
}

func SubstringFromStartToEnd(str string, n int) string {
	runes := []rune(str)
	if len(runes)-n < 0 {
		n = 0
	}
	return string(runes[n:])
}

func SubstringWholeStringMinusLastCharacter(str string) string {
	runes := []rune(str)
	return string(runes[:len(runes)-1])
}

func SubstringFromKnownCharacter(str string, c rune, m int) (string, error) {
	index := strings.IndexRune(str, c)
	if index == -1 {
		return "", fmt.Errorf("character not found in the string")
	}
	if len(runes)-index < m {
		m = len(runes) - index
	}
	return string(runes[index : index+m]), nil
}

func SubstringFromKnownSubstring(str string, subStr string, m int) (string, error) {
	index := strings.Index(str, subStr)
	if index == -1 {
		return "", fmt.Errorf("substring not found in the string")
	}
	if len(runes)-index < m {
		m = len(runes) - index
	}
	return string(runes[index : index+m]), nil
}
```

Please note that Golang does not natively support UTF-8 or UTF-16. However, you can work with Unicode code points using the `unicode/utf8` package to handle multibyte characters such as emojis.
