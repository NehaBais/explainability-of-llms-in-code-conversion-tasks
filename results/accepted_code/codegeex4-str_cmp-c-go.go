package main

import (
	"fmt"
	"strings"
)

func compare(a, b string) {
	fmt.Printf("%s %d %d %d %d %d %d %s\n",
		a,
		strings.Compare(a, b), strings.Compare(b, a), strings.HasPrefix(a, b), strings.HasSuffix(a, b),
		strings.Contains(a, b), strings.Contains(b, a))
}

func compareCaseInsensitive(a, b string) {
	fmt.Printf("%s %d %d %d %d %d %d %s ignoring case\n",
		a,
		strings.Compare(strings.ToLower(a), strings.ToLower(b)), strings.Compare(strings.ToLower(b), strings.ToLower(a)),
		strings.HasPrefix(strings.ToLower(a), strings.ToLower(b)),
		strings.HasSuffix(strings.ToLower(a), strings.ToLower(b)),
		strings.Contains(strings.ToLower(a), strings.ToLower(b)),
		strings.Contains(strings.ToLower(b), strings.ToLower(a)),
		b)
}

func main() {
	fmt.Println("eq, ne, gt, lt, ge, le")
	compare("ball", "bell")
	compareCaseInsensitive("ball", "bell")
	compare("ball", "ball")
	compareCaseInsensitive("ball", "ball")
	compare("YUP", "YEP")
	compareCaseInsensitive("YUP", "YEP")
	compare("ball", "BELL")
	compareCaseInsensitive("ball", "BELL")
	compare("ball", "BALL")
	compareCaseInsensitive("ball", "BALL")
	compare("YUP", "yep")
	compareCaseInsensitive("YUP", "yep")
}
