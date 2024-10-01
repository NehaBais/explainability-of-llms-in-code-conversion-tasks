package main

import (
	"fmt"
)

func main() {
	myStrings := []string{"prepended to", "my string"}
	prepended := combineStrings(myStrings...)
	fmt.Println(prepended)
}

func combineStrings(strs ...string) string {
	var result string
	for _, str := range strs {
		result += str
	}
	return result
}
