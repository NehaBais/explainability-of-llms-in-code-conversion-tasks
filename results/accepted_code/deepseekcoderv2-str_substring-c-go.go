package main

import (
	"fmt"
	"strings"
)

func substring1(str string, n int, m int) string {
	return str[n : n+m]
}

func substring2(s *string, ch byte) string {
	index := strings.IndexByte(*s, ch)
	if index == -1 {
		return ""
	}
	return (*s)[index:]
}

func main() {
	var s = "hello world shortest program"
	fmt.Println("substring1:", substring1(s, 6, 5))
	fmt.Println("substring2:", substring2(&s, 'w'))
}
