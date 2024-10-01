Sure! Here's the code in Go:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	// Part 1: Determining if the first string starts with the second string
	fmt.Println("Starts with:")
	fmt.Println(strings.HasPrefix("abcd", "ab")) // returns true

	// Part 2: Determining if the first string contains the second string at any location
	fmt.Println("\nContains:")
	fmt.Println(strings.Contains("abab", "bb")) // returns false
	fmt.Println(strings.Contains("abab", "ab")) // returns true
	fmt.Println("Location of match:")
	loc := strings.Index("abab", "ab") // returns 0
	fmt.Println(loc)
	loc = strings.Index("abab", "ab", loc+1) // returns 2
	fmt.Println(loc)

	// Part 3: Determining if the first string ends with the second string
	fmt.Println("\nEnds with:")
	fmt.Println(strings.HasSuffix("abcd", "zn")) // returns false
}
```

This code uses the `strings` package in Go to perform the required operations. The `HasPrefix`, `Contains`, and `HasSuffix` functions are used to check if a string starts with, contains, or ends with another string, respectively. The `Index` function is used to find the index of the first occurrence of a substring within a larger string.
