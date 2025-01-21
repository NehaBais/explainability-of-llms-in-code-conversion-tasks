In Go, the string matching functionality is provided by the `strings` package. Below is the equivalent code for Java to Golang:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	str1 := "abcd"
	str2 := "ab"

	// StartsWith
	result1 := strings.HasPrefix(str1, str2)
	fmt.Println("startsWith:", result1) // returns true

	// EndsWith
	result2 := strings.HasSuffix(str1, str2)
	fmt.Println("endsWith:", result2) // returns false

	// Contains
	result3 := strings.Contains(str1, str2)
	fmt.Println("contains:", result3) // returns false

	// Count occurrences (part 2)
	loc1 := strings.Index(str1, str2)
	fmt.Printf("indexOf first occurrence of '%s' is %d\n", str2, loc1)

	if loc1 == -1 {
		fmt.Println("No occurrence found.")
		return
	}

	// Find subsequent occurrences
	var loc2 = loc1 + len(str2)
	for {
		loc3 := strings.Index(str1[loc2:], str2)
		if loc3 == -1 {
			break
		}
		fmt.Printf("indexOf next occurrence of '%s' is %d\n", str2, loc3+loc2)
		loc2 = loc3 + len(str2)
	}
}
```

### Explanation:
- **startsWith** and **endsWith**: These methods check if the string starts or ends with the specified substring.
- **contains**: This method checks if the string contains the specified substring.
- **indexOf**: This method returns the index of the first occurrence of a substring. If no match is found, it returns -1.
- **substring**: To find subsequent occurrences, we use `strings.Index` starting from the next position after the last matched substring.

Note: The provided code does not handle multiple occurrences as requested in the optional requirement.
