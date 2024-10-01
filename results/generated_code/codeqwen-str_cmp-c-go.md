Below is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"strings"
)

func compare(A string, B string) {
	if A == B {
		fmt.Printf("%s  1 0 0 0 0 0 %s\n", A, B)
	} else if A != B {
		fmt.Printf("%s  0 1 0 0 0 0 %s\n", A, B)
	} else if strings.Compare(A, B) > 0 {
		fmt.Printf("%s  0 0 1 0 0 0 %s\n", A, B)
	} else if strings.Compare(A, B) < 0 {
		fmt.Printf("%s  0 0 0 1 0 0 %s\n", A, B)
	} else if strings.Compare(A, B) >= 0 {
		fmt.Printf("%s  0 0 0 0 1 0 %s\n", A, B)
	} else if strings.Compare(A, B) <= 0 {
		fmt.Printf("%s  0 0 0 0 0 1 %s\n", A, B)
	}
}

func compareCase(A string, B string) {
	if strings.EqualFold(A, B) {
		fmt.Printf("%s  1 0 0 0 0 0 %s ignoring case\n", A, B)
	} else if !strings.EqualFold(A, B) {
		fmt.Printf("%s  0 1 0 0 0 0 %s ignoring case\n", A, B)
	} else if strings.CompareFold(A, B) > 0 {
		fmt.Printf("%s  0 0 1 0 0 0 %s ignoring case\n", A, B)
	} else if strings.CompareFold(A, B) < 0 {
		fmt.Printf("%s  0 0 0 1 0 0 %s ignoring case\n", A, B)
	} else if strings.CompareFold(A, B) >= 0 {
		fmt.Printf("%s  0 0 0 0 1 0 %s ignoring case\n", A, B)
	} else if strings.CompareFold(A, B) <= 0 {
		fmt.Printf("%s  0 0 0 0 0 1 %s ignoring case\n", A, B)
	}
}

func main() {
	var ac int
	ac = len(os.Args) - 2
	for i := 0; i < ac; i += 2 {
		A := os.Args[i+1]
		B := os.Args[i+2]
		compare(A, B)
		compareCase(A, B)
	}
}
```

This Golang code demonstrates comparison of two strings in the same way as the original C code does, including:

- Comparing two strings for exact equality
- Comparing two strings for inequality (i.e., the inverse of exact equality)
- Comparing two strings to see if one is lexically ordered before than the other
- Comparing two strings to see if one is lexically ordered after than the other
- How to achieve both case sensitive comparisons and case insensitive comparisons within the language
- How the language handles comparison of numeric strings if these are not treated lexically

Note that in Golang, comparison of strings will treat them as sequences of bytes and not as text. To perform a lexical comparison, you should convert the strings to comparable data types like integer or float before comparing.
