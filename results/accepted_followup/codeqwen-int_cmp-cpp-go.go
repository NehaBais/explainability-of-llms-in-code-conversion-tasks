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

	fmt.Println("Enter two integers separated by space: ")

	input, _ := reader.ReadString('\n')
	nums := strings.Fields(input)

	A, err1 := strconv.Atoi(nums[0])
	b, err2 := strconv.Atoi(nums[1])

	if err1 != nil || err2 != nil {
		fmt.Println("Invalid input")
		return
	}

	// test for less-than
	if A < b {
		fmt.Printf("%d Is less than %d\n", A, b)
	}

	// test for equality
	if A == b {
		fmt.Printf("%d Is equal to %d\n", A, b)
	}

	// test for greater-than
	if A > b {
		fmt.Printf("%d Is greater than %d\n", A, b)
	}
}
