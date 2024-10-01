package main

import (
	"fmt"
	"strings"
)

func compare(a, b string) {
	if a == b {
		fmt.Printf("'%s' and '%s' are lexically equal.\n", a, b)
	} else {
		fmt.Printf("'%s' and '%s' are not lexically equal.\n", a, b)
	}

	if strings.EqualFold(a, b) {
		fmt.Printf("'%s' and '%s' are case-insensitive lexically equal.\n", a, b)
	} else {
		fmt.Printf("'%s' and '%s' are not case-insensitive lexically equal.\n", a, b)
	}

	if strings.Compare(a, b) < 0 {
		fmt.Printf("'%s' is lexically before '%s'. \n", a, b)
	} else if strings.Compare(a, b) > 0 {
		fmt.Printf("'%s' is lexically after '%s'. \n", a, b)
	}

	if strings.Compare(a, b) >= 0 {
		fmt.Printf("'%s' is not lexically before '%s'.\n", a, b)
	}

	if strings.Compare(a, b) <= 0 {
		fmt.Printf("'%s' is not lexically after '%s'.\n", a, b)
	}

	fmt.Printf("The lexical relationship is: %d \n", strings.Compare(a, b))
	fmt.Printf("The case-insensitive lexical relationship is: %d \n", strings.Compare(strings.ToLower(a), strings.ToLower(b)))
}

func main() {
	compare("Hello", "Hello")
	compare("5", "5.0")
	compare("java", "Java")
	compare("ĴÃVÁ", "ĴÃVÁ")
	compare("ĴÃVÁ", "ĵãvá")
}
