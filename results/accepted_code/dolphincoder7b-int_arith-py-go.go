package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {

	var input1, input2 string
	fmt.Print("Enter the first number: ")
	_, err := fmt.Scanf("%s", &input1)
	if err != nil {
		panic(err)
	}
	fmt.Print("Enter the second number: ")
	_, err = fmt.Scanf("%s", &input2)
	if err != nil {
		panic(err)
	}

	i1, _ := strconv.Atoi(input1)
	i2, _ := strconv.Atoi(input2)

	sum := i1 + i2
	diff := i1 - i2
	prod := i1 * i2
	quotient := i1 / i2
	remainder := (i1 % i2) * ((i1 ^ i2&^(i1^i2-1)) >> uint(63)) // Calculate the sign of `remainder` based on the sign of `i1` and `i2`
	exp := int(math.Pow(float64(i1), float64(i2)))

	fmt.Printf("Sum: %d\n", sum)
	fmt.Printf("Difference: %d\n", diff)
	fmt.Printf("Product: %d\n", prod)
	fmt.Printf("Integer quotient: %d\n", quotient)
	fmt.Printf("Float quotient: %.2f\n", float64(i1)/float64(i2)) // This will always round to 0, use math.Floor() instead of int for this case
	fmt.Printf("Whole remainder: %d\n", remainder)
	fmt.Printf("Actual remainder: %d\n", i1%i2) // Actual remainder depends on the sign of `i1` and `i2`. This will always be 0 if they are both positive, else positive or negative based on `i1`'s sign
	fmt.Printf("Exponentiation: %d\n", exp)
}
