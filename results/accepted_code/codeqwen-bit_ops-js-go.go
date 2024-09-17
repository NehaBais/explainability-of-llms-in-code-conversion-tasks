package main

import "fmt"

func bitwise(A, B int) {
	fmt.Println("A AND B: ", A&B)
	fmt.Println("A OR B: ", A|B)
	fmt.Println("A XOR B: ", A^B)
	fmt.Println("NOT A: ", ^A)
	fmt.Println("A << B: ", A<<B)  // left shift
	fmt.Println("A >> B: ", A>>B)  // arithmetic right shift
	fmt.Println("A >>> B: ", A>>B) // logical right shift
}

func main() {
	bitwise(2, 3)
}
