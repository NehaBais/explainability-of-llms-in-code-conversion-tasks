package main

import (
	"bytes"
	"strings"
)

func Substring(str string, n int, m int) string {
	return str[n : n+m]
}

func Substring2(str string, n int) string {
	return str[n:]
}

func Substring3(str string) string {
	return str[:len(str)-1]
}

func Substring4(str string, c byte, m int) string {
	index := bytes.IndexByte([]byte(str), c)
	if index == -1 {
		// Handle invalid character
		return ""
	}
	return str[index : index+m+1]
}

func Substring5(str string, sub string, m int) string {
	index := strings.Index(str, sub)
	if index == -1 {
		// Handle missing substring
		return ""
	}
	return str[index : index+m+1]
}
