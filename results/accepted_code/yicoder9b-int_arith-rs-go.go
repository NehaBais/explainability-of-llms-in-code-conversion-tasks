package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	if len(os.Args) < 3 {
		fmt.Println("Please provide two integer arguments")
		return
	}

	a, _ := strconv.Atoi(os.Args[1])
	b, _ := strconv.Atoi(os.Args[2])

	fmt.Printf("sum:             %d\n", a+b)
	fmt.Printf("difference:      %d\n", a-b)
	fmt.Printf("product:         %d\n", a*b)
	fmt.Printf("integer quotient:%d\n", a/b) // truncates towards zero
	fmt.Printf("remainder:       %d\n", a%b) // same sign as first operand
}
