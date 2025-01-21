package main

import (
	"fmt"
)

func main() {
	interpolation("Mary had a little lamb", "little", "lamb") // Correct usage of interpolation function
	interpolationWithName("Mary", "little")                   // Function call with two strings
}

func interpolation(s string, a string, b string) {
	fmt.Printf("%s\n", s, a, b)
}

func interpolationWithName(name string, adj string, noun string) {
	fmt.Printf("%s had a %s lamb\n", name, adj, noun)
}
