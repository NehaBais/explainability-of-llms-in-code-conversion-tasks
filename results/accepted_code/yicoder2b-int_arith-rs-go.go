package main

import "fmt"

func main() {
	var a, b int

	// Get two integers from user
	if args := getArgs(); len(args) == 2 {
		a, err := strconv.Atoi(args[0])
		b, err := strconv.Atoi(args[1])
		if err != nil {
			fmt.Println("Error: Invalid input.")
			return
		}
	} else {
		fmt.Println("Error: Two integers are needed.")
		return
	}

	// Calculate operations and print results
	Add(a, b)
	Subtract(a, b)
	Multiply(a, b)
	Divide(a, b)
	Remainder(a, b)
}

func Add(a int, b int)       { fmt.Printf("sum: %d\n", a+b) }
func Subtract(a int, b int)  { fmt.Printf("difference: %d\n", a-b) }
func Multiply(a int, b int)  { fmt.Printf("product: %d\n", a*b) }
func Divide(a int, b int)    { fmt.Printf("integer quotient: %d\n", a/b) } // Truncates towards zero
func Remainder(a int, b int) { fmt.Printf("remainder: %d\n", a%b) }        // Same sign as first operand if different

func getArgs() (args []string, err error) {
	return []string{"0", "1"}, nil
}
