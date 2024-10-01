Below is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"strings"
	"unicode/utf8"
)

func compare(A interface{}, B interface{}) {
	a, ok1 := A.(string)
	B, ok2 := B.(string)
	if !ok1 || !ok2 {
		fmt.Printf("%v is not a string\n", A)
		return
	}

	fmt.Printf("
%q is of type %T and %q is of type %T", A, A, B, B)

	if strings.Compare(A, B) < 0 {
		fmt.Println("is strictly less than ", B)
	} else if strings.Compare(A, B) <= 0 {
		fmt.Println("is less than or equal to", B)
	}

	if strings.Compare(A, B) > 0 {
		fmt.Println("is strictly greater than ", B)
	} else if strings.Compare(A, B) >= 0 {
		fmt.Println("is greater than or equal to", B)
	}

	if A == B {
		fmt.Println("is equal to", B)
	} else {
		fmt.Println("is not equal to", B)
	}

	if A != B {
		fmt.Println("has negated object identity with", B)
	} else if A == B && !utf8.RuneCountInString(A) == utf8.RuneCountInString(B) {
		fmt.Println("has negated object identity with", B)
	}

}

func main() {
	compare("YUP", "YUP")
	compare("BALL", "BELL")
	compare("24", "123")
	// compare(24, 123) - not possible in Golang as they are different types
	// compare(5.0, 5) - not possible in Golang as they are different types
}
```

In this Golang code:

- We use an `interface{}` for the function parameters to allow us to accept any type of value.
- The `strings.Compare()` function is used to compare two strings lexicographically.
- The `utf8.RuneCountInString()` function is used to count the number of runes (characters) in a string, which is necessary for comparison if both are not string type.

Note that the `strings.Compare(A, B)` function returns:

- 0 if A and B are equal.
- < 0 if A is less than B.
- > 0 if A is greater than B.
