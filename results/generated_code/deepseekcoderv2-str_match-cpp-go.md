 Sure! Below is the equivalent Golang code for the provided C++ code:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	// Beginning
	if strings.HasPrefix(s1, s3) {
		fmt.Println("String starts with the other string")
	} else {
		fmt.Println("String does not start with the other string")
	}

	// End
	if strings.HasSuffix(s1, s3) {
		fmt.Println("String ends with the other string")
	} else {
		fmt.Println("String does not end with the other string")
	}

	// Anywhere
	index := strings.Index(s2, s3)
	if index == -1 {
		fmt.Println("String is not contained within the other string")
	} else {
		fmt.Printf("String is contained at location: %d\n", index)
		
		// Handle multiple occurrences
		for i := strings.Index(s2[index+len(s3):], s3); i != -1; i = strings.Index(s2[i+len(s3):], s3) {
			fmt.Printf("String is contained again at location: %d\n", i+index+len(s3))
		}
	}
}
```

### Explanation:
1. **Beginning**: We use `strings.HasPrefix` to check if `s1` starts with `s3`.
2. **End**: We use `strings.HasSuffix` to check if `s1` ends with `s3`.
3. **Anywhere**: We use `strings.Index` to find the first occurrence of `s3` in `s2`. If not found, it returns `-1`. We then handle multiple occurrences by repeatedly calling `strings.Index` on the remaining substring after each match.

This Golang code should provide similar functionality to the provided C++ code.
