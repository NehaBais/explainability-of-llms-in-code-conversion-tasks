 Below is a Golang equivalent of your Rust code:

```go
package main

import (
	"fmt"
	"strings"
)

func printMatch(possibleMatch *int) {
	if possibleMatch != nil {
		fmt.Printf("Found match at pos %d\n", *possibleMatch)
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
		fmt.Println("Found match")
	}

	// Determining if the first string contains the second string at any location
	pos := strings.Index(s1, s3)
	printMatch(&pos) // Found match at pos 0

	pos = strings.Index(s1, s2)
	if pos == -1 {
		printMatch(nil) // Did not find any matches
	} else {
		printMatch(&pos) // Found match at pos 0
	}

	// Determining if the first string ends with the second string
	if strings.HasSuffix(s2, s3) {
		fmt.Println("Found match")
	}
}
```

Please note that Go's `strings` package has built-in methods for checking these conditions which we have used here:
1. For prefix and suffix checks, the `HasPrefix` and `HasSuffix` functions are used respectively,
2. For checking if a string contains another at any location, the `Index` function is used - this returns an index of the first occurrence of the substring within the string. If there's no match (i.e., it returns `-1`), we print "Did not find any matches". Otherwise, we print the position of the match.
