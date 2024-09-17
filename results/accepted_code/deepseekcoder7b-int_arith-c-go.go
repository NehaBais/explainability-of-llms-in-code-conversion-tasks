package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	if len(os.Args) < 3 {
		fmt.Println("Please provide two integer arguments.")
		os.Exit(1)
	}

	b, err := strconv.Atoi(os.Args[2])
	if err != nil {
		fmt.Println("Second argument should be an integer")
		os.Exit(2)
	}

	a, err := strconv.Atoi(os.Args[1])
	if err != nil {
		fmt.Println("First argument should be an integer.")
		os.Exit(3)
	}

	fmt.Printf("a+b = %d\n", a+b)
	fmt.Printf("a-b = %d\n", a-b)
	fmt.Printf("a*b = %d\n", a*b)
	fmt.Printf("a/b = %d (truncated towards zero)\n", a/b) // truncates towards zero in Go

	remainder := a % b
	signMatch := "Sign of the first operand"
	if remainder*b < 0 {
		signMatch = "Sign of the second operand"
	} else if remainder == 0 {
		signMatch = "Remainder is zero"
	}

	fmt.Printf("a%%b = %d (%s)\n", a%b, signMatch) // same sign as first operand in Go
}
