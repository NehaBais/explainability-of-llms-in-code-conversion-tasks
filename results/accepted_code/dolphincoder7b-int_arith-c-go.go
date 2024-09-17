package main

import "fmt"
import "os"
import "strconv"

func main() {
	if len(os.Args) < 3 {
		fmt.Println("Usage: go run main.go number1 number2")
		os.Exit(1)
	}

	a, err := strconv.Atoi(os.Args[len(os.Args)-2])
	if err != nil {
		fmt.Printf("Invalid first argument: %v\n", err)
		os.Exit(2)
	}

	b, err := strconv.Atoi(os.Args[len(os.Args)-1])
	if err != nil {
		fmt.Printf("Invalid second argument: %v\n", err)
		os.Exit(3)
	}

	fmt.Println("a+b = ", a+b)
	fmt.Println("a-b = ", a-b)
	fmt.Println("a*b = ", a*b)
	fmt.Println("a/b = ", a/b) /* truncates towards 0 */
	fmt.Println("a%b = ", a%b) /* same sign as first operand */
}
