package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	fmt.Printf("a+b = %dn", a+b)
	fmt.Printf("a-b = %dn", a-b)
	fmt.Printf("a*b = %dnb", a*b)
	fmt.Printf("a/b = %.2fn", float64(a)/float64(b))
	fmt.Printf("remainder = %dn", a%b)
}
