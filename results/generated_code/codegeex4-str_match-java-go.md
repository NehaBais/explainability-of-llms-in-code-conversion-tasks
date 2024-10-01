```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	str1 := "abcd"
	str2 := "ab"
	fmt.Println(str1.startswith(str2)) // returns true

	str3 := "zn"
	fmt.Println(str1.endswith(str3)) // returns false

	str4 := "abab"
	str5 := "bb"
	fmt.Println(str4.contains(str5)) // returns false
	str6 := "ab"
	fmt.Println(str4.contains(str6)) // returns true
	
	loc := str4.indexOf(str6)
	fmt.Println(loc) // returns 0
	
	loc = str4.indexOf(str6, loc+1)
	fmt.Println(loc) // returns 2
}

func (s string) startswith(prefix string) bool {
	return strings.HasPrefix(s, prefix)
}

func (s string) endswith(suffix string) bool {
	return strings.HasSuffix(s, suffix)
}

func (s string) contains(substring string) bool {
	return strings.Contains(s, substring)
}

func (s string) indexOf(substring string, start int) int {
	index := strings.Index(s[start:], substring)
	if index != -1 {
		return start + index
	}
	return -1
}
```
