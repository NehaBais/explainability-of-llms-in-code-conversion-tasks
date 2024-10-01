package main

import (
	"fmt"
	"strings"
)

func compare(A string, B string) {
	if A == B {
		fmt.Printf("%s  1 0 0 0 0 0 %s\n", A, B)
	} else if A != B {
		fmt.Printf("%s  0 1 0 0 0 0 %s\n", A, B)
	} else if strings.Compare(A, B) > 0 {
		fmt.Printf("%s  0 0 1 0 0 0 %s\n", A, B)
	} else if strings.Compare(A, B) < 0 {
		fmt.Printf("%s  0 0 0 1 0 0 %s\n", A, B)
	} else if strings.Compare(A, B) >= 0 {
		fmt.Printf("%s  0 0 0 0 1 0 %s\n", A, B)
	} else if strings.Compare(A, B) <= 0 {
		fmt.Printf("%s  0 0 0 0 0 1 %s\n", A, B)
	}
}

func compareCase(A string, B string) {
	if strings.EqualFold(A, B) {
		fmt.Printf("%s  1 0 0 0 0 0 %s ignoring case\n", A, B)
	} else if !strings.EqualFold(A, B) {
		fmt.Printf("%s  0 1 0 0 0 0 %s ignoring case\n", A, B)
	} else if strings.CompareFold(A, B) > 0 {
		fmt.Printf("%s  0 0 1 0 0 0 %s ignoring case\n", A, B)
	} else if strings.CompareFold(A, B) < 0 {
		fmt.Printf("%s  0 0 0 1 0 0 %s ignoring case\n", A, B)
	} else if strings.CompareFold(A, B) >= 0 {
		fmt.Printf("%s  0 0 0 0 1 0 %s ignoring case\n", A, B)
	} else if strings.CompareFold(A, B) <= 0 {
		fmt.Printf("%s  0 0 0 0 0 1 %s ignoring case\n", A, B)
	}
}

func main() {
	var ac int
	ac = len(os.Args) - 2
	for i := 0; i < ac; i += 2 {
		A := os.Args[i+1]
		B := os.Args[i+2]
		compare(A, B)
		compareCase(A, B)
	}
}
