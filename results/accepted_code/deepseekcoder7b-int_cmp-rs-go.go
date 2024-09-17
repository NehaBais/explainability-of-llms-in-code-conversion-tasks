package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	var nums []int
	for scanner.Scan() {
		num, err := strconv.Atoi(scanner.Text())
		if err != nil {
			fmt.Println("Error reading integer")
			return
		}
		nums = append(nums, num)
		if len(nums) == 2 {
			break
		}
	}
	a := nums[0]
	b := nums[1]
	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	} else if a == b {
		fmt.Printf("%d equals %d\n", a, b)
	} else {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
