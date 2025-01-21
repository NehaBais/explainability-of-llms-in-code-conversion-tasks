The equivalent Go code for the above C++ code is:

```go
package main

import (
	"fmt"
)

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	fmt.Println(s1[:len(s3)] == s3)
	fmt.Println(s1[len(s1)-len(s3):] == s3)
	var loc int
	loc = strings.Index(s1, s2)

	if loc != -1 {
		fmt.Printf("Found %s at position %d in string %s\n", s2, loc+1, s1)
	}

	for i := 0; i < len(s1); i++ {
		if strings.Contains(s1[i:], s3) {
			fmt.Printf("Found %s at position %d in string %s\n", s3, i+1, s1)
		}
	}
}
```

This program implements the functionality of the original C++ code:

1. `s1[:len(s3)] == s3`: This checks if the first `s3` characters of `s1` are equal to `s3`.

2. `s1[len(s1)-len(s3):] == s3`: This checks if the last `s3` characters of `s1` are equal to `s3`.

3. `strings.Index(s1, s2) != -1`: This finds the first occurrence of the substring `s2` in `s1`. If it finds a match, it prints the location of the match.

4. `strings.Contains(s1[i:], s3)`: This searches for all occurrences of the substring `s3` starting from the character at index `i`.
