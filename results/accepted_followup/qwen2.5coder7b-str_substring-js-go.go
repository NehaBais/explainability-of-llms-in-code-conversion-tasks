package main

import (
	"fmt"
	"strings"
)

func getSubstring(s string, start int, length int) (string, error) {
	runes := []rune(s)
	if start < 0 || start >= len(runes) || start+length > len(runes) {
		return "", fmt.Errorf("invalid start index or length")
	}
	return string(runes[start : start+length]), nil
}

func main() {
	str := "abcdefgh"
	n := 2
	m := 3

	// * starting from n characters in and of m length;
	substr, _ := getSubstring(str, n, m)
	fmt.Println(substr) // => "cde"

	// * starting from n characters in, up to the end of the string;
	substr, _ = getSubstring(str, n, utf8.RuneCountInString(str)-n)
	fmt.Println(substr) // => "cdefgh"

	// * whole string minus last character;
	substr, _ = getSubstring(str, 0, utf8.RuneCountInString(str)-1)
	fmt.Println(substr) // => "abcdefg"

	// * starting from a known character within the string and of m length
	index := strings.IndexRune(str, 'b')
	if index != -1 {
		substr, _ = getSubstring(str, index, m)
		fmt.Println(substr) // => "bcd"
	}

	// * starting from a known substring within the string and of m length.
	index = strings.Index(str, "bc")
	if index != -1 {
		substr, _ = getSubstring(str, index, m)
		fmt.Println(substr) // => "bcd"
	}
}
