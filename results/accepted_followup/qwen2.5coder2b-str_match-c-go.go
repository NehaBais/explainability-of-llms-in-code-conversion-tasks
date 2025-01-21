package main

import (
	"fmt"
	"strings"
)

func startsWith(container string, target string) bool {
	return len(container) >= len(target) && container[:len(target)] == target
}

func endsWith(container string, target string) bool {
	return len(container) >= len(target) && container[len(container)-len(target):] == target
}

func doesContain(container string, target string) bool {
	return strings.Contains(container, target)
}

func main() {
	fmt.Println("Starts with Test ( Hello,Hell ) : ", startsWith("Hello", "Hell"))
	fmt.Println("Ends with Test ( Code,ode ) : ", endsWith("Code", "ode"))
	fmt.Println("Contains Test ( Google,msn ) : ", doesContain("Google", "msn"))
}
