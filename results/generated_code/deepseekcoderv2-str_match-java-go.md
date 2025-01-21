 Sure, here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	// Test cases for startsWith
	fmt.Println(strings.HasPrefix("abcd", "ab")) // returns true

	// Test cases for endsWith
	fmt.Println(strings.HasSuffix("abcd", "zn")) // returns false

	// Test cases for contains
	fmt.Println(strings.Contains("abab", "bb")) // returns false
	fmt.Println(strings.Contains("abab", "ab")) // returns true

	// Test cases for indexOf with single occurrence
	index := strings.Index("abab", "bb") // returns -1
	fmt.Println(index)
	index = strings.Index("abab", "ab") // returns 0
	fmt.Println(index)

	// Test cases for indexOf with multiple occurrences
	loc := 0
	for {
		idx := strings.Index("abab", "ab", loc)
		if idx == -1 {
			break
		}
		fmt.Println(idx)
		loc = idx + 1
	}
}
```

This Go code performs the same operations as your Java code:
1. Determines if the first string starts with the second string using `strings.HasPrefix`.
2. Determines if the first string contains the second string at any location using `strings.Contains`.
3. Determines if the first string ends with the second string using `strings.HasSuffix`.
4. Finds the index of the first occurrence of a substring within a string using `strings.Index`, and handles multiple occurrences by iterating through the string starting from the last found position.
