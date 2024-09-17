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
	fmt.Print("Enter value of a: ")
	a, _ := reader.ReadString('\n')
	a = strings.TrimSuffix(a, "\r\n")

	fmt.Print("Enter value of b: ")
	b, _ := reader.ReadString('\n')
	b = strings.TrimSuffix(b, "\r\n")

	ai, err1 := strconv.Atoi(a)
	bi, err2 := strconv.Atoi(b)

	if err1 != nil || err2 != nil {
		fmt.Println("Invalid input")
		return
	}

	if ai < bi {
		fmt.Println("a is less than b")
	} else if ai > bi {
		fmt.Println("a is greater than b")
	} else {
		fmt.Println("a is equal to b")
	}
}
