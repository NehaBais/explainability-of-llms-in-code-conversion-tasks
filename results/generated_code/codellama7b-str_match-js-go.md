Sure, I can help you convert this code from JavaScript to Go. Here is the converted code:
```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	stringA := "tacoloco"
	stringB := "co"

	// stringA starts with stringB
	q1 := strings.HasPrefix(stringA, stringB)

	// stringA contains stringB
	q2 := strings.Contains(stringA, stringB)

	// multiple matches
	q2multi := regexp.MustCompile(stringB + "g")

	q2matches := []int{}
	for _, m := range q2multi.FindAllIndex([]byte(stringA), -1) {
		q2matches = append(q2matches, m[0])
	}

	// stringA ends with stringB
	q3 := strings.HasSuffix(stringA, stringB)

	fmt.Println("1: Does '" + stringA + "' start with '" + stringB + "'? " + (q1 == true))
	fmt.Println("2: Is '" + stringB + "' contained in '" + stringA + "'? " + (len(q2) > 0))
	if len(q2) > 0 {
		fmt.Printf("   In fact, it happens %d times within '%s', at index%s %v.", len(q2matches), stringA, q2matches[0])
	}
	fmt.Println("3: Does '" + stringA + "' end with '" + stringB + "'? " + (q3 == true))
}
```
Note that I have used the `strings` package in Go to perform various string operations like finding the prefix, suffix, and index of a substring within another string. Additionally, I have used the `regexp` package to perform regular expression matching and searching for multiple occurrences of a substring within a larger string.
