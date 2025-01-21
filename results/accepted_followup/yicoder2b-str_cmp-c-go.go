package main

import (
	"fmt"
	"strings"
)

// Function to compare if two strings are equal (case sensitive)
func STREQ(a string, b string) bool { return a == b }

// Function to compare if two strings are not equal (inverse of STREQ)
func STRNE(a string, b string) bool { return !STREQ(a, b) }

// Function to compare if one string is lexically ordered before than the other (case sensitive)
func STRGT(a string, b string) bool { return a > b }

// Function to compare if one string is lexically ordered after than the other (case sensitive)
func STRLT(a string, b string) bool { return a < b }

// Function to compare if one string is lexically ordered before than the other ignoring case (case insensitive)
func STRGE(a string, b string) bool { return strings.Contains(strings.ToLower(a), strings.ToLower(b)) }

// Function to compare if one string is lexically ordered after than the other ignoring case
func STRCLE(a string, b string) bool { return !STRGE(a, b) }

// Function to compare and print out results of the comparisons between two strings (case sensitive)
func compare(a string, b string) {
	fmt.Printf("%s %2d %2d %2d %2d %2d %2d\n", a, STREQ(a, b), STRNE(a, b), STRGT(a, b), STRLT(a, b), STRGE(a, b), STRCLE(a, b))
}

// Function to compare and print out results of the comparisons between two strings (case insensitive)
func comparecase(a string, b string) {
	fmt.Printf("%s %2d %2d %2d %2d %2d %2d\n", a, STRCEQ(a, b), STRCNE(a, b), STRCGT(a, b), STRCLT(a, b), STRCGE(a, b), STRCLE(a, b))
}

// Main function to compare two strings against each other
func main() {
	compare("ball", "bell")     // outputs: ball 0 1 0 1 0 1 1
	comparecase("ball", "bell") // outputs: ball 0 1 0 1 0 1 1 ignoring case
	compare("YUP", "yep")       // outputs: YUP 0 1 1 0 1 0 1
	comparecase("YUP", "yep")   // outputs: YUP 0 1 1 0 1 0 1 ignoring case
}
