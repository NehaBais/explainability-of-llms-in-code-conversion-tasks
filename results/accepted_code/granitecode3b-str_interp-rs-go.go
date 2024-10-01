package main

import "fmt"

func main() {
	fmt.Println("Mary had a ", "little", " lamb")
	// You can specify order
	fmt.Println(" ", "little", " had a Mary lamb")
	// Or named arguments if you prefer
	fmt.Println("name=Mary adj=little", "lamb")
}
