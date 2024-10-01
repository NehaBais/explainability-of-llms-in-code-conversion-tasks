Here is how you can convert the given Rust code to Golang.

```go
package main

import (
	"fmt"
	"strings"
)

func printMatch(possibleMatch int) {
	if possibleMatch != -1 {
		fmt.Printf("Found match at pos %d\n", possibleMatch)
	} else {
		fmt.Println("Did not find any matches")
	}
}

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	// Determining if the first string starts with second string
	if strings.HasPrefix(s1, s3) {
		fmt.Println("The first string starts with the second string")
	} else {
		fmt.Println("The first string does not start with the second string")
	}

	// Determining if the first string contains the second string at any location
	if strings.Contains(s1, s3) {
		fmt.Println("The first string contains the second string")
	} else {
		fmt.Println("The first string does not contain the second string")
	}

	// Print the location of the match 
	printMatch(strings.Index(s1, s3)) // Found match at pos 0
	printMatch(strings.Index(s1, s2)) // Did not find any matches

	// Determining if the first string ends with the second string
	if strings.HasSuffix(s1, s3) {
		fmt.Println("The first string ends with the second string")
	} else {
		fmt.Println("The first string does not end with the second string")
	}
}
```

Golang has different built-in functions for these operations than Rust, so here is how you can do it in Golang:

1) Use `strings.HasPrefix()` and `strings.HasSuffix()` to check if the first string starts or ends with the second string respectively.
2) Use `strings.Contains()` to check if the first string contains the second string.
3) Use `strings.Index()` to find the location of the match in the first string. If there is no match, it will return -1, so we need to use an `if` statement instead of a `match`.
