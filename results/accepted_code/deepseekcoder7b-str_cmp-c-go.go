package main

import (
	"fmt"
	"os"
	"strings"
)

func compare(a, b string) {
	fmt.Printf("%s%2t%2t%2t%2t%2t%2t %s\n", a,
		a == b, a != b, a > b, a < b, a >= b, a <= b,
		b)
}

func compareCase(a, b string) {
	fmt.Printf("%s%2t%2t%2t%2t%2t%2t %s (ignoring case)\n", a,
		strings.EqualFold(a, b), !strings.EqualFold(a, b), strings.Compare(b, a) < 0, strings.Compare(a, b) > 0, strings.Compare(b, a) <= 0, strings.Compare(a, b) >= 0,
		b)
}

func main() {
	fmt.Println("eq  ne  gt  lt  ge  le")
	if len(os.Args) > 1 {
		for i := 1; i < len(os.Args); i += 2 {
			a, b := os.Args[i], os.Args[i+1]
			compare(a, b)
			compareCase(a, b)
		}
	}
}
