Here is your Python code converted to Golang:

```go
package main

import (
	"fmt"
	"unicode/utf8"
)

func substring(s string, n int, m int) {
	r := []rune(s)
	if n <= len(r) && n+m-1 <= len(r) {
		fmt.Println(string(r[n-1 : n+m-1]))
	}

	if n <= len(r) {
		fmt.Println(string(r[n-1:]))
	}

	if 0 < len(r) {
		fmt.Println(string(r[:len(r)-1]))
	}

	char := rune('d')
	for i, r := range r {
		if r == char && i+m-1 <= len(r) {
			fmt.Println(string(r[i : i+m]))
		}
	}

	chars := []rune("cd")
	for i := 0; i < len(r); i++ {
		if n+len(chars)-1 <= len(r) && utf8.RuneCountInString(s[i:i+len(chars)]) == len(chars) {
			fmt.Println(string(r[i : i+len(chars)]))
		}
	}
}

func main() {
	s := "abcdefgh"
	n, m := 2, 3
	substring(s, n, m)
}
```

Note: Golang doesn't support negative indexing like Python. So we need to use `len()` function to check if the index is valid before accessing the string slice.

The `rune` type represents a Unicode code point. The `utf8.RuneCountInString()` function is used to get the number of runes in a string, which is essential when dealing with Unicode characters.

Please note that you need to call the `substring` function for your specific case as the given strings "d" and "cd" are hardcoded inside the function. You can replace them with variables as per your needs.
