In GoLang, you can use the built-in `strings` package to achieve these string matching operations:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	s1 := "abcd"
	s2 := "ab"
	s3 := "zn"

	// Determining if the first string starts with second string
	if strings.HasPrefix(s1, s2) {
		fmt.Println("s1 starts with s2:", true)
	} else {
		fmt.Println("s1 starts with s2:", false)
	}

	// Determining if the first string ends with the second string
	if strings.HasSuffix(s1, s3) {
		fmt.Println("s1 ends with s3:", true)
	} else {
		fmt.Println("s1 ends with s3:", false)
	}

	// Determining if the first string contains the second string at any location
	loc := strings.Index(s1, s2)
	if loc >= 0 {
		fmt.Printf("s2 is found in s1 at position: %d\n", loc)
	} else {
		fmt.Println("s2 is not found in s1:")
	}

	// Handle multiple occurrences of a string
	loc = 0
	for {
		loc = strings.Index(s1[loc:], s2)
		if loc < 0 {
			break
		}
		fmt.Printf("s2 is found in s1 at position: %d\n", loc)
		loc++
	}
}
```

This GoLang program performs the same operations as your Python example script.
