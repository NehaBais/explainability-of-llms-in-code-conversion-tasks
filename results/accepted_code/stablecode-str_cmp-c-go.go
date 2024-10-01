package main

import (
	"fmt"
	"strings"
)

func compare(a string, b string) {
	eq := strings.EqualFold(a, b))

	fmt.Printf("%s%2d%2d%2d%2d%2d%2d 
",
	 a,
	 eq, !eq, STRGT(a, b), STRLT(a, b), STRGE(a, b), STRLE(a, b))

	fmt.Println()
}

func comparecase(a string, b string) {
	eq := strings.EqualFold(a, b))

	fmt.Printf("%s%2d%2d%2d%2d%2d%2d 
",
	 a,
	 eq, !eq, STRCGT(a, b), STRCLT(a, b), STRCGE(a, b), STRCLE(a, b))

	fmt.Println()
}

func main() {
	var a string = "YUP"
	var b string = "yep"

	compare(a, b)
	comparecase(a, b)
}