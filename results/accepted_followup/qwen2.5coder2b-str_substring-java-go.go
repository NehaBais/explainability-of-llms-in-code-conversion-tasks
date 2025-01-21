package main

import (
	"fmt"
)

// Substring function returns a substring from the given string.
func Substring(s string, n int) string {
	return s[n:]
}

// SubstringFromChar function returns a substring starting at the first occurrence of the character c in the string.
func SubstringFromChar(s string, c byte, m int) string {
	r := rune(c)
	index := -1
	for i, r := range s {
		if r == c {
			index = i
			break
		}
	}
	if index == -1 {
		return ""
	}
	return s[index : index+m+1]
}

// SubstringFromSubstr function returns a substring starting at the first occurrence of the substring sub in the string.
func SubstringFromSubstr(s string, substr string, m int) string {
	r := rune(substr[0])
	index := -1
	for i, r := range s {
		if s[i:i+len(substr)] == substr {
			index = i
			break
		}
	}
	if index == -1 {
		return ""
	}
	return s[index : index+m+1]
}

func main() {
	fmt.Println(Substring("abcdef", 3))                 // Output: def
	fmt.Println(Substring("abcdef", 3, 2))              // Output: ef
	fmt.Println(Substring("abcdef", 5))                 // Output: f
	fmt.Println(SubstringFromChar("abcdef", 'd', 2))    // Output: ddf
	fmt.Println(SubstringFromSubstr("abcdef", "bc", 2)) // Output: bcdf
}
