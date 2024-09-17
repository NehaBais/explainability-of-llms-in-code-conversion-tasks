package main

import "fmt"
import "os"

func compare(a int, b int) {
	if a == b {
		fmt.Printf("%d equals %d\n", a, b)
	}
	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	}
	if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}

func main() {
	var a int
	var b int

	// You may replace it with your logic to get input from users in real application
	fmt.Scan(&a)
	fmt.Scan(&b)

	compare(a, b)

	os.Exit(0)
}
