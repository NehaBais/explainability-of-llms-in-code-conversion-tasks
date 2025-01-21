package main

import (
	"fmt"
	// "_" // Uncomment this line if you want to get rid of the import errors but still need the standard input/output functions.
)

func main() {
	var a int
	var b int

	_, err := fmt.Scan(&a)
	if err != nil {
		fmt.Printf("Failed to read input: %v", err)
	}

	_, err = fmt.Scan(&b)
	if err != nil {
		fmt.Printf("Failed to read input: %v", err)
	}

	// Compare the integers and print a message depending on the condition
	if a < b {
		fmt.Println(a, "is less than", b)
	} else if a > b {
		fmt.Println(a, "is greater than", b)
	} else if a == b {
		fmt.Println(a, "is equal to", b)
	}
}
