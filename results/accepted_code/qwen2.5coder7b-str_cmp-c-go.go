package main

import (
	"fmt"
	"strings"
)

func compare(a, b string) {
	fmt.Printf("%s%2d%2d%2d%2d%2d%2d %s\n",
		a,
		strings.Equal(a, b), strings.NotEqual(a, b),
		strings.Compare(a, b) > 0, strings.Compare(a, b) < 0,
		strings.Compare(b, a) > 0, strings.Compare(b, a) < 0,
		b)
}

func compareCase(a, b string) {
	fmt.Printf("%s%2d%2d%2d%2d%2d%2d %s ignoring case\n",
		a,
		strings.EqualFold(a, b), strings.NotEqualFold(a, b),
		strings.Compare(strings.ToLower(a), strings.ToLower(b)) > 0,
		strings.Compare(strings.ToLower(a), strings.ToLower(b)) < 0,
		strings.Compare(strings.ToLower(b), strings.ToLower(a)) > 0,
		strings.Compare(strings.ToLower(b), strings.ToLower(a)) < 0,
		b)
}

func main() {
	a := "ball"
	b := "bell"

	compare(a, b)
	compareCase(a, b)

	a = "BALL"
	b = "ball"

	compare(a, b)
	compareCase(a, b)

	a = "YUP"
	b = "YEP"

	compare(a, b)
	compareCase(a, b)

	a = "ball"
	b = "BELL"

	compare(a, b)
	compareCase(a, b)

	a = "ball"
	b = "BALL"

	compare(a, b)
	compareCase(a, b)

	a = "YUP"
	b = "yep"

	compare(a, b)
	compareCase(a, b)
}
