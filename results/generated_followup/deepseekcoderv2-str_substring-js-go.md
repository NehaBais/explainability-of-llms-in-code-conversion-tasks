 The error occurred because the `indexOf` function was being called with three arguments (`string, number, number`), while it expects two arguments (`string, interface{}). The fix is to pass the target as an interface{} type in the `indexOf` function call. Here's the corrected code:

```go
package main

import (
	"fmt"
)

func main() {
	str := "abcdefgh"

	//  * starting from n characters in and of m length;
	n := 2
	m := 3
	fmt.Println(str[n : n+m]) // => "cde"

	//  * starting from n characters in, up to the end of the string;
	fmt.Println(str[n:]) // => "cdefgh"

	//  * whole string minus last character;
	fmt.Println(str[:len(str)-1]) // => "abcdefg"

	//  * starting from a known character within the string and of m length;
	bIndex := indexOf(str, 'b')
	if bIndex != -1 {
		fmt.Println(str[bIndex : bIndex+m]) // => "bcd"
	}

	//  * starting from a known substring within the string and of m length.
	bcIndex := indexOf(str, "bc")
	if bcIndex != -1 {
		fmt.Println(str[bcIndex : bcIndex+m]) // => "bcd"
	}
}

// Helper function to find the index of a character or substring in a string
func indexOf(s string, target interface{}) int {
	switch v := target.(type) {
	case rune:
		for i, r := range s {
			if r == v {
				return i
			}
		}
	case string:
		if len(v) == 0 {
			return -1
		}
		for i := 0; i <= len(s)-len(v); i++ {
			if s[i:i+len(v)] == v {
				return i
			}
		}
	default:
		return -1
	}
	return -1
}
```
