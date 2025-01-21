package main

import "fmt"

func main() {
	// String interpolation
	fmt.Println("Mary had a %s lamb", "little")

	// Order of arguments
	fmt.Printf("%s had a %s lamb\n", "little", "Mary")

	// Named arguments
	name := "Mary"
	adj := "little"
	fmt.Printf("%s had a %s lamb\n", name, adj)
}
