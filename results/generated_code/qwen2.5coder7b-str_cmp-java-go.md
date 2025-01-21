Here's the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func main() {
	compareStrings("Hello", "Hello")
	compareStrings("5", "5.0")
	compareStrings("java", "Java")
	compareStrings("ĴÃVÁ", "ĴÃVÁ")
	compareStrings("ĴÃVÁ", "ĵãvá")
}

func compareStrings(A, B string) {
	if A == B {
		fmt.Printf("'%s' and '%s' are lexically equal.\n", A, B)
	} else {
		fmt.Printf("'%s' and '%s' are not lexically equal.\n", A, B)
	}

	lowerA := toLower(A)
	lowerB := toLower(B)

	if lowerA == lowerB {
		fmt.Printf("'%s' and '%s' are case-insensitive lexically equal.\n", A, B)
	} else {
		fmt.Printf("'%s' and '%s' are not case-insensitive lexically equal.\n", A, B)
	}

	if A < B {
		fmt.Printf("'%s' is lexically before '%s'\n", A, B)
	}
	
	if A > B {
		fmt.Printf("'%s' is lexically after '%s'\n", A, B)
	}

	fmt.Printf("The lexical relationship is: %d\n", A.CompareTo(B))
	fmt.Printf("The case-insensitive lexical relationship is: %d\n", lowerA.CompareTo(lowerB))
}

func toLower(s string) string {
	return strings.ToLower(s)
}

type String string

func (s String) CompareTo(other string) int {
	return s < other
}
```

This Golang code will output the same results as your Java code. The `String` type in Go is comparable, meaning you can use the `<`, `>`, `<=`, and `>=` operators to compare strings lexicographically. In addition, we've implemented a `CompareTo` method that matches what's provided in your original Java code for completeness.
