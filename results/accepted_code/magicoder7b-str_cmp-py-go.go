package main

import (
	"fmt"
	"unicode"
)

func compare(a interface{}, b interface{}) {
	fmt.Printf("%v is of type %T and %v is of type %T\n", a, a, b, b)

	if a < b {
		fmt.Printf("%v is strictly less than  %v\n", a, b)
	}
	if a <= b {
		fmt.Printf("%v is less than or equal to %v\n", a, b)
	}
	if a > b {
		fmt.Printf("%v is strictly greater than  %v\n", a, b)
	}
	if a >= b {
		fmt.Printf("%v is greater than or equal to %v\n", a, b)
	}
	if a == b {
		fmt.Printf("%v is equal to %v\n", a, b)
	}
	if a != b {
		fmt.Printf("%v is not equal to %v\n", a, b)
	}
	if a == a && a != b {
		fmt.Printf("%v has object identity with %v\n", a, b)
	}
	if a == a && a == b {
		fmt.Printf("%v has negated object identity with %v\n", a, b)
	}
}

func main() {
	compare("YUP", "YUP")
	compare("BALL", "BELL")
	compare("24", "123")
	compare(24, 123)
	compare(5.0, 5)
}
