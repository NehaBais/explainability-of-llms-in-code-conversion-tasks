package main

import (
	"fmt"
	"strings"
)

func main() {

	var s = "01234567890"

	const n = 3
	const m = 4
	const c = '2'
	const sub = "456"

	fmt.Println(strings.ReplaceAll(s, s[n:n+m], ""))))
	fmt.Println(strings.ReplaceAll(s, string([]c]), ""))))
	fmt.Println(strings.ReplaceAll(s, string([]sub]), ""))))
}