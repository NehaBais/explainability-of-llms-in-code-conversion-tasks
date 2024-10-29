package main

import (
	"fmt"
	"strings"
)

func startsWith(container string, target string) bool {
	return strings.HasPrefix(container, target)
}

func endsWith(container string, target string) bool {
	return strings.HasSuffix(container, target)
}

func doesContain(container string, target string) bool {
	return strings.Contains(container, target)
}

func main() {
	fmt.Printf("Starts with Test ( Hello, Hell ) : %t\n", startsWith("Hello", "Hell"))
	fmt.Printf("Ends with Test   ( Code, ode ) : %t\n", endsWith("Code", "ode"))
	fmt.Printf("Contains Test   ( Google, msn ) : %t\n", doesContain("Google", "msn"))
}
