package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	if len(os.Args) < 3 {
		fmt.Println("Please provide two integers as arguments.")
		return
	}

	a, err := strconv.Atoi(os.Args[1])
	if err != nil {
		fmt.Println("Invalid input for a:", err)
		return
	}

	b, err := strconv.Atoi(os.Args[2])
	if err != nil {
		fmt.Println("Invalid input for b:", err)
		return
	}

	sum := a + b
	difference := a - b
	product := a * b
	division := float64(a) / float64(b)
	remainder := a % b
	exponentiation := math.Pow(float64(a), float64(b))

	fmt.Printf("a + b = %d\n", sum)
	fmt.Printf("a - b = %d\n", difference)
	fmt.Printf("a * b = %d\n", product)
	fmt.Printf("a / b = %.0f\n", division) // Golang does not have a direct way to print float64 without scientific notation, so we use %.0f for integer division result
	fmt.Printf("a %% b = %d\n", remainder)
	if len(os.Args) > 3 {
		fmt.Printf("a ^ b = %.0f\n", exponentiation) // Assuming Golang supports exponentiation, otherwise you might need to use a library for it
	}
}
