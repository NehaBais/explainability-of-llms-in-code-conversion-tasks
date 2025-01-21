package main

import (
	"fmt"
)

func Substring(str string, n int, m ...int) string {
	runes := []rune(str)
	var start, end int
	if len(m) == 0 {
		start = n
		end = len(runes)
	} else if len(m) == 1 {
		start = n
		end = n + m[0]
	}
	return string(runes[start:end])
}

func main() {
	str := "Hello, world!"
	fmt.Println(Substring(str, 7))               // Starting from the 7th character to the end of the string.
	fmt.Println(Substring(str, 0, 5))            // First 5 characters.
	fmt.Println(Substring(str, 0, len(runes)-1)) // Whole string minus the last character.

	// Corrected line
	charO := rune('o')
	fmt.Println(Substring(str, int(charO)))

	substr := "o"
	substrRune := []rune(substr)[0]
	fmt.Println(Substring(str, int(substrRune)))
}
