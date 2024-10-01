package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func readInput() int {
	reader := bufio.NewReader(os.Stdin)
	fmt.Print("Enter a number: ")
	text, _ := reader.ReadString('\n')
	number, _ := strconv.Atoi(text)
	return number
}

func main() {
	a := readInput()
	b := readInput()

	if a < b {
		fmt.Println("a is less than b")
	} else if a > b {
		fmt.Println("a is greater than b")
	} else {
		fmt.Println("a is equal to b")
	}
}
