package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	a, err := strconv.Atoi(scanner.Text())
	if err != nil {
		fmt.Println("Invalid input:", err)
		os.Exit(1)
	}
	scanner.Scan()
	b, err := strconv.Atoi(scanner.Text())
	if err != nil {
		fmt.Println("Invalid input:", err)
		os.Exit(1)
	}
	sum := a + b
	difference := a - b
	product := a * b
	division := a / b
	remainder := a % b
	fmt.Printf("%d + %d = %dn", a, b, sum)
	fmt.Printf("%d - %d = %dn", a, b, difference)
	fmt.Printf("%d * %d = %dn", a, b, product)
	fmt.Printf("quotient of %d / %d = %dns truncating towards 0n", a, b, division)
	fmt.Printf("remainder of %d / %d = %dns same sign as first operandn", a, b, remainder)
}
