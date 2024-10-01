package main

import (
	"fmt"
	"strings"
)

func compare(a interface{}, b interface{}) {
	fmt.Printf("%q is of type %T and %q is of type %T\n", a, a, b, b)
	switch a := a.(type) {
	case string:
		bStr, ok := b.(string)
		if !ok {
			return
		}

		fmt.Printf("%q is strictly less than  %q : %t\n", a, bStr, a < bStr)
		fmt.Printf("%q is less than or equal to %q : %t\n", a, bStr, a <= bStr)
		fmt.Printf("%q is strictly greater than  %q : %t\n", a, bStr, a > bStr)
		fmt.Printf("%q is greater than or equal to %q : %t\n", a, bStr, a >= bStr)
		fmt.Printf("%q is equal to %q : %t\n", a, bStr, a == bStr)
		fmt.Printf("%q is not equal to %q : %t\n", a, bStr, a != bStr)
		fmt.Printf("%q has lexical comparison value of %d compared to %q\n", a, strings.Compare(a, bStr), bStr)
	case int:
		bInt, ok := b.(int)
		if !ok {
			return
		}

		fmt.Printf("%d is strictly less than  %d : %t\n", a, bInt, a < bInt)
		fmt.Printf("%d is less than or equal to %d : %t\n", a, bInt, a <= bInt)
		fmt.Printf("%d is strictly greater than  %d : %t\n", a, bInt, a > bInt)
		fmt.Printf("%d is greater than or equal to %d : %t\n", a, bInt, a >= bInt)
		fmt.Printf("%d is equal to %d : %t\n", a, bInt, a == bInt)
		fmt.Printf("%d is not equal to %d : %t\n", a, bInt, a != bInt)
	}
}

func main() {
	compare("YUP", "YUP")
	compare("BALL", "BELL")
	compare("24", "123")
	compare(24, 123)
	// compare(5.0, 5) // Go does not support implicit type conversion for floating point numbers
}
