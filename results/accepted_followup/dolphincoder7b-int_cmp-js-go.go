package main

import "fmt"

func compare(a int, b int) {
	if a == b {
		fmt.Println(a, "equals", b)
	} else if a < b {
		fmt.Println(a, "is less than", b)
	} else if a > b {
		fmt.Println(a, "is greater than", b)
	}
}
func main() {
	// Using type coercion
	compare(10, 20)
	compare(50, 30)
	compare(70, 60)

	// Without using type coercion and using standards
	// Written for browsers
	// assumption of a and b are both integers if typeof test passes
	compare(8, 9)
	compare(12, 24)
	compare(int('1'), int('2'))
}
