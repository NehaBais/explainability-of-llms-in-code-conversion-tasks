package main

import "fmt"

func compare(a, b string) {
	if a == b {
		fmt.Printf("%s and %s are lexically equal.\n", a, b)
	} else {
		fmt.Printf("%s and %s are not lexically equal.\n", a, b)
	}
	if a == strings.Title(b) {
		fmt.Printf("%s and %s are case-insensitive lexically equal.\n", a, b)
	} else {
		fmt.Printf("%s and %s are not case-insensitive lexically equal.\n", a, b)
	}
	switch {
	case a < b:
		fmt.Printf("%s is lexically before %s.\n", a, b)
	case a > b:
		fmt.Printf("%s is lexically after %s.\n", a, b)
	}
	switch {
	case a <= b:
		fmt.Printf("%s is not lexically before %s.\n", a, b)
	case a >= b:
		fmt.Printf("%s is not lexically after %s.\n", a, b)
	}
	rel := strings.Compare(a, b)
	insRel := strings.CompareFold(a, b)
	fmt.Printf("The lexical relationship is: %d\n", rel)
	fmt.Printf("The case-insensitive lexical relationship is: %d\n", insRel)
}
func main() {
	compare("Hello", "Hello")
	compare("5", "5.0")
	compare("java", "Java")
	compare("ĴÃVÁ", "ĴÃVÁ")
	compare("ĴÃVÁ", "ĵãvá")
}
