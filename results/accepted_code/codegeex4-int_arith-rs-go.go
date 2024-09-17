package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	args := os.Args[1:]
	if len(args) < 2 {
		fmt.Println("Not enough arguments")
		return
	}

	a, err1 := strconv.Atoi(args[0])
	b, err2 := strconv.Atoi(args[1])

	if err1 != nil || err2 != nil {
		fmt.Println("Invalid input")
		return
	}

	fmt.Printf("sum:              %d\n", a+b)
	fmt.Printf("difference:       %d\n", a-b)
	fmt.Printf("product:          %d\n", a*b)
	fmt.Printf("integer quotient: %d\n", a/b) // truncates towards zero
	fmt.Printf("remainder:        %d\n", a%b) // same sign as first operand
}
