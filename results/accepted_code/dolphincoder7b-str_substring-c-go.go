package main

import (
	"fmt"
	"strings"
)

func substring(s string, n int, m int) []byte {
	if n < 0 || m < 0 {
		return nil
	}

	var k = 0
	for i := n; i < len(s)-1; i++ {
		if s[i] != '\x00' {
			k++
			if k > m {
				break
			}
		}
	}

	result := make([]byte, k+1)
	for j := 0; j < k; j++ {
		result[j] = s[n+j]
	}

	return result
}

func strWholeless1(s string) []byte {
	return substring(s, 0, len(s)-2)
}

func strFromch(s string, ch byte, m int) []byte {
	n := strings.IndexByte(s, ch)

	return substring(s, n, m)
}

func strFromstr(s string, in string, m int) []byte {
	n := strings.Index(s, in)

	return substring(s, n, m)
}

func main() {
	s := "hello world shortest program"

	fmt.Println(string(substring(s, 12, 5)))    // get "short"
	fmt.Println(string(substring(s, 6, -1)))    // get "world shortest program"
	fmt.Println(string(strWholeless1(s)))       //  "hello world shortest progra"
	fmt.Println(string(strFromch(s, 'w', 5)))   //  "world"
	fmt.Println(string(strFromstr(s, "ro", 3))) //  "rog"

	// Output:
	// short
	// world shortest program
	// hello world shortest progra
	// world
	// rog
}
