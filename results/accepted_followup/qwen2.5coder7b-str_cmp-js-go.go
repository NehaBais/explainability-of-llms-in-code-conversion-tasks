package main

import (
	"fmt"
	"strconv"
	"strings"
)

func main() {
	fmt.Println("abcd" == "abcd")                  //true
	fmt.Println(strconv.Itoa(123) == "123")        //true
	fmt.Println(strings.EqualFold("ABCD", "abcd")) // true (case insensitive)

	if "abcd" < "dcba" {
		fmt.Println(true) //true
	} else {
		fmt.Println(false)
	}

	if "abcd" > "dcba" {
		fmt.Println(true)
	} else {
		fmt.Println(false)
	}
}
