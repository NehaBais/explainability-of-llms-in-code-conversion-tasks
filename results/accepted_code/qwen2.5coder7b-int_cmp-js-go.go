package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func compare(a, b int) {
	if a == b {
		fmt.Printf("%d equals %d\n", a, b)
	} else if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	} else {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}

func main() {
	reader := bufio.NewReader(os.Stdin)

	fmt.Print("Enter first integer: ")
	aStr, _ := reader.ReadString('\n')
	a, _ := strconv.Atoi(aStr[:len(aStr)-1])

	fmt.Print("Enter second integer: ")
	bStr, _ := reader.ReadString('\n')
	b, _ := strconv.Atoi(bStr[:len(bStr)-1])

	compare(a, b)
}
