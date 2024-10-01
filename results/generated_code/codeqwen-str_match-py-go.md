Here is the equivalent code in Golang:

```golang
package main

import (
	"fmt"
	"strings"
)

func main() {
	// Check if a string starts with another string
	fmt.Println("Does 'abcd' start with 'ab':", strings.HasPrefix("abcd", "ab")) // Returns true

	// Check if a string ends with another string
	fmt.Println("Does 'abcd' end with 'zn':", !strings.HasSuffix("abcd", "zn")) // Returns false

	// Check if a string contains another string at any location
	fmt.Println("Does 'abab' contain 'bb':", strings.Contains("abab", "bb")) // Returns false
	fmt.Println("Does 'abab' contain 'ab':", strings.Contains("abab", "ab")) // Returns true

	// Get the location of a match in string
	loc := strings.Index("abab", "bb")
	if loc == -1 {
		fmt.Println("'bb' was not found in 'abab'")
	} else {
		fmt.Println("The location of 'bb' is:", loc)
	}

	loc = strings.Index("abab", "ab")
	for loc != -1 {
		fmt.Println("The location of 'ab' is:", loc)
		loc = strings.Index("abab", "ab", loc+1)
	}
}
```

Note that in Go, the strings.Contains function doesn't directly return an integer to indicate whether or not a string contains another substring. Instead, it returns a boolean value. If you want to find all occurrences of a substring within a larger string, you will need to use the strings.Index function and loop through the larger string until there are no more occurrences of the substring.
