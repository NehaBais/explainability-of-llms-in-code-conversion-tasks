### Pseudocode:

STREQ(A, B):
    if A == B
        return true
    else
        return false

STRNE(A, B):
    if not STREQ(A, B)
        return true
    else
        return false

STRGT(A, B):
    if A > B
        return true
    else
        return false

STRGE(A, B):
    if A >= B
        return true
    else
        return false

STRLT(A, B):
    if A < B
        return true
    else
        return false

STRLE(A, B):
    if A <= B
        return true
    else
        return false

STRCEQ(A, B):
    if strcasecmp(A, B) == 0
        return true
    else
        return false

STRCNE(A, B):
    if not STRCEQ(A, B)
        return true
    else
        return false

STRCGT(A, B):
    if strcasecmp(B, A) < 0
        return true
    else
        return false

STRCLE(A, B):
    if strcasecmp(B, A) <= 0
        return true
    else
        return false


### Code:
```go
package main

import (
	"fmt"
	"strings"
)

func StrEq(a, b string) bool {
	if a == b {
		return true
	}

	return false
}

func StrNe(a, b string) bool {
	if !StrEq(a, b) {
		return true
	}

	return false
}

func StrGt(a, b string) bool {
	if a > b {
		return true
	}

	return false
}

func StrGe(a, b string) bool {
	if a >= b {
		return true
	}

	return false
}

func StrLt(a, b string) bool {
	if a < b {
		return true
	}

	return false
}

func StrLe(a, b string) bool {
	if a <= b {
		return true
	}

	return false
}

func StrCaseEq(a, b string) bool {
	if strings.EqualFold(a, b) {
		return true
	}

	return false
}

func StrCaseNe(a, b string) bool {
	if !StrCaseEq(a, b) {
		return true
	}

	return false
}

func StrCaseGt(a, b string) bool {
	if strings.CompareFold(b, a) < 0 {
		return true
	}

	return false
}

func StrCaseGe(a, b string) bool {
	if strings.CompareFold(b, a) <= 0 {
		return true
	}

	return false
}

func main() {
	var a, b string
	fmt.Println("   eq     ne     gt    lt    ge    le")
	for {
		_, err := fmt.Scan(&a, &b)
		if err != nil {
			break
		}

		fmt.Printf("%-8s %-2d %-2d %-2d %-2d %-2d %-2d %s\n", a, StrEq(a, b), StrNe(a, b), StrGt(a, b), StrLt(a, b), StrGe(a, b), StrLe(a, b), b)
		fmt.Printf("%-8s %-2d %-2d %-2d %-2d %-2d %-2d %s ignoring case\n", a, StrCaseEq(a, b), StrCaseNe(a, b), StrCaseGt(a, b), StrCaseLt(a, b), StrCaseGe(a, b), StrCaseLe(a, b), b)
	}
}
```

Note: The above code doesn't perform any comparison with numeric strings, as the `strings` package does not include functions for lexicographical comparisons. This limitation can be overcome by using libraries like [Sort](https://golang.org/pkg/sort/) and [Strcmp](https://golang.org/pkg/bytes/#Compare). These libraries provide efficient comparison and sorting algorithms for strings, numeric types and slices of any type.
