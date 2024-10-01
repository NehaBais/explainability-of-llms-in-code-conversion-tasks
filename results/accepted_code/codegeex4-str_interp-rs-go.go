package main

import "fmt"

func main() {
	fmt.Println("Mary had a %s lamb", "little")
	// You can specify order
	fmt.Printf("%v had a %v lamb\n", "Mary", "little")
	// Or named arguments if you prefer
	name := "Mary"
	adj := "little"
	fmt.Printf("%s had a %s lamb\n", name, adj)
}
