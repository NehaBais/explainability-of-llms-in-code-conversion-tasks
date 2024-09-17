package main

import "fmt"

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	fmt.Printf("a+b = %dn", a+b)
	fmt.Printf("a-b = %dn", a-b)
	fmt.Printf("a*b = %dn", a*b)
	fmt.Printf("a/b = %dn", a/b)
	fmt.Printf("a%%b = %dn", a%b)
}
