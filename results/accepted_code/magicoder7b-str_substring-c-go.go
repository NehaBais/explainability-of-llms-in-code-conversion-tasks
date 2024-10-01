package main

import (
	"fmt"
	"strings"
)

func substring(s string, n int, m int) *string {
	var result string

	// check for null s
	if len(s) == 0 {
		return &result
	}

	// negative m to mean 'up to the mth char from right'
	if m < 0 {
		m = len(s) + m - n + 1
	}

	// n < 0 or m < 0 is invalid
	if n < 0 || m < 0 {
		return &result
	}

	for ; n > 0; n-- {
		if s[n-1] == '\u0000' {
			// string ends before n: invalid
			return &result
		}
	}

	result = ""
	mLength := len(s)
	if m > mLength {
		m = mLength
	}
	result = s[n : n+m]
	return &result
}

func str_wholeless1(s string) *string {
	return substring(s, 0, len(s)-1)
}

func str_fromch(s string, ch byte, m int) *string {
	return substring(s, strings.IndexRune(s, rune(ch)), m)
}

func str_fromstr(s string, in string, m int) *string {
	return substring(s, strings.Index(s, in), m)
}

func main() {
	s := "hello world shortest program"

	TEST := func(A *string) {
		r := A
		if r == "" {
			fmt.Println("--error--")
		} else {
			fmt.Println(*r)
		}
	}

	TEST(substring(s, 12, 5))      // get "short"
	TEST(substring(s, 6, -1))      // get "world shortest program"
	TEST(str_wholeless1(&s))       // "... progra"
	TEST(str_fromch(&s, 'w', 5))   // "world"
	TEST(str_fromstr(&s, "ro", 3)) // "rog"
}
