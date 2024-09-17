package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	fmt.Print("Enter first integer: ")
	a, _ := reader.ReadString('\n')
	a = a[:len(a)-1]
	intA, err := strconv.Atoi(a)
	if err != nil {
		panic(err)
	}

	fmt.Print("Enter second integer: ")
	b, _ := reader.ReadString('\n')
	b = b[:len(b)-1]
	intB, err := strconv.Atoi(b)
	if err != nil {
		panic(err)
	}

	if intA < intB {
		fmt.Printf("%d is less than %d\n", intA, intB)
	} else if intA == intB {
		fmt.Printf("%d equals %d\n", intA, intB)
	} else {
		fmt.Printf("%d is greater than %d\n", intA, intB)
	}
}
