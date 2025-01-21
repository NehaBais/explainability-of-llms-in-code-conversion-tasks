package main

import (
	"fmt"
)

func substring(s string, n int, m int) string {
	runes := []rune(s)
	if n < 0 || m < 0 || len(runes) < n+m { // invalid
		return ""
	}
	// convert to runes and extract the desired slice
	result := runes[n : n+m]
	return string(result)
}

func str_wholeless1(s string) string {
	if len(s) == 0 { // invalid
		return ""
	}
	// convert to runes, take all but the last and convert back to string
	return s[:len(s)-1]
}

func str_fromch(s string, ch rune, m int) string {
	index := strings.IndexRune(s, ch)
	if index == -1 || len(s) < m+index { // invalid or no substring of length m found
		return ""
	}
	// convert to runes and extract the desired slice
	return s[index : index+m]
}

func str_fromstr(s string, substr string, m int) string {
	index := strings.Index(s, substr)
	if index == -1 || len(s) < m+index { // invalid or no substring of length m found
		return ""
	}
	// extract the desired slice
	return s[index : index+m]
}

func main() {
	s := "hello world shortest program"
	fmt.Println(substring(s, 12, 5))     // get  "short"
	fmt.Println(str_wholeless1(s))       // get  "... progra"
	fmt.Println(str_fromch(s, 'w', 5))   // get  "world"
	fmt.Println(str_fromstr(s, "ro", 3)) // get  "rog"
}
