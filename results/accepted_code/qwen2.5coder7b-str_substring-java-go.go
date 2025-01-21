package main

import (
	"fmt"
	"unicode/utf8"
)

func Substring(str string, n int, m ...int) string {
	runes := []rune(str)
	var start, end int
	if len(m) == 0 {
		start = n
		end = utf8.RuneCountInString(str)
	} else if len(m) == 1 {
		start = n
		end = n + m[0]
	}
	return string(runes[start:end])
}

func main() {
	str := "Hello, world!"
	fmt.Println(Substring(str, 7))                                // Starting from the 7th character to the end of the string.
	fmt.Println(Substring(str, 0, 5))                             // First 5 characters.
	fmt.Println(Substring(str, 0, utf8.RuneCountInString(str)-1)) // Whole string minus the last character.

	fmt.Println(Substring(str, ','))
	fmt.Println(Substring(str, "o"))
}
