**Error Explanation:** The error occurs because the `Substring` function expects the second argument to be an integer, but "o" is being passed as a string.

**Fix Explanation:** Convert the string "o" to its rune value using the `rune()` function before passing it as the second argument.

Here is the corrected code:

```go
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
	fmt.Println(Substring(str, 7))                                // Starting from the 7th character to the end of the string.
	fmt.Println(Substring(str, 0, 5))                             // First 5 characters.
	fmt.Println(Substring(str, 0, len(runes)-1)) // Whole string minus the last character.

	// Corrected line
	charO := rune('o')
	fmt.Println(Substring(str, int(charO)))

	substr := "o"
	substrRune := []rune(substr)[0]
	fmt.Println(Substring(str, int(substrRune)))
}
```

Note: I've replaced `utf8.RuneCountInString(str)-1` with `len(runes)-1` as the length of a rune slice is more efficient than calling a function for each string.
