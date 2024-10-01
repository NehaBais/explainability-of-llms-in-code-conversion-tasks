Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"strings"
)

func stringMatching(stringA, stringB string) {
	// stringA starts with stringB
	q1 := strings.HasPrefix(stringA, stringB)

	// stringA contains stringB
	q2 := strings.Contains(stringA, stringB)

	// multiple matches
	q2multi := strings.Count(stringA, stringB)

	var q2matches []int
	for i := 0; i < q2multi; i++ {
		startIndex := strings.Index(stringA, stringB)
		if startIndex != -1 {
			q2matches = append(q2matches, startIndex)
			stringA = stringA[len(stringB):] // cut off the first part
		}
	}

	// stringA ends with stringB
	q3 := strings.HasSuffix(stringA, stringB)

	fmt.Printf("1: Does \"%s\" start with \"%s\"? %v.\n", stringA, stringB, q1)
	if q2 {
		fmt.Printf("2: Is \"%s\" contained in \"%s\"? Yes at index %d.\n", stringB, stringA, strings.Index(stringA, stringB))
		if len(q2matches) > 1 {
			str := ""
			for i, matchIndex := range q2matches {
				str += fmt.Sprintf("%d", matchIndex)
				if i < len(q2matches)-1 {
					str += ", "
				}
			}
			fmt.Printf("3: In fact, it happens %d times within \"%s\", at indexes "+str+".\n", len(q2matches), stringA)
		} else {
			fmt.Println("3: Does \"%s\" end with \"%s\"? No.\n", stringA, stringB)
		}
	} else {
		fmt.Println("2: Is \"%s\" contained in \"%s\"? No.\n", stringB, stringA)
		fmt.Printf("3: Does \"%s\" end with \"%s\"? %v.\n", stringA, stringB, q3)
	}
}

func main() {
	stringMatching("tacoloco", "co")
}
```

In the Golang version, we use the `strings` package for string operations. For the three types of matching, we use functions like `HasPrefix`, `Contains`, `Count`, and `Index`. The RegExp in JavaScript is replaced with the `Count` function because Go does not have a built-in regexp library. We also handle multiple occurrences of a string by using a while loop to keep cutting off the first part of the stringA until we can no longer find another occurrence.
