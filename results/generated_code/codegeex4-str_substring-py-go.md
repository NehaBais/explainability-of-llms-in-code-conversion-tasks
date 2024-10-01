In Go, strings are UTF-8 encoded and there's no direct method to handle Unicode code points as in Python. However, we can use "golang.org/x/text/unicode/norm" package which provides a way to iterate over runes (Unicode code points).

Below is the equivalent of your python code:

```go
package main

import (
	"fmt"
	"golang.org/x/text/unicode/norm"
)

func main() {
	s := []rune("abcdefgh")
	n, m := 2, 3
	char, chars := 'd', "cd"

	// starting from n=2 characters in and m=3 in length;
	fmt.Println(string(s[n-1 : n+m]))

	// starting from n characters in, up to the end of the string;
	fmt.Println(string(s[n-1:]))

	// whole string minus last character;
	fmt.Println(string(s[:len(s)-1]))

	indx := -1
	for i, ch := range s {
		if ch == char || string(ch) == chars {
			indx = i
			break
		}
	}

	if indx != -1 {
		// starting from a known character within the string and of m length;
		fmt.Println(string(s[indx : indx+m]))

		// starting from a known substring within the string and of m length.
		fmt.Println(string(s[indx : indx+m]))
	} else {
		fmt.Println("Character/substring not found")
	}
}
```
Please note that this code will only work for ASCII strings. For Unicode strings you might need to handle edge cases or use a more complex approach. It's also worth mentioning that Go does not provide the same level of support for Unicode as Python and the standard library functions may behave differently when dealing with Unicode characters.
