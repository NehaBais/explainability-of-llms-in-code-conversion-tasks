package main

import (
	"fmt"
	"strings"
)

func startsWith(container, target string) bool {
	return strings.HasPrefix(container, target)
}

func endsWith(container, target string) bool {
	return strings.HasSuffix(container, target)
}

func doesContain(container, target string) (bool, int) {
	index := strings.Index(container, target)

	if index == -1 {
		return false, 0
	}

	return true, index
}

func main() {
	container := "Hello"
	target := "Hell"
	fmt.Printf("StartsWith Test  (%s,%s): %v\n", container, target, startsWith(container, target))

	container = "Code"
	target = "ode"
	fmt.Printf("EndsWith Test  (%s,%s): %v\n", container, target, endsWith(container, target))

	container = "Google"
	target = "msn"
	contains, index := doesContain(container, target)
	fmt.Printf("Contains Test  (%s,%s): %v at index: %d\n", container, target, contains, index)
}
