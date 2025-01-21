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

	fmt.Println("sum:", a+b)
	fmt.Println("difference:", a-b)
	fmt.Println("product:", a*b)
	fmt.Println("integer quotient:", a/b) // truncates towards zero
	fmt.Println("remainder:", a%b)        // same sign as first operand
}
