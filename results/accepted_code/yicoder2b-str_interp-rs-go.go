package main

import (
	"fmt"
)

func main() {
	// Calling function with string and variable value
	interpolation("Mary had a little lamb", "little")
	// You can specify order
	interpolation("Mary", "little", "lamb")
	// Or named arguments if you prefer
	interpolationWithName("Mary", "little")
}

func interpolation(s string, a string, b string) {
	fmt.Printf("%s\n", s, a, b)
}

func interpolationWithName(name string, adj string, noun string) {
	fmt.Printf("%s had a %s lamb\n", name, adj, noun)
}
