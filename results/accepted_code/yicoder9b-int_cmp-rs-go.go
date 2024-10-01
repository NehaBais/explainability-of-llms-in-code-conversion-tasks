package main

import (
	"bufio"
	"fmt"
	"os"
)

func getInput() (int, int) {
	scanner := bufio.NewScanner(os.Stdin)
	var nums [2]int
	for i := range nums {
		if scanner.Scan() {
			fmt.Sscan(scanner.Text(), &nums[i])
		} else {
			fmt.Fprintf(os.Stderr, "Failed to read line %v\n", scanner.Err())
			os.Exit(-1)
		}
	}
	return nums[0], nums[1]
}

func main() {
	a, b := getInput()
	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	} else if a == b {
		fmt.Printf("%d equals %d\n", a, b)
	} else if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
