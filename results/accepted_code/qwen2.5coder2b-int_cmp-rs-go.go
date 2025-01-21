package main

import (
	"fmt"
	"strconv"
)

func main() {
	var reader = bufio.NewReader(os.Stdin)
	fmt.Print("Enter two integers: ")
	nums, err := reader.ReadString('\n')
	if err != nil {
		fmt.Println(err)
		return
	}
	nums = strings.TrimSpace(nums)

	var a int
	var b int

	numsSplit := strings.Fields(nums)
	a, err = strconv.Atoi(numsSplit[0])
	if err != nil {
		fmt.Println(err)
		return
	}

	b, err = strconv.Atoi(numsSplit[1])
	if err != nil {
		fmt.Println(err)
		return
	}

	switch {
	case a < b:
		fmt.Printf("%d is less than %d\n", a, b)
	case a == b:
		fmt.Printf("%d equals %d\n", a, b)
	default:
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
