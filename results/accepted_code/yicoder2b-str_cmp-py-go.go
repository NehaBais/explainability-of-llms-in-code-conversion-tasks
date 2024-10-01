package main

import (
	"fmt"
	"strconv"
)

func compare(a string, b string) {
	fmt.Printf("\n%q is of type %s and %q is of type %s\n", a, strconv.TypeName(a), b, strconv.TypeName(b))
	if a < b {
		fmt.Printf("%q is strictly less than  %q\n", a, b)
	}
	if a <= b {
		fmt.Printf("%q is less than or equal to %q\n", a, b)
	}
	if a > b {
		fmt.Printf("%q is strictly greater than  %q\n", a, b)
	}
	if a >= b {
		fmt.Printf("%q is greater than or equal to %q\n", a, b)
	}
	if a == b {
		fmt.Printf("%q is equal to %q\n", a, b)
	}
	if a != b {
		fmt.Printf("%q is not equal to %q\n", a, b)
	}
	if a == b {
		fmt.Printf("%q has object identity with %q\n", a, b)
	}
	if a != b {
		fmt.Printf("%q has negated object identity with %q\n", a, b)
	}
}

func main() {
	compare("YUP", "YUP")
	compare("BALL", "BELL")
	compare("24", "123")
	a, _ := strconv.Atoi("24")
	b, _ := strconv.Atoi("123")
	compare(strconv.Itoa(a), strconv.Itoa(b))
}
