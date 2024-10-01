Below is the equivalent Golang code for the provided Java function:

```go
package main

import (
	"fmt"
)

func Substring(str string, n int, m int) string {
	return str[n : n+m]
}

func Substring2(str string, n int) string {
	return str[n:]
}

func Substring3(str string) string {
	return str[:len(str)-1]]
}

func Substring4(str string, c rune, m int) string {
	i := indexOfChar(str, c))
	if i == -1 {
		return ""
	}
	return str[i : i+m]
}

func Substring5(str string, sub string, m int) string {
	si := indexOfSubStr(str, sub))
	if si == -1 {
		return ""
	}
	return str[si : si+m]
}

func indexOfChar(str string, c rune) int {
	for i, char := range str {
		if char == c {
			return i
		}
	}
	return -1
}

func indexOfSubStr(str string, sub string) int {
	for i, j := 0, len(sub); i < len(str)-j+1 {
		if str[i : i+j] == sub {
			return i
		}
		i++
	}
	return -1
}

func main() {
	fmt.Println(Substring("Hello World", 2, 3))) // "llo"
	fmt.Println(Substring2("Hello World", 2)))) // "llo Worl"
	fmt.Println(Substring3("Hello World")))) // "ello World"
	fmt.Println(Substring4("Hello World", 'o', 3))) // "lo W"
	fmt.Println(Substring5("Hello World", "Wor", 4))) // "World"
}
```
In the above code, we have converted different versions of Java code that perform various string operations into Golang code. The functions `indexOfChar` and `indexOfSubStr` are helper functions to find the index of a particular character or substring in a given string.
