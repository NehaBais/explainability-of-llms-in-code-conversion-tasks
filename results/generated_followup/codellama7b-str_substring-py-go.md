
The errors occur due to the use of rune literals with non-UTF8 characters, which are not supported by the `unicode` package in Go. The `IndexRune` function also requires a UTF8 string as its first argument, but it is provided with an invalid string that contains more than one character.

To fix the errors, you can use a UTF8 encoding for the rune literals and pass a valid UTF8 string to the `IndexRune` function. Here's the corrected code:
```go
package main

import (
	"fmt"
	"unicode/utf8"
)

func main() {
	s := "abcdefgh"
	n, m, char, chars := 2, 3, 'd', 'cd'
	// starting from n=2 characters in and m=3 in length;
	fmt.Println(string([]rune(s)[n-1:n+m-1]))
	// starting from n characters in, up to the end of the string;
	fmt.Println(string([]rune(s)[n-1:]))
	// whole string minus last character;
	fmt.Println(string([]rune(s)[:-1]))
	// starting from a known character char="d" within the string and of m length;
	indx := utf8.IndexRune(string([]rune(s)), rune('d'))
	if indx != -1 {
		fmt.Println(string([]rune(s)[indx : indx+m]))
	} else {
		fmt.Println("Character not found.")
	}
	// starting from a known substring chars="cd" within the string and of m length. 
	indx = utf8.IndexRune(string([]rune(s)), rune('c' + 'd'))
	if indx != -1 {
		fmt.Println(string([]rune(s)[indx : indx+m]))
	} else {
		fmt.Println("Substring not found.")
	}
}
```
In this code, the rune literals are replaced with UTF8-encoded strings using the `string` function. The `IndexRune` function also requires a valid UTF8 string as its first argument, so it's passed the result of converting the string to UTF8.
