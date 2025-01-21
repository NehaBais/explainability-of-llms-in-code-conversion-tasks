package main

import (
	"fmt"
	"strings"
)

type String string

func (s String) CompareTo(other string) int {
	return strings.Compare(string(s), other)
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

	fmt.Printf("The lexical relationship is: %d\n", String(A).CompareTo(B))
	fmt.Printf("The case-insensitive lexical relationship is: %d\n", lowerA.CompareTo(lowerB))
}

func toLower(s string) string {
	return strings.ToLower(s)
}

func main() {
	compareStrings("Hello", "Hello")
	compareStrings("5", "5.0")
	compareStrings("java", "Java")
	compareStrings("ĴÃVÁ", "ĴÃVÁ")
	compareStrings("ĴÃVÁ", "ĵãvá")
}
