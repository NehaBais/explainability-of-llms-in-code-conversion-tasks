The error occurred because of importing "unicode/utf8" while it's not being used anywhere else in the program. As per the requirements, we have to convert string into runes (represented as integers) which is a part of unicode character. 

However, there seems to be an unnecessary import and usage. The code can be simplified by removing this import or replacing it with another way of converting strings to rune that suits your needs. In the provided GoLang code, "unicode/utf8" is not being used anywhere in the implementation so we could simply remove it from the imports section.

Here's the corrected version:

```go
package main

import (
	"strings"
)

func Substring(str string, n int, m int) string {
	runes := []rune(str)
	return string(runes[n : n+m])
}

func SubstringFromN(str string, n int) string {
	runes := []rune(str)
	return string(runes[n:])
}

func SubstringExceptLastChar(str string) string {
	runes := []rune(str)
	return string(runes[:len(runes)-1])
}

func SubstringWithKnownCharacter(str string, c rune, m int) string {
	firstOccurence := strings.IndexRune(str, c)
	if firstOccurence == -1 {
		return ""
	}
	runes := []rune(str)
	if firstOccurence+m > len(runes) {
		m = len(runes) - firstOccurence
	}
	return string(runes[firstOccurence : firstOccurence+m])
}

func SubstringWithKnownSubstring(str string, subStr string, m int) string {
	firstOccurence := strings.Index(str, subStr)
	if firstOccurence == -1 {
		return ""
	}
	runes := []rune(str)
	if firstOccurence+len([]rune(subStr))+m > len(runes) {
		m = len(runes) - firstOccurence - len([]rune(subStr))
	}
	return string(runes[firstOccurence : firstOccurence+len([]rune(subStr))+m])
}
```

