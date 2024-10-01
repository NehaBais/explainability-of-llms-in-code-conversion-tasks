package main

import (
	"fmt"
	"strings"
)

func substring(s string, n int, m int) *string {
	if len(s) == 0 || n < 0 || m <= 0 {
		return nil
	}

	begin := n
	end := begin + m
	if end > len(s) {
		end = len(s)
	}

	result := s[begin:end]
	return &result
}

func strWholeLess1(s string) *string {
	result, _ := substring(s, 0, len(s)-1)
	return result
}

func strFromCh(s string, ch byte, m int) *string {
	index := strings.IndexByte(s, ch)
	if index == -1 {
		return nil
	}
	result, _ := substring(s, index, m)
	return result
}

func strFromStr(s string, substr string, m int) *string {
	index := strings.Index(s, substr)
	if index == -1 {
		return nil
	}
	result, _ := substring(s, index, m)
	return result
}

func main() {
	s := "hello world shortest program"

	fmt.Println(*substring(s, 12, 5))     // get "short"
	fmt.Println(*substring(s, 6, len(s))) // get "world shortest program"
	fmt.Println(*strWholeLess1(s))        // "... progra"
	fmt.Println(*strFromCh(s, 'w', 5))    // "world"
	fmt.Println(*strFromStr(s, "ro", 3))  // "rog"
}
