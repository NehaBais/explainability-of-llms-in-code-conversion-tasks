package main

import "fmt"

func main() {
	var a, b int
	fmt.Scan(&a, &b)

	fmt.Println("sum:", a+b)
	fmt.Println("difference:", a-b)
	fmt.Println("product:", a*b)
	fmt.Println("integer quotient:", a/b) // truncates towards zero
	fmt.Println("remainder:", a%b)        // same sign as first operand
}
