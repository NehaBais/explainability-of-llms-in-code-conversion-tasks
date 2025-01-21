package main

import "fmt"

func compare(a interface{}, b interface{}) {
	switch a := a.(type) {
	case string:
		fmt.Printf("%v is of type %T and %v is of type %T\n", a, a, b, b)
		if s, ok := b.(string); ok {
			if a < s {
				fmt.Printf("%v is strictly less than  %v\n", a, s)
			}
			if a <= s {
				fmt.Printf("%v is less than or equal to %v\n", a, s)
			}
			if a > s {
				fmt.Printf("%v is strictly greater than  %v\n", a, s)
			}
			if a >= s {
				fmt.Printf("%v is greater than or equal to %v\n", a, s)
			}
			if a == s {
				fmt.Printf("%v is equal to %v\n", a, s)
			}
			if a != s {
				fmt.Printf("%v is not equal to %v\n", a, s)
			}
		}
	default:
		panic("Unhandled type")
	}

}

func main() {
	compare("YUP", "YUP")
	compare("BALL", "BELL")
	compare("24", "123")
	// compare(5.0, 5) // Uncommenting this will cause a compilation error as Golang doesn't support direct comparison between different types
}
