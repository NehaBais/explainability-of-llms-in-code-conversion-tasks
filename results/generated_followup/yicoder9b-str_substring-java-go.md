The error is because there are multiple functions with the same name "Substring" declared within the same scope, and some packages like "fmt" or "strings" were imported but not used. 

To fix this:
- Rename these functions to something more descriptive, such as SubstringNthCodePoint, SubstringFromNthCharacter, SubstringMinusLastCharacter, etc.
- Ensure all necessary packages are imported and used in the code. In this case, you need "fmt" for printing errors, and "unicode" for working with Unicode strings.
  
Here is the corrected Go version of your Java functions:
```go
package main

import (
	"fmt"
	"strings"
	"unicode"
)

func SubstringNthCodePoint(str string, n int, m int) string {
	count := 0
	for i, r := range str {
		if unicode.IsPrint(r) {
			count++
			if count == n {
				return str[i : i+m]
			}
		}
	}
	return ""
}
func SubstringFromNthCharacter(str string, n int) string {
	return str[n:]
}
func SubstringMinusLastCharacter(str string) string {
	return str[:len(str)-1]
}
func SubstringKnownCharacter(str string, c rune, m int) string {
	for i, r := range str {
		if r == c {
			return str[i : i+m+1]
		}
	}
	return ""
}
func SubstringKnownSubstring(str string, sub string, m int) string {
	index := strings.Index(str, sub)
	if index >= 0 {
		return str[index : index+m+len(sub)]
	}
	return ""
}

func main() {
    // Test the functions here
    fmt.Println(SubstringNthCodePoint("hello",2,3)) // should print 'ell'
    fmt.Println(SubstringFromNthCharacter("hello",1))  // should print 'ello'
    fmt.Println(SubstringMinusLastCharacter("hello"))  // should print 'hell'
    fmt.Println(SubstringKnownCharacter("hello",'l',2)) // should print 'll'
    fmt.Println(SubstringKnownSubstring("hello", "ell", 1)) // should print 'el'
}
```
