Here is the equivalent code in Golang:

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
	q2 := strings.Index(stringA, stringB)

	// multiple matches
	var q2multi = strings.NewReplacer(stringB, fmt.Sprintf("%s%s", stringB, "$"))
	q2matches := []int{}
	for m := 0; ; {
		m = q2multi.FindStringIndex(stringA)[0]
		if m == -1 {
			break
		}
		q2matches = append(q2matches, m)
	}

	// stringA ends with stringB
	q3 := strings.HasSuffix(stringA, stringB)

	fmt.Println("1: Does '" + stringA + "' start with '" + stringB + "'? " + (q1 ? "Yes." : "No."))
	fmt.Println("2: Is '" + stringB + "' contained in '" + stringA + "'? " + (q2 >= 0 ? "Yes, at index "+fmt.Sprintf("%d", q2)+"." : "No."))
	if q2 >= 0 && len(q2matches) > 1 {
		fmt.Println("   In fact, it happens "+fmt.Sprintf("%d", len(q2matches))+" times within '"+stringA+"', at index"+(len(q2matches) > 1 ? "es" : "")+" "+strings.Join(intArrayToStringSlice(q2matches), ", ") + ".")
	}
	fmt.Println("3: Does '" + stringA + "' end with '" + stringB + "'? " + (q3 ? "Yes." : "No."))
}

func intArrayToStringSlice(arr []int) []string {
	result := make([]string, len(arr))
	for i, v := range arr {
		result[i] = fmt.Sprintf("%d", v)
	}
	return result
}
```

Please note that Go's `strings` package doesn't have direct equivalents for JavaScript's `substring`, `indexOf`, and `substr`. Instead, it uses methods like `HasPrefix`, `Index`, and `Suffix` to achieve similar results.

Also, the optional requirement for multiple matches is handled by using a regular expression in Golang. Here, we create a new replacer with `$` which represents the end of a string. This way, each occurrence of the substring is replaced with itself followed by `$`. When searching for this modified string, each match indicates a position where the original substring appears. 

For converting slice of integers to slice of strings, a helper function `intArrayToStringSlice` is used.
