The following Go code demonstrates the string comparison operations as described in the problem:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	// Comparing two strings for exact equality
	s1 := "abcd"
	s2 := "abcd"
	fmt.Println(s1 == s2) // true
	
	// Comparing two strings for inequality 
	s3 := "ABCD"
	s4 := "abcd"
	fmt.Println(s3 != s4) // true
	
	// Comparing two strings to see if one is lexically ordered before than the other
	s5 := "abcd"
	s6 := "dcba"
	fmt.Println(s5 < s6) // true
	
	// Comparing two strings to see if one is lexically ordered after than the other
	s7 := "dcba"
	s8 := "abcd"
	fmt.Println(s7 > s8) // false
		
	// How to achieve both case sensitive comparisons and case insensitive comparisons within the language
	s9 := "ABCD"
	s10 := "abcd"
	fmt.Println(strings.ToLower(s9) == strings.ToLower(s10)) // true
	
	// How the language handles comparison of numeric strings if these are not treated lexically
	s11 := "123"
	s12 := "123"
	fmt.Println(s11 == s12) // true
}
```
In Go, `==` is used for comparing two values or variables to check if they are equal. It checks both value and type in case of composite types like slices, maps etc., which do not have the same type but hold the same data sequence. However, Go does not provide an explicit operator to check just the value part i.e., without checking type. If you want a strict comparison ignoring the type, you can convert one or both values to a common type first (in our case, string), before comparing them.

The '!=' and related operators are used for inequality checks. The `<` and `>` are lexical order comparison operators that will return true if the left operand is less than/greater than the right one in terms of character byte values in increasing order. 

In Go, strings package provides a function `ToLower()` which can be used to convert a string to its lowercase version. It's an example of how to achieve case insensitive comparisons within the language. For numeric strings it treats them as runes lexically because they are not numbers but characters and hence comparison is done based on their ASCII values (not actual number values).

