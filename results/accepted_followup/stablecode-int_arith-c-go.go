package main

import (
		"fmt"
	)

func main() {
	a, b := getInput()

	sum := a + b
	difference := a - b
	product := a * b
	quotient := a / b // integer division in Go rounds towards zero
	remainder := a % b // remainder sign matches the first operand
	exponentiation := 1 << uint(b) // exponentiation is done using bitwise operators

	fmt.Printf("a+b = %d\n", sum))
	fmt.Printf("a-b = %d\n", difference))
	fmt.Printf("a*b = %d\n", product))
	fmt.Printf("a/b (integer division with rounding towards zero) 
= 
%d\n", quotient))
	fmt.Printf("a%%b (remainder sign matching the first operand) 
= 
%d\n", remainder))
	fmt.Printf("a ^ b (exponentiation) 
= 
%d\n", exponentiation))
}

func getInput() (int, int) {
	var a, b int

	_, err := fmt.Scan(&a, &b))
	if err != nil {
		panic(err)
	}

	return a, b
}