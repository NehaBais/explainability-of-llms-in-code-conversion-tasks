package main

import (
	"fmt"
	"strings"
)

func main() {
	str := []byte("Good Morning")
	cstr := []byte(" to all")
	cstr2 := []byte(" !!!")

	// failure when space allocated to str is insufficient.
	if len(str)+len(cstr)+len(cstr2) <= cap(str) {
		/* 1st method */
		newStr := strings.Join([]string{string(str), string(cstr)}, "")

		/* 2nd method */
		newStr = fmt.Sprintf("%s%s", str, cstr2)

		fmt.Println(string(newStr))
	}
}
