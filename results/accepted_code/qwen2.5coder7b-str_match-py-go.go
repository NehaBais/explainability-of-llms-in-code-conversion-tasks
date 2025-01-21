package main

import (
	"fmt"
)

func main() {
	str := "abcd"
	substr := "ab"

	// Part 1: Determining if the first string starts with second string
	fmt.Println("Starts with:", strings.HasPrefix(str, substr))

	// Part 2: Determining if the first string contains the second string at any location
	if index := strings.Index(str, substr); index != -1 {
		fmt.Println("Contains:", true)
		for i := index; i < len(str); i++ {
			if strings.HasPrefix(str[i:], substr) {
				fmt.Println("Location of match:", i)
			}
		}
	} else {
		fmt.Println("Contains:", false)
	}

	// Part 3: Determining if the first string ends with the second string
	fmt.Println("Ends with:", strings.HasSuffix(str, substr))

}
