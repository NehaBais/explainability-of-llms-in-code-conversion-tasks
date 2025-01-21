package main

import (
	"fmt"
	"math"
	"strconv"
)

func main() {
	args := os.Args[1:] // Get command line arguments, ignoring the first two elements (node and script name)
	if len(args) != 2 {
		fmt.Println("Usage: go run script_name.go <a> <b>")
		return
	}

	a, err := strconv.Atoi(args[0]) // Convert the first argument to an integer
	if err != nil {
		fmt.Printf("Error converting arg 1: %v\n", err)
		return
	}

	b, err := strconv.Atoi(args[1]) // Convert the second argument to an integer
	if err != nil {
		fmt.Printf("Error converting arg 2: %v\n", err)
		return
	}

	sum := a + b
	difference := a - b
	product := a * b

	var division float64
	if b == 0 {
		division = math.Inf(1) // Divide by zero
	} else {
		division = float64(a) / float64(b)
	}

	fmt.Printf("a + b = %d\n", sum)
	fmt.Printf("a - b = %d\n", difference)
	fmt.Printf("a * b = %d\n", product)

	// Determine the sign of the remainder
	if (a > 0 && b < 0) || (a < 0 && b > 0) {
		fmt.Printf("a %% b = %d\n", a%b)
	} else if a == 0 {
		fmt.Println("a %% b = 0")
	} else {
		fmt.Printf("a %% b = -%d\n", a%b) // Remainder will be negative for a positive and negative number
	}

	if division == math.Inf(1) {
		fmt.Printf("a %% b = Infinity\n")
	} else if division == math.Inf(-1) {
		fmt.Printf("a %% b = -Infinity\n")
	}
}
