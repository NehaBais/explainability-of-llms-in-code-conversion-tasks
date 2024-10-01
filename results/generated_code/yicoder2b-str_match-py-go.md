Here is the Golang equivalent of your Python code:

```Go
package main

import (
	"fmt"
	"strings"
)

func startswith(str, prefix string) bool {
	return strings.HasPrefix(str, prefix)
}

func contains(str, substr string) bool {
	return strings.Contains(str, substr)
}

func endsWith(str, suffix string) bool {
	return strings.HasSuffix(str, suffix)
}

var loc int = 0

func findSubstring(str, sub string) (int, error) {
	lo := strings.Index(str, sub)
	if lo == -1 {
		return -1, fmt.Errorf("substring not found")
	}
	return lo, nil
}

func main() {
	a, err := findSubstring("abcd", "ab")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Printf("found at position %d\n", a)
	}
	b := endsWith("abcd", "cd")
	if b {
		fmt.Println("ends with")
	} else {
		fmt.Println("does not end with")
	}
	c := contains("abab", "bb")
	if c {
		fmt.Println("contains")
	} else {
		fmt.Println("does not contain")
	}
	d := startswith("abab", "ab")
	if d {
		fmt.Println("starts with")
	} else {
		fmt.Println("does not start with")
	}
}
``` 
This Go code mimics your Python functionality. It uses built-in functions from the 'strings' package to achieve similar results. The `findSubstring` function mimics Python's `str.find()`, where it returns the location of a substring in a string if found. It does this by using the `Index` function from the `strings` package which returns the index of the first occurrence of a substring in a string. If no such occurrence is found, it returns -1. The `HasPrefix` and `HasSuffix` functions also mimick Python's `str.startswith()` and `str.endswith()`.
