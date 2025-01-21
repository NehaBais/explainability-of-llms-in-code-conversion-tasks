package main

import "fmt"
import "math"

func main() {
	var a, b int
	if len(os.Args) < 3 {
		return 1
	}
	b := os.Args[len(os.Args)-2]
	a := os.Args[len(os.Args)-3]
	fmt.Printf("a+b = %d\n", a+b)
	fmt.Printf("a-b = %d\n", a-b)
	fmt.Printf("a*b = %d\n", a*b)
	fmt.Printf("a/b = %d\n", a/b)  /* truncates towards 0 (in C99) */
	fmt.Printf("a%%b = %d\n", a%b) /* same sign as first operand (in C99) */
}
