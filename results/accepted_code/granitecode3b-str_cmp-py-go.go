package main

import "fmt"

func compare(a, b interface{}) {
	fmt.Printf("%q is of type %T and %q is of type %Tn", a, a, b, b)
	switch {
	case a.(string) < b.(string):
		fmt.Printf("%q is strictly less than  %qn", a, b)
	case a.(string) <= b.(string):
		fmt.Printf("%q is less than or equal to %qn", a, b)
	case a.(string) > b.(string):
		fmt.Printf("%q is strictly greater than  %qn", a, b)
	case a.(string) >= b.(string):
		fmt.Printf("%q is greater than or equal to %qn", a, b)
	case a == b:
		fmt.Printf("%q is equal to %qn", a, b)
	case a != b:
		fmt.Printf("%q is not equal to %qn", a, b)
	case a == b:
		fmt.Printf("%q has object identity with %qn", a, b)
	case a != b:
		fmt.Printf("%q has negated object identity with %qn", a, b)
	default:
		fmt.Println("None of the above")
	}
}
func main() {
	compare("YUP", "YUP")
	compare("BALL", "BELL")
	compare("24", "123")
	compare(24, 123)
	compare(5.0, 5)
}
