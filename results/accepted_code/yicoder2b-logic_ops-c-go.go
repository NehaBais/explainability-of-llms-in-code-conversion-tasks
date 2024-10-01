package main

import "fmt"

func print_logic(a bool, b bool) {
	// '&&' is the 'and' operator in Go. The output will be false if both a and b are false.
	fmt.Printf("a and b is %t\n", a && b)

	// '||' is the 'or' operator in Go. The output will be true if either a or b is true.
	fmt.Printf("a or b is %t\n", a || b)

	// '!' is the 'not' operator in Go. It changes true to false and false to true.
	fmt.Printf("not a is %t\n", !a)
}
