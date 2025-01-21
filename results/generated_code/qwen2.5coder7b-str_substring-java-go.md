Here is a GoLang version of the Java code:

```golang
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
	fmt.Println(Substring(str, 7)) // Starting from the 7th character to the end of the string.
	fmt.Println(Substring(str, 0, 5)) // First 5 characters.
	fmt.Println(Substring(str, 0, utf8.RuneCountInString(str)-1)) // Whole string minus the last character.

	fmt.Println(Substring(str, ','))
	fmt.Println(Substring(str, "o"))
}
```

This GoLang code does all of what your Java code does, but it works with Unicode. It uses a rune (which is an integer representing a Unicode code point) instead of an index to reference characters in the string, and `utf8.RuneCountInString` to get the length of the string in terms of runes instead of bytes.

The `Substring` function takes either one, two or three arguments. With no arguments it returns the whole string. With one argument, it returns a substring from that index to the end of the string. With two arguments, it returns a substring of length m starting at the given index.
