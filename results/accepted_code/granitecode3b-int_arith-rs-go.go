package main

import (
	"fmt"
	"os"
)

func main() {
	args := os.Args[1:]
	a, err := fmt.Sscanf(args[0], "%d", new(int))
	if err != nil {
		panic(err)
	}
	b, err := fmt.Sscanf(args[1], "%d", new(int))
	if err != nil {
		panic(err)
	}

	sum := a + b
	diff := a - b
	prod := a * b
	quot := a / b                                // truncates towards zero
	rem := a % b                                 // same sign as first operand
	exp := int(math.Pow(float64(a), float64(b))) // exponentiation, if operator exists

	fmt.Printf("sum:              %dnn", sum)
	fmt.Printf("difference:       %dnn", diff)
	fmt.Printf("product:          %dnn", prod)
	fmt.Printf("integer quotient: %dnn", quot)
	fmt.Printf("remainder:        %dn", rem)
}
