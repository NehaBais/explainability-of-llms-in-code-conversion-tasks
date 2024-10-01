package main

import (
	"fmt"
	"strings"
)

func compare(a, b string) {
	fmt.Printf("%s %2d %2d %2d %2d %2d %2d %s\n", a,
		a == b, a != b, a > b, a < b, a >= b, a <= b, b)
}

func compareCase(a, b string) {
	fmt.Printf("%s %2d %2d %2d %2d %2d %2d %s ignoring case\n", a,
		strings.EqualFold(a, b), !strings.EqualFold(a, b), strings.Compare(b, a) < 0, strings.Compare(a, b) < 0, strings.Compare(b, a) <= 0, strings.Compare(a, b) <= 0, b)
}

func main() {
	fmt.Println("eq , ne , gt , lt , ge , le")
	var args = []string{"ball", "bell", "ball", "ball", "YUP", "YEP"}
	for i := 0; i < len(args); i += 2 {
		compare(args[i], args[i+1])
		compareCase(args[i], args[i+1])
	}
}
