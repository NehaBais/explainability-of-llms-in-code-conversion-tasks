package main

import (
	"fmt"
	"strings"
)

func startswith(str, prefix string) bool {
	return strings.HasPrefix(str, prefix)
}

func contains(str, substr string) bool {
	return strings.Contains(str, substr)
}

func endsWith(str, suffix string) bool {
	return strings.HasSuffix(str, suffix)
}

var loc int = 0

func findSubstring(str, sub string) (int, error) {
	lo := strings.Index(str, sub)
	if lo == -1 {
		return -1, fmt.Errorf("substring not found")
	}
	return lo, nil
}

func main() {
	a, err := findSubstring("abcd", "ab")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Printf("found at position %d\n", a)
	}
	b := endsWith("abcd", "cd")
	if b {
		fmt.Println("ends with")
	} else {
		fmt.Println("does not end with")
	}
	c := contains("abab", "bb")
	if c {
		fmt.Println("contains")
	} else {
		fmt.Println("does not contain")
	}
	d := startswith("abab", "ab")
	if d {
		fmt.Println("starts with")
	} else {
		fmt.Println("does not start with")
	}
}
