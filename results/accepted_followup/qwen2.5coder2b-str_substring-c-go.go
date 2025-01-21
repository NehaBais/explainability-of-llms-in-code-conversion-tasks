package main

import (
	"fmt"
)

func substring(s string, n int, m int) (string, error) {
	if s == "" {
		return "", fmt.Errorf("--error--")
	}
	if n < 0 || m < 0 {
		return "", fmt.Errorf("invalid argument")
	}

	for i := 0; i < n && s[i] != '\uFFFD'; i++ {
	}
	if i >= n {
		return "", fmt.Errorf("--error--")
	}
	result := make([]byte, m)
	copy(result, s[i:i+m])
	return string(result), nil
}

func str_wholeless1(s string) (string, error) {
	return substring(s, 0, len(s)-1), nil
}

func str_fromch(s string, ch int) (string, error) {
	index := -1
	for i := range s {
		if s[i] == byte(ch) {
			index = i
			break
		}
	}
	if index == -1 {
		return "", fmt.Errorf("--error--")
	}
	result := make([]byte, len(s)-index)
	copy(result, s[index:])
	return string(result), nil
}

func str_fromstr(s string, in string) (string, error) {
	index := strings.IndexByte(s, in[0])
	if index == -1 {
		return "", fmt.Errorf("--error--")
	}
	result := make([]byte, len(in))
	copy(result, s[index:])
	return string(result), nil
}

func main() {
	s := "hello world shortest program"
	fmt.Println(substring(s, 12, 5))  // get "short"
	fmt.Println(substring(s, 6, -1))  // get "world shortest program"
	fmt.Println(str_wholeless1(s))    // "... progra"
	fmt.Println(str_fromch(s, 'w'))   // "world"
	fmt.Println(str_fromstr(s, "ro")) // "rog"
}
