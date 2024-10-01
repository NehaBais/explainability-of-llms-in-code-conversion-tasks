package main

import (
	"fmt"
)

func main() {
	fmt.Printf("Mary had a %s lamb\n", "little")
	// You can specify order
	fmt.Printf("%s had a %s lamb\n", "Mary", "little")
	// Or named arguments if you prefer
	fmt.Printf("%s had a %s lamb\n", "name", "adj")
}
