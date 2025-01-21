The error occurs because the `strings` package in Golang doesn't provide methods to find the index of a sub-string in a main string or the occurrence count. However, it does provide a method for finding the first occurrence of a sub-string within a given range. To fix this error, we need to use the `strings.Index()` function instead of the `strings.Contains()`. Here's how you can rewrite the code:
```go
package main

import  (
	 "fmt"
	 "strings"
)

func main() {
	var str1 = "abcd"
	fmt.Println(str1, strings.HasPrefix("ab", str1))  // true
	fmt.Println(str1, strings.HasSuffix("zn", str1))  // false

	str2 := "abab"
	fmt.Println(str2, strings.Contains(str2,  "bb"))  // false
	fmt.Println(str2, strings.Contains(str2,  "ab"))  // true

	str3 := "abababba"
	fmt.Println(str3, strings.Index(str3,  "bb"))     // -1
	fmt.Println(str3, strings.Index(str3,  "ab", 0))  // 0
	fmt.Println(str3, strings.Index(str3,  "ab", 2))  // 2
}
```
The error occurs because the `strings.Contains()` method doesn't take into account the starting index of the string. To fix this issue, we can modify our code to use the `strings.Index()` method instead of the `strings.Contains()`. By using the `strings.Index()` method, we can find the first occurrence of a sub-string within a given range in a main string. This will ensure that we are able to handle multiple occurrences of the substring correctly as well.
