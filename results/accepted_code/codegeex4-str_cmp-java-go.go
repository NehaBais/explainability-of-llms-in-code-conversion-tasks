package main

import (
	"fmt"
	"unicode"
)

func compare(A string, B string) {
	if A == B {
		fmt.Printf("'%s' and '%s' are lexically equal.\n", A, B)
	} else {
		fmt.Printf("'%s' and '%s' are not lexically equal.\n", A, B)
	}
	fmt.Println()

	equal := true
	for i := 0; i < len(A) && i < len(B); i++ {
		if unicode.ToLower(rune(A[i])) != unicode.ToLower(rune(B[i])) {
			equal = false
			break
		}
	}

	if equal {
		fmt.Printf("'%s' and '%s' are case-insensitive lexically equal.\n", A, B)
	} else {
		fmt.Printf("'%s' and '%s' are not case-insensitive lexically equal.\n", A, B)
	}
	fmt.Println()

	switch {
	case A < B:
		fmt.Printf("'%s' is lexically before '%s'.\n", A, B)
	case A > B:
		fmt.Printf("'%s' is lexically after '%s'.\n", A, B)
	default:
		fmt.Printf("'%s' and '%s' are not in lexical order.\n", A, B)
	}

	switch {
	case A <= B:
		fmt.Printf("'%s' is not lexically before '%s'.\n", A, B)
	case A >= B:
		fmt.Printf("'%s' is not lexically after '%s'.\n", A, B)
	default:
		fmt.Printf("'%s' and '%s' are in lexical order.\n", A, B)
	}

	fmt.Printf("The lexical relationship is: %d\n", len(A)-len(B))
	fmt.Println()
}

func main() {
	compare("Hello", "Hello")
	compare("5", "5.0")
	compare("java", "Java")
	compare("ĴÃVÁ", "ĴÃVÁ")
	compare("ĴÃVÁ", "ĵãvá")
}
