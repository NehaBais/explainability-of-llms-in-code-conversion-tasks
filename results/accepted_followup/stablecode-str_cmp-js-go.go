package main

import (
		"fmt"
		"strings"
	)

func main() {

    str1 := "abcd"
    str2 := "dcba"

    fmt.Println(
        str1 == str2, // always false as the strings are not equal
        ), "\n")

    fmt.Println(
        strings.Compare(str1, str2) != 0, // true
        ), "\n")

    fmt.Println(
        strings.Compare(str2, str1) < 0, // false
        ), "\n")
	
		// Case insensitive comparison example
		fmt.Println(
		strings.EqualFold("AbCd", "aBcD"))  // true 
		), "\n")
}