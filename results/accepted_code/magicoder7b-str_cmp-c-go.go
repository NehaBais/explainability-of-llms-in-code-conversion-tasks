package main

import (
	"fmt"
	"strings"
)

func main() {
	var s1, s2 string
	s1 = "5" // numeric string 1
	s2 = "3" // numeric string 2

	if strings.Compare(s1, s2) > 0 {
		fmt.Println("s1 is larger than s2")
	} else if strings.Compare(s1, s2) < 0 {
		fmt.Println("s1 is smaller than s2")
	} else {
		fmt.Println("s1 and s2 are equal")
	}
}
