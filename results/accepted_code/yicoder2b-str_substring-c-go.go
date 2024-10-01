package main

import (
	"fmt"
	"strings"
	"unicode"
)

func substring(s string, n int, m ptrdiff_t) *string {
	var result *string
	if lenS := len(s); n < 0 {
		n = lenS + n - 1
	}
	if n >= lenS || m < 0 {
		return nil
	}
	for _, ch := range s[:n] {
		if ch == '\0' {
			return nil
		}
	}
	result = &s[n : n+m]
	return result
}

func strWholeLess1(s string) *string {
	return substring(s, 0, len(s)-1)
}

func strFromCh(s string, ch rune, m ptrdiff_t) *string {
	return substring(s, indexOf(s, ch), m)
}

func strFromStr(s string, str string, m ptrdiff_t) *string {
	return substring(s, indexOf(s, str), m)
}

func indexOf(s string, ch rune) int {
	for idx, r := range s {
		if r == ch {
			return idx
		}
	}
	return -1
}

func main() {
	s := "hello world shortest program"
	fmt.Println(substring(s, 12, 5)) // prints: "shortest"
	fmt.Println(substring(s, 6, -1))  // prints: "world shortest program"
	fmt.Println(strWholeLess1(s))     // prints: "hello world shortest progra"
	fmt.Println(strFromCh(s, 'w', 5)) // prints: "world"
	fmt.Println(strFromStr(s, "ro", 3)) // prints: "rog"
}