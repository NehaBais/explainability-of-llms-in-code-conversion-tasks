package main

import (
	"fmt"
	"strings"
)

func compare(A string, B string) {
	if A == B {
		fmt.Printf("'%s' and '%s' are lexically equal.\n", A, B)
	} else {
		fmt.Printf("'%s' and '%s' are not lexically equal.\n", A, B)
	}

	if strings.EqualFold(A, B) {
		fmt.Printf("'%s' and '%s' are case-insensitive lexically equal.\n", A, B)
	} else {
		fmt.Printf("'%s' and '%s' are not case-insensitive lexically equal.\n", A, B)
	}

	switch {
	case A < B:
		fmt.Printf("'%s' is lexically before '%s'.
", A, B)
	case A > B:
		fmt.Printf("'%s' is lexically after '%s'.
", A, B)
	default:
		fmt.Printf("'%s' and '%s' are not related to each other lexically.\n", A, B)
	}

	fmt.Printf("The lexical relationship is: %d\n", strings.Compare(A, B))
	fmt.Printf("The case-insensitive lexical relationship is: %d\n", strings.CompareFold(A, B))
}

func main() {
	compare("Hello", "Hello")
	compare("5", "5.0")
	compare("java", "Java")
	compare("ĴÃVÁ", "ĴÃVÁ")
	compare("ĴÃVÁ", "ĵãvá")
}