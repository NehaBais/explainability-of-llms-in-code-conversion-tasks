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
