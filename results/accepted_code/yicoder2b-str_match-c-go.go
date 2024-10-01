package main

import (
	"fmt"
)

func startsWith(container string, target string) bool {
	if len(container) < len(target) {
		return false
	}
	return container[:len(target)] == target
}

func endsWith(container string, target string) bool {
	if len(container) < len(target) {
		return false
	}
	return container[len(container)-len(target):] == target
}

func doesContain(container string, target string) bool {
	return strings.Contains(container, target)
}

func main() {
	fmt.Printf("Starts with Test ( Hello,Hell ) : %t\n", startsWith("Hello", "Hell"))
	fmt.Printf("Ends with Test ( Code,ode ) : %t\n", endsWith("Code", "ode"))
	fmt.Printf("Contains Test ( Google,msn ) : %t\n", doesContain("Google", "msn"))
}
