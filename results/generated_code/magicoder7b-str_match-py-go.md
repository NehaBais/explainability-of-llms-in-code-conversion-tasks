 Here is the equivalent Go code for your Python script:

```Go
package main

import (
	"fmt"
	"strings"
)

func main() {
	str1 := "abcd"
	str2 := "ab"

	// Part 1 - Determining if the first string starts with second string
	if strings.HasPrefix(str1, str2) {
		fmt.Println("The string starts with the given substring.")
	} else {
		fmt.Println("The string does not start with the given substring.")
	}

	// Part 3 - Determining if the first string ends with the second string
	if strings.HasSuffix(str1, str2) {
		fmt.Println("The string ends with the given substring.")
	} else {
		fmt.Println("The string does not end with the given substring.")
	}

	// Part 2 - Determining if the first string contains the second string at any location
	if strings.Contains(str1, str2) {
		loc := strings.Index(str1, str2)
		fmt.Printf("The substring was found at index %d\n", loc)
	} else {
		fmt.Println("The string does not contain the given substring.")
	}
}
```

Please note that in Go, `Index` function from `strings` package is used to find the first occurrence of a substring within a string and it also returns -1 when there's no match which aligns with Python's `find()` behavior.
