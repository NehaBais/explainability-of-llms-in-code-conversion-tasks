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
				return str[i : i+m]
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
			return str[i : i+m+1]
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
