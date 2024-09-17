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
	a = strings.TrimSuffix(a, "\n") // Remove trailing newline character

	fmt.Print("Enter second integer: ")
	b, _ := reader.ReadString('\n')
	b = strings.TrimSuffix(b, "\n") // Remove trailing newline character

	// convert string inputs to integers
	intA, _ := strconv.Atoi(a)
	intB, _ := strconv.Atoi(b)

	fmt.Printf("a+b = %d\n", intA+intB) // sum
	fmt.Printf("a-b = %d\n", intA-intB) // difference
	fmt.Printf("a*b = %d\n", intA*intB) // product

	if intB != 0 {
		fmt.Printf("a/b = %d, remainder %d\n", intA/intB, intA%intB) // quotient and remainder
	} else {
		fmt.Println("Division by zero error")
	} // integer division(quotient), modulo(remainder)
}
