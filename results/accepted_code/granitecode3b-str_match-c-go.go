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
func doesContain(container, target string) bool {
	return strings.Contains(container, target)
}
func main() {
	fmt.Println("Starts with Test ( Hello,Hell ) :", startsWith("Hello", "Hell"))
	fmt.Println("Ends with Test ( Code,ode ) :", endsWith("Code", "ode"))
	fmt.Println("Contains Test ( Google,msn ) :", doesContain("Google", "msn"))
}
