package main

import (
	"fmt"
	//"strconv"
	"strings"
)

func compare(a interface{}, b interface{}) {
	fmt.Printf("%v is of type %T and %v is of type %T\n", a, a, b, b)
	switch a := a.(type) {
	case string:
		b, ok := b.(string)
		if !ok {
			fmt.Println("Types are not comparable")
			return
		}
		if a < b {
			fmt<｜begin▁of▁sentence｜> is lexically less than %r"  (a, b)
		}
		if a <= b {
			fmt.Printf("%q is lexically less than or equal to %q\n", a, b)
		}
		if a > b {
			fmt.Printf("%q is lexically greater than %q\n", a, b)
		}
		if a >= b {
			fmt.Printf("%q is lexically greater than or equal to %q\n", a, b)
		}
		if a == b {
			fmt.Printf("%q is equal to %q\n", a, b)
		}
	case int: //numeric comparison for integers...
	case float64:// ... and floating point numbers
	default: 
		fmt.Println("Unsupported type")
	}
}

func main() {
	compare("YUP", "YUP")
	compare("BALL", "BELL")
	compare(24, 123) //This line would work now.
	compare(strings.ToLower("24"), strings.ToLower("123")) //Case insensitive comparison
	fmt.Println()
	i := 5.0
	j := 5
	// compare(i, j)  This line will not compile because i and j are of different types now.
	fmt.Printf("%v is of type %T and %v is of type %T\n", i, i, j, j)
	if i < float64(j) {
		fmt.Printf("%v is numerically less than %v\n", i, j)
	}
	// Rest of the code for lexical comparison...
}