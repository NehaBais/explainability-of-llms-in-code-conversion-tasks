 Sure, here is the equivalent Golang code for the given Python requirements:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	// Test cases for startsWith
	fmt.Println(strings.HasPrefix("abcd", "ab")) // returns True

	// Test cases for endsWith
	fmt.Println(strings.HasSuffix("abcd", "zn")) // returns False

	// Test cases for contains (at any location)
	fmt.Println(strings.Contains("abab", "bb")) // returns False
	fmt.Println(strings.Contains("abab", "ab")) // returns True

	// Find the first occurrence of a substring
	loc := strings.Index("abab", "bb") // returns -1
	fmt.Println(loc)

	loc = strings.Index("abab", "ab") // returns 0
	fmt.Println(loc)

	// Find subsequent occurrences of a substring
	loc = strings.Index("abab", "ab") // returns 0
	if loc != -1 {
		nextLoc := strings.Index("abab", "ab", loc+len("ab")) // returns 2
		fmt.Println(nextLoc)
	}
}
```

This Golang code covers the three types of string matching as described:
1. `strings.HasPrefix` to check if the first string starts with the second string.
2. `strings.HasSuffix` to check if the first string ends with the second string.
3. `strings.Contains` to check if the first string contains the second string at any location.

For part 2, it uses `strings.Index` to find the index of the substring. If the substring is not found, `strings.Index` returns -1. For subsequent occurrences, you can use `strings.Index` with an offset starting from the end of the last found position plus one.
