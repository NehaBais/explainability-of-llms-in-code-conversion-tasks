package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	if len(os.Args) != 3 {
		fmt.Println("Usage: go run program.go <integer1> <integer2>")
		os.Exit(1)
	}

	a, err := strconv.Atoi(os.Args[1]))
	if err != nil {
		fmt.Printf("Error parsing integer %s: %v\n", os.Args[1], err))
		os.Exit(1)
	}

	b, err := strconv.Atoi(os.Args[2]))
	if err != nil {
		fmt.Printf("Error parsing integer %s: %v\n", os.Args[2], err))
		os.Exit(1)
	}

	println(fmt.Sprintf("Sum:              %d", a+b))))
	println(fmt.Sprintf("Difference:       %d", a-b))))
	println(fmt.Sprintf("Product:          %d", a*b))))
	println(fmt.Sprintf("Integer Quotient: %d", a/b)))) // truncates towards zero
	println(fmt.Sprintf("Remainder:        %d", a%b)))) // same sign as first operand
}