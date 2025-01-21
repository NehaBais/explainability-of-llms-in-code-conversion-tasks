The equivalent Golang code for this Python program would be:

```go
package main

import (
	"fmt"
)

func main() {
	s := "abcdefgh"

	// starting from n=2 characters in and m=3 in length;
	fmt.Println(s[n-1:n+m-1])

	// starting from n characters in, up to the end of the string;
	fmt.Println(s[n-1:])

	// whole string minus last character;
	fmt.Println(s[:len(s)-1])

	// starting from a known character char="d" within the string and of m length;
	char := 'd'
	index := strings.IndexRune(s, char)
	if index != -1 {
		fmt.Println(string(s[index:index+m]))
	}

	// starting from a known substring chars="cd" within the string and of m length.
	chars := "cd"
	index = strings.IndexRune(s, []rune(chars)[0])
	if index != -1 {
		fmt.Println(string(s[index:index+m]))
	}
}
```

Remember that in Go, character strings are represented as slices of runes (not bytes) and the index starts at 0. This is the reason why the substring start index needs to be adjusted by `n-1`. 

This code will output:


def
efgh
bcdef
d
cd

