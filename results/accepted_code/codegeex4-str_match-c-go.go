package main

import (
	"fmt"
	"strings"
)

func startsWith(container string, target string) bool {
	clen := len(container)
	tlen := len(target)
	if clen < tlen {
		return false
	}
	return container[:tlen] == target
}

func endsWith(container string, target string) bool {
	clen := len(container)
	tlen := len(target)
	if clen < tlen {
		return false
	}
	return container[clen-tlen:] == target
}

func doesContain(container string, target string) []int {
	var locations []int
	for i := 0; i <= len(container)-len(target); i++ {
		if strings.Compare(container[i:i+len(target)], target) == 0 {
			locations = append(locations, i)
		}
	}
	return locations
}

func main() {
	fmt.Printf("Starts with Test ( Hello,Hell ) : %t\n", startsWith("Hello", "Hell"))
	fmt.Printf("Ends with Test ( Code,ode ) : %t\n", endsWith("Code", "ode"))
	fmt.Printf("Contains Test ( Google,msn ) : %v\n", doesContain("Google", "oo"))
}
