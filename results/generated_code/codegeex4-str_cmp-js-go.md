```go
package main

import (
	"fmt"
	"strings"
	"strconv"
)

func main() {
	str1 := "abcd"
	str2 := "abcd"
	fmt.Println(str1 == str2) // true - comparing two strings for exact equality

	str3 := "123"
	num, _ := strconv.Atoi(str3)
	fmt.Println(num == 123) // true - comparison of numeric strings treated as numbers

	str4 := "ABCD"
	str5 := "abcd"
	fmt.Println(strings.ToLower(str4) == strings.ToLower(str5)) // true - case insensitive comparison

	fmt.Println(str1 != str2) // false - comparing two strings for inequality
	fmt.Println(num != 123) // false - comparing two numeric strings for inequality
	fmt.Println(str4 != str5) // true - case sensitive comparison

	str6 := "abcd"
	str7 := "dcba"
	fmt.Println(str6 < str7) // false - comparing one string to see if it is lexically ordered before than the other (true in JavaScript but not possible in Go)
	fmt.Println(str6 > str7) // true  - comparing one string to see if it is lexically ordered after than the other

}
```
Note:
- In Go, there's no way of directly comparing two strings for lexical order since Go does not support this operation natively. 
- The `strconv.Atoi` function is used to convert a numeric string into an integer. If you try to compare this with another integer using `==`, it will be considered as a comparison between a number and a string, which leads to a compile-time error.
- For case insensitive comparisons, we make use of the built-in `strings.ToLower` method in Go to convert both strings to lowercase before comparing them.
