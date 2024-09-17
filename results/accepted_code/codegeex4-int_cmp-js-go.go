package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func compare(a int, b int) {
	if a == b {
		fmt.Println(a, "equals", b)
	}
	if a < b {
		fmt.Println(a, "is less than", b)
	}
	if a > b {
		fmt.Println(a, "is greater than", b)
	}
}

func main() {
	reader := bufio.NewReader(os.Stdin)

	fmt.Print("Enter first integer: ")
	firstInt, _ := reader.ReadString('\n')
	a, err := strconv.Atoi(firstInt)
	if err != nil {
		fmt.Println(err)
		return
	}

	fmt.Print("Enter second integer: ")
	secondInt, _ := reader.ReadString('\n')
	b, err := strconv.Atoi(secondInt)
	if err != nil {
		fmt.Println(err)
		return
	}

	compare(a, b)
}
