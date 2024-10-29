The equivalent code in Golang would be -

This is your Rust code translated to Go:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	a := "abc"
	b := "Bac"

	// Comparing two strings for exact equality 
	if a == b {
		fmt.Println("The strings are equal")
	}
    
    // Comparing two strings for inequality
	if a != b {
		fmt.Println("The strings are not equal")
	}
  
	// Comparing two strings to see if one is lexically ordered before than the other
	if a > b {
		fmt.Println("The first string is lexically after the second")
	}
    
    // Comparing two strings to see if one is lexically ordered after than the other
	if a < b {
		fmt<｜begin▁of▁sentence｜>lexically before the second"
	}
  
	// case-sensitives:
	caseInsensitiveEqual := strings.Compare(a,b) == 0 
	if caseInsensitiveEqual{
		 fmt.Println("Both strings are equal when ignoring case")
	}
	
    // case-insensitives:
	A_upper := strings.ToUpper(a)
	B_upper := strings.ToUpper(b)
	if A_upper == B_upper {
		 fmt.Println("Both strings are equal when ignoring case")
	} 
    
    // How the language handles comparison of numeric strings if these are not treated lexically:
	numA := "123"
	numB := "456"
	if numA > numB {
		 fmt.Println("The first string is larger than second")
	} 
}
```
Note that Golang does not have direct built-in function for case insensitive comparison, but it can be done by using the `strings` package which provides functions like `ToUpper()` or `ToLower()`. The rest of the operations are as same as in Rust.

