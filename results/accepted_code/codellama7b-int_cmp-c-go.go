package main

import "fmt"

func main() {
	var a, b int

	fmt.Printf("Enter two integers: ")
	fmt.Scanf("%d %d", &a, &b)

	if a < b {
		fmt.Println(a, "is less than", b)
	} else if a == b {
		fmt.Println(a, "is equal to", b)
	} else if a > b {
		fmt.Println(a, "is greater than", b)
	}
}
