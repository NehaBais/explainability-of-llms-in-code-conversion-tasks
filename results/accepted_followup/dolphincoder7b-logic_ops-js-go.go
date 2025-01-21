package main

import "fmt"

func main() {
	Logic(true, false)
}
func Logic(a, b bool) {
	fmt.Printf("%v AND %v:  %v\n", a, b, a && b)
	fmt.Printf("%v OR  %v:  %v\n", a, b, a || b)
	fmt.Printf("NOT  %v:  %v\n", a, !a)
}
