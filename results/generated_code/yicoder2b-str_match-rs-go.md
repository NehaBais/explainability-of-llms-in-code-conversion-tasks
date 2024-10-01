Sure, here is how you can convert this code to Golang:

```go
package main

import (
	"fmt"
	"strings"
)

func printMatch(possibleMatch *int) {
    if possibleMatch == nil {
        fmt.Println("Did not find any matches")
    } else {
        fmt.Printf("Found match at pos %d\n", *possibleMatch)
    }
}

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	// Determining if the first string starts with second string
	if strings.HasPrefix(s1, s3) {
		fmt.Println("Successfully verified: s1 starts with s3")
	} else {
		fmt.Println("Verification failed: s1 does not start with s3")
	}

	// Determining if the first string contains the second string at any location
	if strings.Contains(s1, s3) {
		fmt.Println("Successfully verified: s1 contains s3")
	} else {
		fmt.Println("Verification failed: s1 does not contain s3")
	}
	possibleMatch := s1.IndexOf(s3)
	printMatch(&possibleMatch) // Found match at pos 0
	printMatch(&s2.IndexOf(s3)) // Did not find any matches

	// Determining if the first string ends with the second string
	if strings.HasSuffix(s2, s3) {
		fmt.Println("Successfully verified: s2 ends with s3")
	} else {
		fmt.Println("Verification failed: s2 does not end with s3")
	}
}
```
The main differences to the Rust version are related to the handling of slices in Go (the equivalent of strings in Rust) and the use of the `strings` package for string-related functions.
