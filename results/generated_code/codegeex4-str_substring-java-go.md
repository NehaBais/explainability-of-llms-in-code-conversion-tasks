In Go language, you can use the `unicode/utf8` package to work with Unicode code points. 

Here is the equivalent conversion of your Java code:

```go
package main

import (
	"fmt"
	"unicode/utf8"
)

func Substring(str string, n, m int) string {
	return str[n : n+m]
}

func SubstringToLastChar(str string) string {
	runeCount := utf8.RuneCountInString(str)
	return str[:runeCount-1]
}

func SubstringFromStartToEnd(str string, n int) string {
	return str[n:]
}

func SubstringFromChar(str string, c rune, m int) string {
	index := IndexOfRunes(str, c)
	if index == -1 {
		return ""
	}
	return str[index : index+m+1]
}

func SubstringFromSubstr(str, sub string, m int) string {
	index := IndexOfString(str, sub)
	if index == -1 {
		return ""
	}
	return str[index : index+m+1]
}

func IndexOfRunes(s string, ch rune) int {
	for i, r := range s {
		if r == ch {
			return i
		}
	}
	return -1
}

func IndexOfString(s, substr string) int {
	i := 0
	for {
		next := strings.Index(s[i:], substr)
		if next == -1 {
			break
		}
		i += next
		if i >= len(s) || s[i:i+len(substr)] == substr {
			return i
		}
		i++
	}
	return -1
}

func main() {
	fmt.Println(Substring("Hello, 世界", 2, 5))
	fmt.Println(SubstringToLastChar("Hello, 世界"))
	fmt.Println(SubstringFromStartToEnd("Hello, 世界", 2))
	fmt.Println(SubstringFromChar("Hello, 世界", '世', 1))
	fmt.Println(SubstringFromSubstr("Hello, 世界", "世界", 1))
}
```

In Go programming language, string are treated as sequence of bytes and not logical characters. Therefore, to find a substring starting from a character or substring, we need to convert the string into slice of runes first. This is why there are `IndexOfRunes` and `IndexOfString` helper functions.

`utf8.RuneCountInString(str)` function is used to count the number of runes in a string. It's a way to count logical characters, not bytes.

The provided code uses UTF-8 encoding which works with any Unicode character (whether in Basic Multilingual Plane or above it).
