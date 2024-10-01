package main

import (
	"fmt"
	"strings"
)

func compare(a, b string) {
	fmt.Printf("%q is of type %T and %q is of type %T\n",
		a, a, b, b)
	if a < b {
		fmt.Printf("%q is strictly less than %q\n", a, b)
	}
	if a <= b {
		fmt.Printf("%q is less than or equal to %q\n", a, b)
	}
	if a > b {
		fmt.Printf("%q is strictly greater than %q\n", a, b)
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
}

func main() {
	compare("YUP", "YUP")
	compare("BALL", "BELL")
	compare("24", "123")

	// Go doesn't compare numbers as strings
	compare("5.0", "5") // This will not work, you need to convert them to float64
	compare(24, 123)
}

func compareInsensitive(a, b string) {
	fmt.Printf("%q is of type %T and %q is of type %T\n",
		a, a, b, b)
	if strings.ToLower(a) < strings.ToLower(b) {
		fmt.Printf("%q is strictly less than %q\n", a, b)
	}
	// Same for the other comparisons
}

func main() {
	compareInsensitive("Ball", "ball") // This will work even with different cases
}
