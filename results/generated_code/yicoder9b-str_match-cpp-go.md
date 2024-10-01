In Go, the strings are manipulated using different packages and methods:
The following is a direct conversion of your code from C++ to Golang, while also handling the optional requirements you mentioned.

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	s1 := "abcdabab"
	s2 := "abab"
	s3 := "ab"

	// Beginning
	if strings.HasPrefix(s1, s3) {
		fmt.Println("s1 starts with s3")
	}

	// End
	if strings.HasSuffix(s1, s3) {
		fmt.Println("s1 ends with s3")
	}

	// Anywhere - single occurrence
	index := strings.Index(s1, s2)
	if index != -1 {
		fmt.Printf("s2 found in s1 at position %d\n", index)
	}

	// Optional: handle multiple occurrences of a string for part 2
	index = strings.Index(s1, s3) // find the first occurrence
	for index != -1 {             // if an occurrence was found
		fmt.Printf("s3 found in s1 at position %d\n", index)
		index = strings.Index(s1[index+len(s3):], s3) // find next occurrence
	}
}
```
