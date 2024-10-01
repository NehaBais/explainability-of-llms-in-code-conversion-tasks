package main

import "fmt"

func main() {
	compare("Hello", "Hello")
	compare("5", "5.0")
	compare("java", "Java")
	compare("ĴÃVÁ", "ĴÃVÁ")
	compare("ĴÃVÁ", "ĵãvá")
}
func compare(A, B string) {
	if A == B {
		fmt.Printf("%s and %s are lexically equal.\n", A, B)
	} else {
		fmt.Printf("%s and %s are not lexically equal.\n", A, B)
	}

	if A != B { // A.equalsIgnoreCase(B) can't be represented directly in Go
		fmt.Printf("%s and %s are case-insensitive lexically equal.\n", A, B)
	} else {
		fmt.Printf("%s and %s are not case-insensitive lexically equal.\n", A, B)
	}

	if A < B { // compareTo() can't be represented directly in Go
		fmt.Printf("%s is lexically before %s\n", A, B)
	} else {
		fmt.Printf("%s is not lexically before %s\n", A, B)
	}

	if A > B { // compareTo() can't be represented directly in Go
		fmt.Printf("%s is lexically after %s\n", A, B)
	} else {
		fmt.Printf("%s is not lexically after %s\n", A, B)
	}

	fmt.Printf("The lexical relationship is: %d\n", len(A)-len(B)) // You may need to adjust this according to your language's string handling rules
	fmt.Printf("The case-insensitive lexical relationship is: %d\n", len(A)-len(B))
}
