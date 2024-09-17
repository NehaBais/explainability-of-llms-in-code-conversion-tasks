package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	var a, b int
	fmt.Println("Enter the first integer: ")
	aStr, _ := reader.ReadString('\n')
	a, _ = strconv.Atoi(aStr)
	fmt.Println("Enter the second integer: ")
	bStr, _ := reader.ReadString('\n')
	b, _ = strconv.Atoi(bStr)

	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	} else if a == b {
		fmt.Printf("%d equals %d\n", a, b)
	} else if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
