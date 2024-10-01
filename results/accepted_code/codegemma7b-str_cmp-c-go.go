package main

import "fmt"

func main() {
	// Comparing two strings for exact equality
	str1 := "hello"
	str2 := "hello"
	if str1 == str2 {
		fmt.Println("Strings are equal")
	}

	// Comparing two strings for inequality
	str1 := "hello"
	str2 := "world"
	if str1 != str2 {
		fmt.Println("Strings are not equal")
	}

	// Comparing two strings to see if one is lexically ordered before than the other
	str1 := "apple"
	str2 := "banana"
	if str1 < str2 {
		fmt.Println("String 1 is lexically ordered before string 2")
	}

	// Comparing two strings to see if one is lexically ordered after than the other
	str1 := "orange"
	str2 := "grape"
	if str1 > str2 {
		fmt.Println("String 1 is lexically ordered after string 2")
	}

	// How to achieve both case sensitive comparisons and case insensitive comparisons within the language
	str1 := "Hello"
	str2 := "hello"
	if str1 == str2 {
		fmt.Println("Case sensitive comparison is equal")
	}
	if strings.EqualFold(str1, str2) {
		fmt.Println("Case insensitive comparison is equal")
	}

	// How the language handles comparison of numeric strings if these are not treated lexically
	str1 := "10"
	str2 := "20"
	if str1 < str2 {
		fmt.Println("Numeric strings are compared lexically")
	}

	// Other kinds of string comparisons that the language provides
	str1 := "hello"
	str2 := "HELLO"
	if strings.EqualFold(str1, str2) {
		fmt.Println("EqualFold ignores case")
	}
	if strings.HasPrefix(str1, "he") {
		fmt.Println("HasPrefix checks for prefix")
	}
	if strings.HasSuffix(str1, "lo") {
		fmt.Println("HasSuffix checks for suffix")
	}
	if strings.Contains(str1, "ell") {
		fmt.Println("Contains checks for substring")
	}
}
