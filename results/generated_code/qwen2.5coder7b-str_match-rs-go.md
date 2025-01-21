Here is your requested code in Golang:

```go
package main

import (
	"fmt"
)

func printMatch(possibleMatch bool, index int) {
	if possibleMatch {
		fmt.Printf("Found match at pos %d\n", index)
	} else {
		fmt.Println("Did not find any matches")
	}
}

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	// Determining if the first string starts with second string
	printMatch(s1.HasPrefix(s3), 0)

	// Determining if the first string contains the second string at any location
	for i := 0; i < len(s1); i++ {
		if s1[i:i+len(s3)] == s3 {
			fmt.Printf("Found match at pos %d\n", i)
		}
	}

	// Determining if the first string ends with the second string
	printMatch(s2.HasSuffix(s3), 0)
}
```
This code will perform each of the requested operations. The `HasPrefix` and `HasSuffix` methods are used to check whether a string starts or ends with another string respectively in Go. For checking whether a string contains another string, we manually search through the first string for occurrences of the second string.

Please note that Go does not have an equivalent method like Rust's `find`, so we handle it using manual iteration and comparison. If you require more sophisticated string matching, consider using Go's built-in `regexp` package.
