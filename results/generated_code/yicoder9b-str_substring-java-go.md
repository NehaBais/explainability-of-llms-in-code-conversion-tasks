In Golang the string manipulation functions are a bit different than Java because it does not have built-in substring function that allows specifying index directly to the specific Unicode code point. Instead, you should use `unicode.Runefunc` to iterate over Unicode code points in the string and find the nth character's index.

Here is a Go version of your Java functions:
```go
package main

import (
	"fmt"
	"unicode"
)

func Substring(str string, n int, m int) string {
	count := 0
	for i, r := range str {
		if unicode.IsPrint(r) {
			count++
			if count == n {
				return str[i:i+m]
			}
		}
	}
	return ""
}
func Substring(str string, n int) string {
	return str[n:]
}
func Substring(str string) string {
	return str[:len(str)-1]
}
func Substring(str string, c rune, m int) string {
	for i, r := range str {
		if r == c {
			return str[i:i+m+1]
		}
	}
	return ""
}
func Substring(str string, sub string, m int) string {
	index := strings.Index(str, sub)
	if index >= 0 {
		return str[index : index+m+len(sub)]
	}
	return ""
}
```
