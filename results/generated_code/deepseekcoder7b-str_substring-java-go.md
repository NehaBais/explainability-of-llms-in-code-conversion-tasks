The equivalent Go code for the Java methods you've provided can be found below:

```go
package main

import (
	"strings"
    "unicode/utf8"
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
    if firstOccurence+m > len(runes){
        m = len(runes)-firstOccurence
    }
	return string(runes[firstOccurence : firstOccurence+m])
}

func SubstringWithKnownSubstring(str string, subStr string, m int) string {
	firstOccurence := strings.Index(str, subStr)
	if firstOccurence == -1 {
		return ""
	} 
    runes := []rune(str)  
    if firstOccurence+len([]rune(subStr))+m > len(runes){
        m = len(runes)-firstOccurence-len([]rune(subStr))
    }
	return string(runes[firstOccurence : firstOccurence+len([]rune(subStr))+m])
}
```
Please note that in Go, strings are UTF-8 by default and thus we need to convert the string to rune (which can be thought of as an integer that represents a Unicode character) before doing any operations on them. This is because Go's standard library does not support substring operation directly for unicode characters like Java's substring method, hence converting it into runes allows us to correctly implement these methods.

