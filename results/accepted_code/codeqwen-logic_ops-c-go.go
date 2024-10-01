package main

import "fmt"

func print_logic(A int, b int) {
	fmt.Printf("A and b is %t\n", A&b == 1) // bitwise AND operation in Go
	fmt.Printf("A or b is %t\n", A|b != 0)  // bitwise OR operation in Go
	fmt.Printf("not a is %t\n", A == 0)     // bitwise NOT operation in Go
}

func main() {
	print_logic(2, 3) // call the function with test data
}
