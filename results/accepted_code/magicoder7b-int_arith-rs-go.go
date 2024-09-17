package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	args := os.Args[1:]
	a, _ := strconv.Atoi(args[0])
	b, _ := strconv.Atoi(args[1])

	fmt.Printf("sum:              %d\n", a+b)
	fmt.Printf("difference:       %d\n", a-b)
	fmt.Printf("product:          %d\n", a*b)
	fmt.Printf("integer quotient: %d\n", a/b) // truncates towards zero
	fmt.Printf("remainder:        %d\n", a%b) // same sign as first operand
}
