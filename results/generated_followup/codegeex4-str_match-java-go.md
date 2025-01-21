The error occurs because Go does not allow defining new methods on built-in types like string. The fix is to use functions instead of methods, passing the string as an argument. Here's the corrected code:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	str1 := "abcd"
	str2 := "ab"
	fmt.Println(startsWith(str1, str2)) // returns true

	str3 := "zn"
	fmt.Println(endsWith(str1, str3)) // returns false

	str4 := "abab"
	str5 := "bb"
	fmt.Println(contains(str4, str5)) // returns false
	str6 := "ab"
	fmt.Println(contains(str4, str6)) // returns true

	loc := indexOf(str4, str6)
	fmt.Println(loc) // returns 0

	loc = indexOf(str4, str6, loc+1)
	fmt.Println(loc) // returns 2
}

func startswith(s string, prefix string) bool {
	return strings.HasPrefix(s, prefix)
}

func endswith(s string, suffix string) bool {
	return strings.HasSuffix(s, suffix)
}

func contains(s string, substring string) bool {
	return strings.Contains(s, substring)
}

func indexOf(s string, substring string, start int) int {
	index := strings.Index(s[start:], substring)
	if index != -1 {
		return start + index
	}
	return -1
}
```
