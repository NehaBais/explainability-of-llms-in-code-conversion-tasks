package main

import (
	"fmt"
	"os"
)

func main() {
	args := os.Args[1:]
	a, _ := strconv.ParseInt(args[0], 10, 64)
	b, _ := strconv.ParseInt(args[1], 10, 64)

	fmt.Println("sum:", a+b)
	fmt.Println("difference:", a-b)
	fmt.Println("product:", a*b)
	fmt.Println("integer quotient:", a/b) // truncates towards zero
	fmt.Println("remainder:", a%b)        // same sign as first operand
}
