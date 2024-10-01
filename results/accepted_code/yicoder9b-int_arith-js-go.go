package main

import (
	"fmt"
	"math"
	"os"
	"strconv"
)

func main() {
	if len(os.Args) < 3 { // Checks if the user has provided at least two arguments
		fmt.Println("You need to provide two integers as arguments")
		return
	}

	var a, b int

	a, err := strconv.Atoi(os.Args[1]) // Converts the first argument into an integer
	if err != nil {
		fmt.Println(err)
		return // exit if the conversion fails
	}

	b, err = strconv.Atoi(os.Args[2]) // Converts the second argument into an integer
	if err != nil {
		fmt.Println(err)
		return // exit if the conversion fails
	}

	sum := a + b
	difference := a - b
	product := a * b
	quotient := a / b                                       // It rounds towards zero
	remainder := a % b                                      // This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator, and its sign matches the sign of the first operand
	exponentiation := int(math.Pow(float64(a), float64(b))) // Exponentiation operation
	fmt.Printf("a + b = %d\n", sum)                         // The %d syntax is a placeholder that is replaced by the sum
	fmt.Printf("a - b = %d\n", difference)
	fmt.Printf("a * b = %d\n", product)
	fmt.Printf("a / b = %d\n", quotient)
	fmt.Printf("a %% b = %d\n", remainder)
	fmt.Printf("a ^ b = %d\n", exponentiation)
}
