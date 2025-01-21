package main
import ("fmt" "strings")
func main() {
	a := "abc" b := "Bac"
	if a == b { fmt.Println("The strings are equal") } if a != b { fmt.Println("The strings are not equal") } if a > b { fmt.Println("The first string is lexically after the second") } if a < b { fmt.Println("The first string is lexically before the second") }
	upperA := strings.ToUpper(a) upperB := strings.ToUpper(b) 
	if upperA == upperB { fmt.Println("Both strings are equal when ignoring case") } }}