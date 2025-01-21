package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	fmt.Print("Enter the first integer: ")
	input1, _ := reader.ReadString('\n')
	a, _ := strconv.Atoi(strings.TrimSpace(input1))

	fmt.Print("Enter the second integer: ")
	input2, _ := reader.ReadString('\n')
	b, _ := strconv.Atoi(strings.TrimSpace(input2))

	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	} else if a == b {
		fmt.Printf("%d equals %d\n", a, b)
	} else {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
