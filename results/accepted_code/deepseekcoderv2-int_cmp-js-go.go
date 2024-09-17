package main

import (
	"fmt"
)

func getIntFromUser(question string) int {
	fmt.Println(question)
	var a int
	_, err := fmt.Scanf("%d", &a)
	for ; err != nil; _, err = fmt.Scanf("%d", &a) {
	}
	return a
}

func compare(a, b int) {
	if a == b {
		fmt.Println(fmt.Sprintf("%d equals %d", a, b))
	} else if a < b {
		fmt.Println(fmt.Sprintf("%d is less than %d", a, b))
	} else if a > b {
		fmt.Println(fmt.Sprintf("%d is greater than %d", a, b))
	}
}

func main() {
	a := getIntFromUser("Give me an integer")
	b := getIntFromUser("Give me another integer")
	compare(a, b)
}
