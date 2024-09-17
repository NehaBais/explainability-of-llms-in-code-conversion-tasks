package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	// Get two integers from the user
	var a, b int
	reader := bufio.NewReader(os.Stdin)
	fmt.Print("Enter the first integer: ")
	aStr, _ := reader.ReadString('\n')
	a, err := strconv.Atoi(strings.TrimSpace(aStr))
	if err != nil {
		fmt.Println("Error reading input")
		return
	}
	fmt.Print("Enter the second integer: ")
	bStr, _ := reader.ReadString('\n')
	b, err := strconv.Atoi(strings.TrimSpace(bStr))
	if err != nil {
		fmt.Println("Error reading input")
		return
	}

	// Test for less-than
	if a < b {
		fmt.Printf("%d is less than %d", a, b)
	}

	// Test for equality
	if a == b {
		fmt.Printf("%d is equal to %d", a, b)
	}

	// Test for greater-than
	if a > b {
		fmt.Printf("%d is greater than %d", a, b)
	}
}
