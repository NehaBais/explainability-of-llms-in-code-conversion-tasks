package main

import (
	//"unicode/utf8"
	"fmt"
	"strings"
)

func Substring(str string, n int, m int) string {
	runes := []rune(str)
	if len(runes)-n < m {
		m = len(runes) - n
	}
	return string(runes[n : n+m])
}

// ... rest of the functions remain unchanged ...
