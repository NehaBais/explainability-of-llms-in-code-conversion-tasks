package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	if len(os.Args) != 3 {
		panic("Expect two integer arguments")
	}

	a, err := strconv.Atoi(os.Args[1])
	b, err := strconv.Atoi(os.Args[2])
	if err != nil {
		panic(err)
	}

	sum := a + b
	difference := a - b
	product := a * b
	quotient := float64(a) / float64(b) // Go does not support integer division; this is nearest-even rounding
	remainder := a % b                  // The sign of the remainder matches the sign of 'a' unless 'a' and 'b' have different signs

	fmt.Printf("a + b = %d\n", sum) // Note: Go doesn't use printf-style placeholders like JavaScript does; we simply print the variable name followed by an equal sign, followed by the variable value
	fmt.Printf("a - b = %d\n", difference)
	fmt.Printf("a * b = %d\n", product)
	fmt.Printf("a / b = %.2f\n", quotient) // The "%.2f" prints the number as a floating-point number to 2 decimal places
	fmt.Printf("a %% b = %d\n", remainder)
}
