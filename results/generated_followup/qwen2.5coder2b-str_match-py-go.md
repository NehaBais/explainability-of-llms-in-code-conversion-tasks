The error `undefined: strings` occurs because Go does not include the "strings" package by default. To solve this, we need to import it into our program using the `import` statement.

The fix is to add `import "strings"` at the beginning of the file. The rewritten code in a single line is:

```go
package main

import (
	"fmt"
	"strings"
)

func startsWith(str1, str2 string) bool {
	return strings.HasPrefix(str1, str2)
}

func endsWith(str1, str2 string) bool {
	return strings.HasSuffix(str1, str2)
}

func contains(str1, str2 string) bool {
	return strings.Contains(str1, str2)
}

// find the index of the first occurrence of str2 in str1 starting from start
func find(str1, str2 string, start int) int {
	return strings.Index(str1[start:], str2)
}

func main() {
	str1 := "abcd"
	str2 := "ab"

	fmt.Println(startsWith(str1, str2)) //returns True

	str1 = "abcd"
	str2 = "zn"

	fmt.Println(endsWith(str1, str2)) //returns False

	str1 = "bb"
	str2 = "abab"

	loc := find(str1, str2, 0)
	fmt.Printf("loc: %d\n", loc)

	loc = find(str1, str2, loc+1)
	fmt.Printf("loc: %d\n", loc)
}
```
