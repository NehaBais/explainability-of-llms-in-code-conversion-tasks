package main

import "fmt"

func main() {
	// Basic interpolation
	fmt.Printf("Mary had a %s lamb\n", "little")

	// Specifying order
	fmt.Printf("%s had a %s lamb\n", "Mary", "little")

	// Using named arguments
	fmt.Printf("%[2]s had a %[1]s lamb\n", "little", "Mary") // Note the use of array-like syntax for positional placeholders

	// Named arguments using Go's built-in map-like feature (using struct for demonstration)
	type Person struct {
		Name string
		Adj  string
	}
	person := Person{Name: "Mary", Adj: "little"}
	fmt.Printf("%s had a %s lamb\n", person.Name, person.Adj)
}
