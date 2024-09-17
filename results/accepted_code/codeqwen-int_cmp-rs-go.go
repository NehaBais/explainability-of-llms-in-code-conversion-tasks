package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	fmt.Println("Enter two integers separated by a space")
	text, _ := reader.ReadString('\n')
	nums := parseInput(text)
	A := nums[0]
	b := nums[1]

	if A < b {
		fmt.Printf("%d is less than %d", A, b)
	} else if A == b {
		fmt.Printf("%d equals %d", A, b)
	} else if A > b {
		fmt.Printf("%d is greater than %d", A, b)
	}
}

func parseInput(input string) []int {
	nums := make([]int, 2)
	_, err := fmt.Sscan(input, &nums[0], &nums[1])
	if err != nil {
		fmt.Println("Error parsing input", err)
		os.Exit(1)
	}
	return nums
}
