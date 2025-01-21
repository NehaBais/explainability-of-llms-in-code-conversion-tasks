 Sure, here is the equivalent code in GoLang for each requirement you've specified:

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
	bcIndex := indexOf(str, 'b', 'c')
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

### Explanation:
1. **Starting from `n` characters in and of `m` length:**
   ```go
   fmt.Println(str[n : n+m]) // => "cde"
   ```
   This uses Go's string slicing to get the substring starting from index `n` with length `m`.

2. **Starting from `n` characters in, up to the end of the string:**
   ```go
   fmt.Println(str[n:]) // => "cdefgh"
   ```
   This uses Go's string slicing to get the substring starting from index `n` to the end of the string.

3. **Whole string minus the last character:**
   ```go
   fmt.Println(str[:len(str)-1]) // => "abcdefg"
   ```
   This uses Go's string slicing to get all characters except the last one.

4. **Starting from a known character within the string and of `m` length:**
   ```go
   bIndex := indexOf(str, 'b')
   if bIndex != -1 {
       fmt.Println(str[bIndex : bIndex+m]) // => "bcd"
   }
   ```
   This finds the index of character `'b'` and then slices the substring from that index with length `m`.

5. **Starting from a known substring within the string and of `m` length:**
   ```go
   bcIndex := indexOf(str, 'b', 'c')
   if bcIndex != -1 {
       fmt.Println(str[bcIndex : bcIndex+m]) // => "bcd"
   }
   ```
   This finds the index of substring `'bc'` and then slices the substring from that index with length `m`.

The helper function `indexOf` is used to find the index of a character or substring within the string.
