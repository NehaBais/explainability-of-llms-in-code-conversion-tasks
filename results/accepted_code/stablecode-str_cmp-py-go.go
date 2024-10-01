package main

import (
	"fmt"
	"reflect"
	"strings"
)

func compare(a interface{}, b interface{}) {
	printDetails(a, b))

	if a == b {
		fmt.Printf("'%v' is strictly equal to '%v'\n", a, b)
	} else if a != b {
		fmt.Printf("'%v' is not equal to '%v'\n", a, b))
	}

	if a < b {
		fmt.Printf("'%v' is strictly less than  '%v'\n", a, b))
	} else if a <= b {
		fmt.Printf("'%v' is less than or equal to '%v'\n", a, b))
	}

	if a > b {
		fmt.Printf("'%v' is strictly greater than  '%v'\n", a, b))
	} else if a >= b {
		fmt.Printf("'%v' is greater than or equal to '%v'\n", a, b))
	}

	if strings.Compare(a.(string), b.(string)) == 0) {
		fmt.Printf("'%v' and '%v' are lexically ordered\n", a, b))
	} else if strings.Compare(a.(string), b.(string)) < 0) {
		fmt.Printf("'%v' is lexicographically ordered before than the other ('%v')\n", a, b))
	} else {
		fmt.Printf("'%v' is lexicographically ordered after than the other ('%v')\n", a, b))
	}
}

func printDetails(a interface{}, b interface{}) {

	fmt.Printf("%r is of type %T and %r is of type %T\n",
		a, reflect.TypeOf(a),
		b, reflect.TypeOf(b)))
}

func main() {
	compare("YUP", "YUP")
	compare("BALL", "BELL")
	compare("24", "123")
	compare(24, 123)
	compare(5.0, 5)
}