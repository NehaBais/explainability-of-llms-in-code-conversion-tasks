package main

import "fmt"

func main() {
	fmt.Println("Mary had a ", "little", " lamb")
	// You can specify order
	fmt.Printf("%s had a %s lambn", "Mary", "little")
	// Or named arguments if you prefer
	fmt.Printf("%s had a %s lambn", "Mary", "little")
}
