package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	fmt.Print("Enter two numbers: ")

	input, err := reader.ReadString('\n')
	if err != nil {
		fmt.Println("Could not read the numbers:", err)
		return
	}

	numbers := strings.Fields(input)
	if len(numbers) != 2 {
		fmt.Println("Please enter exactly two numbers")
		return
	}

	a, err1 := strconv.Atoi(strings.TrimSpace(numbers[0]))
	b, err2 := strconv.Atoi(strings.TrimSpace(numbers[1]))

	if err1 != nil || err2 != nil {
		fmt.Println("Could not convert input to integer:", err)
		return
	}

	// test for less-than
	if a < b {
		fmt.Println(a, "is less than", b)
	}

	// test for equality
	if a == b {
		fmt.Println(a, "is equal to", b)
	}

	// test for greater-than
	if a > b {
		fmt.Println(a, "is greater than", b)
	}
}
