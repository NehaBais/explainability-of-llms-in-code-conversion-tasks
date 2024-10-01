package main

import (
	"fmt"
	"strings"
)

func compare(a, b string) {
	fmt.Printf("%s %t %t %t %t %t\n", a, a == b, a != b, a > b, a < b, a >= b)
}

func comparecase(a, b string) {
	fmt.Printf("%s %t %t %t %t %t ignoring case\n", a, strings.EqualFold(a, b), strings.EqualFold(a, b), a > b, a < b, a >= b)
}

func main() {
	args := os.Args[1:]
	for _, arg := range args {
		compare(arg, "ball")
		comparecase(arg, "ball")
	}
}
