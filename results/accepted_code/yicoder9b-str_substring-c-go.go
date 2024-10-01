package main

import (
	"fmt"
	"strings"
)

func substring(s string, n int, m int) string {
	if len(s) <= n || m == 0 {
		return ""
	} else if m < 0 {
		m = len(s) + m - n + 1
	}
	return s[n : n+m]
}

func str_wholeless1(s string) string {
	return substring(s, 0, len(s)-1)
}

func str_fromch(s string, ch rune, m int) string {
	pos := strings.IndexRune(s, ch)
	if pos == -1 {
		return ""
	} else {
		return substring(s, pos, m)
	}
}

func str_fromstr(s string, in string, m int) string {
	pos := strings.Index(s, in)
	if pos == -1 {
		return ""
	} else {
		return substring(s, pos, m)
	}
}

func main() {
	const s = "hello world shortest program"
	fmt.Println(substring(s, 12, 5))     // get "short"
	fmt.Println(substring(s, 6, -1))     // get "world shortest program"
	fmt.Println(str_wholeless1(s))       // "... progra"
	fmt.Println(str_fromch(s, 'w', 5))   // "world"
	fmt.Println(str_fromstr(s, "ro", 3)) // "rog"
}
