*/
package main

import "fmt"

func main() {
	var a, b int
	fmt.Print("Enter two integers: ")
	fmt.Scanln(&a, &b)
	fmt.Printf("%d + %d = %d\n", a, b, a+b)
	fmt.Printf("%d - %d = %d\n", a, b, a-b)
	fmt.Printf("%d * %d = %d\n", a, b, a*b)
	fmt.Printf("%d / %d = %d (truncates towards 0)\n", a, b, a/b)
	if b == 0 {
		fmt.Println("Cannot divide by zero")
	} else if b > 0 && a%b != 0 { // remainder sign same as first operand
		fmt.Printf("%d %% %d = %d (remainder has the same sign as the first operand)\n", a, b, a%b)
	} else if b < 0 && a%b != 0 { // remainder sign same as second operand
		fmt.Printf("%d %% %d = %d (remainder has the same sign as the second operand)\n", a, b, a%b)
	}
	// no exponentiation operator in Go
}
