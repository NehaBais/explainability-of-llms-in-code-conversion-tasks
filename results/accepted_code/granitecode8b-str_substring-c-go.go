package main

import (
	"fmt"
	"unicode/utf8"
)

func substring(s string, n int, m int) string {
	if len(s) == 0 || n < 0 || m < 0 {
		return ""
	}
	r, size := utf8.DecodeRuneInString(s[n:])
	s = s[n+size:]
	for i := 0; i < m && len(s) > 0; i++ {
		r, size = utf8.DecodeRuneInString(s)
		s = s[size:]
	}
	return string(r)
}
func strWholeless1(s string) string {
	return substring(s, 0, len(s)-1)
}
func strFromch(s string, ch rune, m int) string {
	for i := 0; i < len(s); i++ {
		r, size := utf8.DecodeRuneInString(s[i:])
		s = s[size:]
		if r == ch {
			return substring(s, i, m)
		}
	}
	return ""
}
func strFromstr(s string, in string, m int) string {
	for i := 0; i < len(s)-len(in)+1; i++ {
		if s[i:i+len(in)] == in {
			return substring(s, i, m)
		}
	}
	return ""
}
func main() {
	s := "hello world shortest program"

	fmt.Println(substring(s, 12, 5))    // get "short"
	fmt.Println(substring(s, 6, -1))    // get "world shortest program"
	fmt.Println(strWholeless1(s))       // "... progra"
	fmt.Println(strFromch(s, 'w', 5))   // "world"
	fmt.Println(strFromstr(s, "ro", 3)) // "rog"
}
