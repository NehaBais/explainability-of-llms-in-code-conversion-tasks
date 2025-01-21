package main

import (
	"fmt"
	"strings" // Fix: Import the strings package
)

func main() {
	str := "abcd"
	substr := "ab"

	fmt.Println(strings.HasPrefix(str, substr)) //part 1

	found := strings.Contains(str, substr) //part 2
	if found {
		fmt.Printf("Matched at location: %d\n", strings.Index(str, substr))
	} else {
		fmt.Println("Not Found")
	}

	substr = "zn"
	fmt.Println(strings.HasSuffix(str, substr)) //part 3

	str = "abab"
	substr = "bb"
	found = strings.Contains(str, substr)
	if found {
		fmt.Printf("Matched at location: %d\n", strings.Index(str, substr))
	} else {
		fmt.Println("Not Found")
	}

	substr = "ab"
	found = strings.Contains(str, substr)
	if found {
		index := 0
		for i := 0; ; {
			index = strings.Index(str, substr, i)
			if index == -1 {
				break
			}
			fmt.Printf("Matched at location: %d\n", index)
			i = index + len(substr) //start from the next character after the current match
		}
	} else {
		fmt.Println("Not Found")
	}
}
