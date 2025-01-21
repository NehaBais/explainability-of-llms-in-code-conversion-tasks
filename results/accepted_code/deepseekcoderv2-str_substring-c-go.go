package main

import (
	"fmt"
	"strings"
	"unicode/utf8"
)

func substring(s string, n int, m int) string {
	// check for null s
	if len(s) == 0 {
		return ""
	}
	// negative m to mean 'up to the mth char from right'
	if m < 0 {
		m = len(s) + m - n + 1
	}

	// n < 0 or m < 0 is invalid
	if n < 0 || m < 0 {
		return ""
	}

	// make sure string does not end before n
	// and advance the "s" pointer to beginning of substring
	for ; n > 0; n-- {
		if len(s) == 0 {
			return ""
		}
		r, size := utf8.DecodeRuneInString(s)
		s = s[size:]
	}

	if m > len(s) {
		m = len(s)
	}

	return s[:m]
}

func strWholeLess1(s string) string {
	return substring(s, 0, len(s)-1)
}

func strFromCh(s string, ch rune) int {
	index := strings.IndexRune(s, ch)
	if index == -1 {
		return -1
	}
	return index
}

func strFromStr(s, substr string, m int) string {
	start := strings.Index(s, substr)
	if start == -1 {
		return ""
	}
	return substring(s, start, m)
}

func main() {
	s := "hello world shortest program"
	fmt.Println(substring(s, 12, 5)) // get "short"
	fmt.Println(substring(s, 6, -1)) // get "world shortest program"
	fmt.Println(strWholeLess1(s))    // "... progra"
	index := strFromCh(s, 'w')
	if index != -1 {
		fmt.Println(substring(s, index, 5)) // "world"
	}
	fmt.Println(strFromStr(s, "ro", 3)) // "rog"
}
