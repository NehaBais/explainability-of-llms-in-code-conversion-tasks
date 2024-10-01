package main

import "fmt"

func main() {
	fmt.Println("	eq , ne , gt , lt , ge , le")
	compare("ball", "bell")
	compare("YUP", "yep")
	comparecase("ball", "BELL")
}
func compare(a, b string) {
	fmt.Printf("%s%2d%2d%2d%2d%2d%2d %sn",
		a,
		a == b, a != b, a > b, a < b, a >= b, a <= b,
		b,
	)
}
func comparecase(a, b string) {
	fmt.Printf("%s%2d%2d%2d%2d%2d%2d %s ignoring casen",
		a,
		strings.EqualFold(a, b), !strings.EqualFold(a, b), strings.Compare(b, a) < 0, strings.Compare(a, b) > 0, strings.Compare(b, a) <= 0, strings.Compare(a, b) >= 0,
		b,
	)
}
