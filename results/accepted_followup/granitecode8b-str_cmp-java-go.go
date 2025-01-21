package main

import (
	"fmt"
	"strings"
)

func compare(a, b string) {
	if a == b {
		fmt.Printf("'%s' and '%s' are lexically equal.", a, b)
	} else {
		fmt.Printf("'%s' and '%s' are not lexically equal.", a, b)
	}
	fmt.Println()

	if strings.EqualFold(a, b) {
		fmt.Printf("'%s' and '%s' are case-insensitive lexically equal.", a, b)
	} else {
		fmt.Printf("'%s' and '%s' are not case-insensitive lexically equal.", a, b)
	}
	fmt.Println()

	if a < b {
		fmt.Printf("'%s' is lexically before '%s'.", a, b)
	} else if a > b {
		fmt.Printf("'%s' is lexically after '%s'.", a, b)
	}

	if a <= b {
		fmt.Printf("'%s' is not lexically before '%s'.", a, b)
	}
	if a >= b {
		fmt.Printf("'%s' is not lexically after '%s'.", a, b)
	}

	fmt.Printf("The lexical relationship is: %d", strings.Compare(a, b))
	fmt.Printf("The case-insensitive lexical relationship is: %d", strings.CompareFold(a, b))
}
func main() {
	compare("Hello", "Hello")
	compare("5", "5.0")
	compare("java", "Java")
	compare("Ĵ��V��", "Ĵ��V��")
	compare("Ĵ��V��", "ĵ��vá")
}
