Below is the Go code that performs string matching based on the problem requirements. The code uses the `strings` package in Go.

```Go
package main

import (
	"fmt"
	"strings"
)

func main() {
	s1 := "abcd"
	s2 := "ab"
	fmt.Println(s1.startswith(s2)) // returns True

	s3 := "zn"
	fmt.Println(s1.endswith(s3)) // returns False

	s4 := "abab"
	s5 := "bb"
	fmt.Println(s4.contains(s5))  // returns false
	fmt.Println(s4.contains("ab")) // returns true
	
	locs := s4.findAllOccurrences("ab")
	for _, loc := range locs {
		fmt.Println(loc)
	}
}

func (s string) startswith(sub string) bool {
	return strings.HasPrefix(s, sub)
}

func (s string) endswith(sub string) bool {
	return strings.HasSuffix(s, sub)
}

func (s string) contains(sub string) bool {
	return strings.Contains(s, sub)
}

func (s string) findAllOccurrences(sub string) []int {
	var locs []int
	for i := 0; ; i = i + len(sub) {
		j := strings.Index(s[i:], sub)
		if j < 0 {
			break
		}
		locs = append(locs, i+j)
	}
	return locs
}
```
Please note that Go does not have a built-in function like Python's `find()` that returns the location of an occurrence. Therefore, I've defined a custom method `findAllOccurrences` to find all occurrences of a substring in a string and store their locations.

In this code:
- For "startswith" operation, we use the built-in Go function `strings.HasPrefix`.
- For "endswith" operation, we use the built-in Go function `strings.HasSuffix`.
- For "contains" operation, we use the built-in Go function `strings.Contains`.
- For finding all occurrences of a string within another, we implement our own method.
