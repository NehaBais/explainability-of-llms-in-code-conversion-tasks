package main

import "fmt"

func main() {
	// Taking two integer inputs from user using fmt.Scan()
	var a, b int
	fmt.Scan(&a)
	fmt.Scan(&b)

	// Performing comparison for each case separately and printing the result based on the conditions met
	if a < b {
		fmt.Println("a is less than b")
	} else if a > b {
		fmt.Println("a is greater than b")
	} else if a == b {
		fmt.Println("a is equal to b")
	}
}
