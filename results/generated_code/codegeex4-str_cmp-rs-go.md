Below is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	a := "abc"
	b := strings.ToUpper("Bac")

	if a == b { 
		fmt.Println("The strings are equal") 
	}
	
	if a != b { 
		fmt.Println("The strings are not equal") 
	}

	switch {
	case a > b:
		fmt.Println("The first string is lexically after the second")
	case a < b:
		fmt.Println("The first string is lexically before the second")
	default:
		fmt.Println("The strings are neither lexically after nor before each other")
	}
	
	// case-insensitive comparison

	if strings.EqualFold(a, b) { 
		fmt.Println("Both strings are equal when ignoring case") 
	}
}
```

Some notes about Golang string comparisons:

1. In the code above we make use of the `strings.ToUpper()` function to ensure the two strings are compared in an ASCII case-insensitive way.

2. The `strings.EqualFold` function is used for this purpose because it compares strings in a case-insensitive manner, without considering language-specific rules such as accent marks and other diacriticals.

3. Note that Golang does not have built-in support for case-sensitive string comparison; you must explicitly convert the strings to either upper or lower case before comparing.

4. The `>` and `<` operators work on Unicode code points (essentially lexicographical order), which is different from how numeric strings would be compared in most programming languages. This is due to Golang's handling of Unicode strings by default, unlike many other languages where string comparisons are based on their byte sequences.
