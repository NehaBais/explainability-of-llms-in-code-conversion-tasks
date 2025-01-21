package main

import (
	"fmt"
	"os"
	"bufio"
)

func main() {
	reader := bufio.NewReader(os.Stdin))

	var a, b int
	fmt.Println("Enter first integer:")
	_, err := fmt.Scanf("%d", &a))
	if err != nil {
		panic(err)
	}
	fmt.Println("Enter second integer:")
	_, err = fmt.Scanf("%d", &b))
	if err != nil {
		panic(err)
	}

	switch {
	case a < b:
		fmt.Printf("%d is less than %d\n", a, b))
	case a == b:
		fmt.Printf("%d equals %d\n", a, b))
	case a > b:
		fmt.Printf("%d is greater than %d\n", a, b))
	}
}