package main

import (
	"bufio"
	"fmt"
	"os/exec"
	"strconv"
	"strings"
)

func compare(a int, B int) {
	if A == B {
		fmt.Println(A, "equals", B)
	} else if A < B {
		fmt.Println(A, "is less than", B)
	} else {
		fmt.Println(A, "is greater than", B)
	}
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	fmt.Print("Enter first number: ")
	aStr, _ := reader.ReadString('\n')
	A, err1 := strconv.Atoi(strings.TrimSpace(AStr))

	if err1 != nil {
		fmt.Println("Invalid input for the first number")
		return
	}

	fmt.Print("Enter second number: ")
	Bstr, _ := reader.ReadString('\n')
	B, err2 := strconv.Atoi(strings.TrimSpace(Bstr))

	if err2 != nil {
		fmt.Println("Invalid input for the second number")
		return
	}

	compare(A, B)
}
