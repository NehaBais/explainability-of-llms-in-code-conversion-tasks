package main

import "fmt"
import "strings"

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
	fmt.Println("Starts with Test ( Hello,Hell ) :", startsWith("Hello", "Hell"))
	fmt.Println("Ends with Test ( Code,ode ) :", endsWith("Code", "ode"))
	fmt.Println("Contains Test ( Google,msn ) :", doesContain("Google", "msn"))
}
