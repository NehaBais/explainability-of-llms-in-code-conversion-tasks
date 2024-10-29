package main

import (
	"fmt"
	"strings"
	"unicode/utf8"
)

func Substr(input string, start int, length int) string {
	runes := []rune(input)
	return string(runes[start:][:length])
}

func main() {
	var str = "abcdefgh"
	var n = 2
	var m = 3

	// * starting from n characters in and of m length;
	fmt.Println(Substr(str, n, m)) //=> "cde"

	// * starting from n characters in, up to the end of the string;
	fmt.Println(Substr(str, n, utf8.RuneCountInString(str)-n)) // => "cdefgh"

	// * whole string minus last character;
	if len(str) > 0 {
		fmt.Println(str[:(len(str) - 1)]) // => "abcdefg"
	}

	// * starting from a known character within the string and of m length;
	fmt.Println(Substr(str, strings.IndexRune(str, 'b'), m)) //=> "bcd"

	// * starting from a known substring within the string and of m length.
	n = strings.Index(str, "bc")
	if n != -1 {
		fmt.Println(Substr(str, n, m)) // => "bcd"
	}
}
