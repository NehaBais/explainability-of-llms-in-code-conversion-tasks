package main

import (
	"fmt"
)

var str = "abcdefgh"

func substrings() {
	n := 2
	m := 3

	// * starting from n characters in and of m length;
	fmt.Printf("substr(n, m): %s\n", str[n:n+m]) // => "cde"

	// * starting from n characters in, up to the end of the string;
	fmt.Println("substr(n): ", str[n:]) // => "cdefgh"

	// * whole string minus last character;
	fmt.Println("substring before last char:", str[:len(str)-1]) // => "abcdefg"

	// * starting from a known character within the string and of m length;
	substr := func() {
		ch, index := 'b', 0

		for i, chs := range str {
			if ch == chs {
				index = i + 1 // index starts with 1
				break
			}
		}
		fmt.Printf("substr(index, m): %s\n", str[index:index+m]) // => "bcd"
	}
	substr()

	// * starting from a known substring within the string and of m length.
	substring := func() {
		s := "bc"
		index := 0

		for i, chs := range str {
			if s == string(chs) {
				index = i + 1 // index starts with 1
				break
			}
		}
		fmt.Printf("substr(index, m): %s\n", str[index:index+m]) // => "bcd"
	}
	substring()
}

func main() {
	fmt.Println("\nSubstring of string 'abcdefgh'")

	var a = [3]string{"str.substr(n, m)", "str.substr(n)", "whole string minus last character"}
	for _, v := range a {
		switch v {
		case "str.substr(n, m)":
			fmt.Printf("%s\n", str[2:5]) // => "cde"
		case "str.substr(n)", "whole string minus last character":
			fmt.Println("str.substr(n): ", str[2:])                        // => "cdefgh"
			fmt.Println("whole string minus last char:", str[:len(str)-1]) // => "abcdefg"
		}
	}

	// * starting from a known character within the string and of m length;
	var ch = [3]string{"b", "d", "f"}
	for _, v := range ch {
		switch v {
		case "b":
			fmt.Printf("str.substr(index, m): %s\n", str[1:4]) // => "bcd"
		case "d":
			fmt.Println("No character 'd'")
		case "f":
			fmt.Printf("str.substr(index, m): %s\n", str[5:8]) // => "fgh"
		}
	}

	// * starting from a known substring within the string and of m length.
	var substrings = [2]string{"bc", "de"}
	for _, v := range substrings {
		switch v {
		case "bc":
			fmt.Printf("str.substr(index, m): %s\n", str[1:4]) // => "bcd"
		case "de":
			fmt.Println("No substring 'de'")
		}
	}
}
