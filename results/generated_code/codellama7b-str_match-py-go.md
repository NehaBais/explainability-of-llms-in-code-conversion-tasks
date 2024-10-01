Sure! Here's the code in Go:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	// Determine if first string starts with second string
	str1 := "abcd"
	str2 := "ab"
	if strings.HasPrefix(str1, str2) {
		fmt.Println("Yes, the first string starts with the second string.")
	} else {
		fmt.Println("No, the first string does not start with the second string.")
	}

	// Determine if first string contains second string at any location
	str1 = "abab"
	str2 = "bb"
	if strings.Contains(str1, str2) {
		fmt.Println("Yes, the first string contains the second string.")
	} else {
		fmt.Println("No, the first string does not contain the second string.")
	}

	// Determine if first string ends with second string
	str1 = "abcd"
	str2 = "zn"
	if strings.HasSuffix(str1, str2) {
		fmt.Println("Yes, the first string ends with the second string.")
	} else {
		fmt.Println("No, the first string does not end with the second string.")
	}

	// Handle multiple occurrences of a string for part 2
	str1 = "abab"
	str2 = "ab"
	loc := strings.Index(str1, str2)
	if loc != -1 {
		fmt.Println("The first occurrence of 'ab' in 'abab' is at location", loc)
	} else {
		fmt.Println("The string 'ab' does not appear in 'abab'.")
	}
}
```