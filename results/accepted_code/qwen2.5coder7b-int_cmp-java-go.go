package main

import (
	"fmt"
)

func main() {
	var num1, num2 int
	fmt.Print("Enter first number: ")
	fmt.Scan(&num1)
	fmt.Print("Enter second number: ")
	fmt.Scan(&num2)

	if num1 < num2 {
		fmt.Println(num1, "is less than", num2)
	}

	if num1 > num2 {
		fmt.Println(num1, "is greater than", num2)
	}

	if num1 == num2 {
		fmt.Println(num1, "is equal to", num2)
	}
}
