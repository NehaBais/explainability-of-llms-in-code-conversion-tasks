package main

import "fmt"

func main() {

	fmt.Printf("Mary had a %s lamb\n", "big")

	// You can specify order

	fmt.Printf("%1s had a %0s lamb\n", "You", "can")

	// Or named arguments if you prefer

	fmt.Printf("%name had a %adj lamb\n", "Mary", "little")
}
