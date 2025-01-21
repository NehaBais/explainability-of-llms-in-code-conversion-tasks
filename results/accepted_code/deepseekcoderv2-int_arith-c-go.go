package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	if len(os.Args) < 3 {
		fmt.Println("Please provide two integers as command-line arguments.")
		return
	}

	a, err1 := strconv.Atoi(os.Args[1])
	b, err2 := strconv.Atoi(os.Args[2])

	if err1 != nil || err2 != nil {
		fmt.Println("Both arguments must be integers.")
		return
	}

	if b == 0 {
		fmt.Println("Division by zero is not allowed.")
		return
	}

	fmt.Printf("a+b = %d\n", a+b)
	fmt.Printf("a-b = %d\n", a-b)
	fmt.Printf("a*b = %d\n", a*b)
	fmt.Printf("a/b = %d (truncates towards zero)\n", a/b)      // truncates towards zero in Go as well
	fmt.Printf("a%%b = %d (same sign as first operand)\n", a%b) // same sign as first operand in Go
}
