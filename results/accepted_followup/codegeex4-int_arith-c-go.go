package main

import (
	"fmt"
	"math/big"
	"os"
)

func main() {
	var a, b int64
	fmt.Print("Enter the first integer: ")
	_, err := fmt.Scanf("%d", &a)
	if err != nil {
		os.Exit(1)
	}
	fmt.Print("Enter the second integer: ")
	_, err = fmt.Scanf("%d", &b)
	if err != nil {
		os.Exit(1)
	}

	if b == 0 {
		os.Exit(2)
	}

	fmt.Printf("a + b = %d\n", a+b)
	fmt.Printf("a - b = %d\n", a-b)
	fmt.Printf("a * b = %d\n", a*b)

	bigA := big.NewInt(a)
	bigB := big.NewInt(b)
	_, remainder := new(big.Int).QuoRem(bigA, bigB, new(big.Int))
	fmt.Printf("a / b (truncates towards 0) = %s\n", remainder.String())

	remainder, _ = new(big.Int).Mod(bigA, bigB)
	fmt.Printf("a %% b (same sign as first operand) = %s\n", remainder.String())
}
