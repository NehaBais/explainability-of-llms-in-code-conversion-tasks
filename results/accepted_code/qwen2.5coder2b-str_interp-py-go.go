package main

import "fmt"

func main() {
	extra := "big"
	newStr := fmt.Sprintf("Mary had a %s lamb.", extra)
	fmt.Println(newStr)
}
