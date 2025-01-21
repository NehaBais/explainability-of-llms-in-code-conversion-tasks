In Go, the string matching functions are similar to Python's and can be used to solve the problem. Here's how you could write these functions:

```go
package main

import (
	"fmt"
)

func startsWith(str1, str2 string) bool {
	return strings.HasPrefix(str1, str2)
}

func endsWith(str1, str2 string) bool {
	return strings.HasSuffix(str1, str2)
}

func contains(str1, str2 string) bool {
	return strings.Contains(str1, str2)
}

// find the index of the first occurrence of str2 in str1 starting from start
func find(str1, str2 string, start int) int {
	return strings.Index(str1[start:], str2)
}

func main() {
	str1 := "abcd"
	str2 := "ab"

	fmt.Println(startsWith(str1, str2)) //returns True

	str1 = "abcd"
	str2 = "zn"

	fmt.Println(endsWith(str1, str2)) //returns False

	str1 = "bb"
	str2 = "abab"

	fmt.Println(contains(str1, str2)) //returns False

	str1 = "ab"
	str2 = "abab"

	loc := find(str1, str2, 0)
	fmt.Printf("loc: %d\n", loc)

	loc = find(str1, str2, loc+1)
	fmt.Printf("loc: %d\n", loc)
}
```

You can run this code in Go playground here. The `strings` package provides the functions we need (`HasPrefix`, `Contains`, and `Index`) to perform these operations.
