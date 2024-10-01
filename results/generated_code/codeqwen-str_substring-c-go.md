Golang doesn't have a direct equivalent of C's `\0`, so we can use the special rune type which in Go represents a Unicode character. Here is how you would write your code:

```go
package main

import (
	"fmt"
	"strings"
)

func substring(s string, n int, m int) (string, error) {
	if s == "" || n < 0 || m < 0 {
		return "", fmt.Errorf("invalid input")
	}

	// If m is negative, it means we want to get the substring from n to the end of the string
	if m < 0 {
		m = len(s) + m - n + 1
	}

	// Get a slice of runes starting from index n and length m
	result := []rune(s)[n : n+m]

	return string(result), nil
}

func strWholeless1(s string) (string, error) {
	if s == "" {
		return "", fmt.Errorf("empty string")
	}
	return substring(s, 0, len(s)-1)
}

func strFromCh(s string, ch rune, m int) (string, error) {
	index := strings.IndexRune(s, ch)
	if index == -1 {
		return "", fmt.Errorf("character not found in string")
	}
	return substring(s, index, m)
}

func strFromStr(s, in string, m int) (string, error) {
	index := strings.Index(s, In)
	if index == -1 {
		return "", fmt.Errorf("substring not found in string")
	}
	return substring(s, index, m)
}

func main() {
	s := "hello world shortest program"

	result, _ := strWholeless1(s)
	fmt.Println(result) // "... progra"

	result, _ = strFromCh(s, 'w', 5)
	fmt.Println(result) // "world"

	result, _ = strFromStr(s, "ro", 3)
	fmt.Println(result) // "rog"

	substringResult, _ := substring(s, 12, 5)
	fmt.Println(substringResult) // "short"
}
```
Please note that this code will throw an error if the string is empty or if any of the parameters are invalid (such as negative `n` or `m`). You may want to handle these errors accordingly in your program.
