package main

import (
	"fmt"
	"strconv"
	"strings"
)

func main() {
	str1 := "abcd"
	str2 := "abcd"
	fmt.Println(str1 == str2) // true - comparing two strings for exact equality

	str3 := "123"
	num, _ := strconv.Atoi(str3)
	fmt.Println(num == 123) // true - comparison of numeric strings treated as numbers

	str4 := "ABCD"
	str5 := "abcd"
	fmt.Println(strings.ToLower(str4) == strings.ToLower(str5)) // true - case insensitive comparison

	fmt.Println(str1 != str2) // false - comparing two strings for inequality
	fmt.Println(num != 123)   // false - comparing two numeric strings for inequality
	fmt.Println(str4 != str5) // true - case sensitive comparison

	str6 := "abcd"
	str7 := "dcba"
	fmt.Println(str6 < str7) // false - comparing one string to see if it is lexically ordered before than the other (true in JavaScript but not possible in Go)
	fmt.Println(str6 > str7) // true  - comparing one string to see if it is lexically ordered after than the other

}
