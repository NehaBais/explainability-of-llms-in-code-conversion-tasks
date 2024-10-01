The equivalent Golang code for the given JavaScript is as follows:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	// Demonstrate comparing two strings
	str1, str2 := "abcd", "dcba"
	fmt.Println(str1 == str2, str1 != str2, str1 < str2, str1 > str2, strings.ToLower(str1) == strings.ToLower(str2))

	// Demonstrate case insensitive comparison
	str3, str4 := "ABCD", "abcd"
	fmt.Println(strings.ToLower(str3) == strings.ToLower(str4))
}
```
This code defines two strings (str1 and str2) for exact equality and inequality with each other; it also demonstrates how to convert both the original and processed strings to lower case using ToLower() function in order to achieve a case insensitive comparison. The numeric string "123" does not have a lexically ordered before than or after comparison, but its equal type comparison (!=) is true with "123".
