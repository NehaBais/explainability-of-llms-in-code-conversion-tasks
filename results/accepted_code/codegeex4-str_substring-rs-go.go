package main

import (
	"fmt"
	"strings"
	"unicode/utf8"
)

func main() {
	s := "abc文字化けdef"
	n := 2
	m := 3

	// Print 3 characters starting at index 2 (c文字)
	fmt.Println(getSubstring(s, n, m))

	// Print all characters starting at index 2 (c文字化けdef)
	fmt.Println(getSubstring(s, n, len([]rune(s))))

	// Print all characters except the last (abc文字化けde)
	fmt.Println(getSubstringExceptLastChar(s))

	// Print 3 characters starting with 'b' (bc文)
	cpos := strings.Index(s, "b")
	fmt.Println(getSubstring(s[cpos:], 0, m))

	// Print 3 characters starting with "けd" (けde)
	spos := strings.Index(s, "けd")
	fmt.Println(getSubstring(s[spos:], 0, m))
}

func getSubstring(str string, start int, length int) string {
	runeStr := []rune(str)
	var result string

	for i := start; i < len(runeStr) && length > 0; i++ {
		result += string(runeStr[i])
		length--
	}
	return result
}

func getSubstringExceptLastChar(str string) string {
	runeStr := []rune(str)
	if len(runeStr) == 0 {
		return ""
	}
	return string(runeStr[0 : len(runeStr)-1])
}
