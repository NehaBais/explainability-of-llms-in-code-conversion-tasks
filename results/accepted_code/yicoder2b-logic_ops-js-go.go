package main

import "fmt"

func logic(a bool, b bool) {
	if a && b {
		fmt.Println("a AND b: true")
	} else {
		fmt.Println("a AND b: false")
	}
	if a || b {
		fmt.Println("a OR b: true")
	} else {
		fmt.Println("a OR b: false")
	}
	if !a {
		fmt.Println("NOT a: true")
	} else {
		fmt.Println("NOT a: false")
	}
}

func main() {
	logic(true, true)
	logic(false, true)
	logic(true, false)
	logic(false, false)
}
