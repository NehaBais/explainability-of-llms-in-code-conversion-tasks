In Golang, we can achieve the same functionality with built in functions that allow us to compare strings. Here are the equivalent Go code of your Java code:

```go
package main

import (
	"fmt"
	"strings"
)

func Compare(A string, B string) {
	if A == B {
		fmt.Printf("'%s' and '%s' are lexically equal.\n", A, B)
	} else {
		fmt.Printf("'%s' and '%s' are not lexically equal.\n", A, B)
	}
	if strings.ToLower(A) == strings.ToLower(B) {
		fmt.Printf("'%s' and '%s' are case-insensitive lexically equal.\n", A, B)
	} else {
		fmt.Printf("'%s' and '%s' are not case-insensitive lexically equal.\n", A, B)
	}
	if strings.Compare(A, B) < 0 {
		fmt.Printf("'%s' is lexically before '%s'.\n", A, B)
	} else if strings.Compare(A, B) > 0 {
		fmt.Printf("'%s' is lexically after '%s'.\n", A, B)
	}
	if strings.Compare(A, B) <= 0 {
		fmt.Printf("'%s' is not lexically before '%s'.\n", A, B)
	}
	if strings.Compare(A, B) >= 0 {
		fmt.Printf("'%s' is not lexically after '%s'.\n", A, B)
	}
	cmp := strings.Compare(A, B)
	fmt.Printf("The lexical relationship is: %d\n", cmp)
	cmp = strings.Compare(strings.ToLower(A), strings.ToLower(B))
	fmt.Printf("The case-insensitive lexical relationship is: %d\n", cmp)
}

func main() {
	Compare("Hello", "Hello")
	Compare("5", "5.0")
	Compare("java", "Java")
	Compare("ĴÃVÁ", "ĴÃVÁ")
	Compare("ĴÃVÁ", "ĵãvá")
}
```
In this code, we have used `strings.ToLower()` function to convert the strings in a case insensitive manner while comparing. We also used `strings.Compare()` function to compare two strings lexically. If it returns 0, then A and B are equal. If it returns negative value, then A precedes B. If it returns positive value, then B precedes A.
