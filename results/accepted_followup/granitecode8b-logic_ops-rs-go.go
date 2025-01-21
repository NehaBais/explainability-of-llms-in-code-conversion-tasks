package main

import "fmt"

func main() {
	fmt.Println(booleanOps(true, true))
	fmt.Println(booleanOps(true, false))
	fmt.Println(booleanOps(false, true))
	fmt.Println(booleanOps(false, false))
}
func booleanOps(a bool, b bool) string {
	return fmt.Sprintf("%t and %t -> %t%n%t or %t -> %t%n%t ^ %t -> %t%nnot %t -> %t", a, b, a && b, a, b, a || b, a, b, a^b, a, !a)
}
