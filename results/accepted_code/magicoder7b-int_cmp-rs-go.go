package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	// Get the first integer from user
	fmt.Print("Enter first number: ")
	_, err1 := fmt.Scan(&a)

	if err1 != nil {
		panic(err1)
	}

	// Get the second integer from user
	fmt.Print("Enter second number: ")
	_, err2 := fmt.Scan(&b)

	if err2 != nil {
		panic(err2)
	}

	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	} else if a == b {
		fmt.Printf("%d equals %d\n", a, b)
	} else if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
