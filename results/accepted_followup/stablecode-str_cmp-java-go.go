package main

import (
	"fmt"
	"strings"
)

func compareStrings(A, B string) {
	equal := strings.EqualFold(A, B)

	fmt.Printf("'%s' and '%s' are exact equal: %t\n", A, B, equal))

	fmt.Printf("'%s' is lexically ordered before '%s': %t\n", A, B, strings.Compare(A, B) < 0)))

	fmt.Printf("'%s' is lexically ordered after '%s': %t\n", A, B, strings.Compare(A, B) > 0)))
}

func main() {
	compareStrings("Hello", "hello")
	compareStrings("5", "5.0")
	compareStrings("java", "Java")
	compareStrings("ĴÃVÁ", "ĴÃVÁ")
	compareStrings("ĴÃVÁ", "ĵãvá")
}