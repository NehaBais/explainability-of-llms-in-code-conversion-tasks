package main

import "fmt"
import "strings"

func startsWith(container, target string) bool {
	clen := len(container)
	tlen := len(target)
	if clen < tlen {
		return false
	}
	return container[:tlen] == target
}

func endsWith(container, target string) bool {
	clen := len(container)
	tlen := len(target)
	if clen < tlen {
		return false
	}
	return container[clen-tlen:] == target
}

func doesContain(container, target string) bool {
	return strings.Contains(container, target)
}

func main() {
	fmt.Printf("Starts with Test ( Hello,Hell ) : %v\n", startsWith("Hello", "Hell"))
	fmt.Printf("Ends with Test ( Code,ode ) : %v\n", endsWith("Code", "ode"))
	fmt.Printf("Contains Test ( Google,msn ) : %v\n", doesContain("Google", "msn"))
}
