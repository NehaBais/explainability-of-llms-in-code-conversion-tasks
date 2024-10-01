Below is the conversion of JavaScript code to Golang:

```Go
package main

import (
	"fmt"
	"strings"
)

func main() {

    str1 := "abcd"
    str2 := "dcba"
  
    fmt.Println(
        str1 == str2,     // always false as the strings are not equal
        ), "\n")

    fmt.Println(
        strings.Compare(str1, str2) != 0, // true
        ), "\n")

    fmt.Println(
        strings.Compare(str2, str1) < 0, // false
        ), "\n")

    fmt.Println(
        strings.Compare(str1, str2) > 0, // false (lexically the string "abcd" is not lexically ordered after string "dcba")
        ), "\n")
	
	// Case insensitive comparison example
	fmt.Println(
        strings.EqualFold("AbCd", "aBcD"),  // true 
        ), "\n")
}
```
This Golang code demonstrates how to compare two strings for exact equality, inequality (i.e., the inverse of exact equality)), lexical comparison (i.e., see if one string is lexically ordered before than the other) and also see if one string is lexically ordered after than the other. The Golang language provides a built-in method called `strings.Compare()` to compare two strings lexicographically.
The Golang code also demonstrates how to achieve both case sensitive comparisons and case insensitive comparisons within the language by using the built-in method `strings.EqualFold()`. This method compares two strings for equality, ignoring case considerations.
