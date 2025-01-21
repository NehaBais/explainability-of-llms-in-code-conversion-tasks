The error occurs because of the type mismatch between the JavaScript code (which has boolean values) and the Golang equivalents (which have integers).

To fix this, we need to convert the `q1`, `q2`, and `q3` variables to integers by using boolean to integer conversion. In Go, a boolean value is 0 for false and 1 for true, so we can use that conversion in our code. We will also modify the `pluralize` function as it returns an empty string instead of `"es"`.

Here's the corrected Golang code:
```go
package main

import (
	"fmt"
	"regexp"
)

func starts_with(a string, b string) int  {
	return int(len(a) >= len(b)) && a[:len(b)] == b
}

func contains(a string, b string) int  {
	for i := 0; i <= len(a)-len(b); i++  {
		if a[i:i+len(b)] == b {
			return i
		}
	}
	return -1
}

func ends_with(a string, b string) int  {
	return int(len(a) >= len(b)) && a[len(a)-len(b):] == b
}

var stringA =  "tacoloco"
var stringB =  "co"
var q1, q2, m, q2multi int
var q2matches  []int

func main() {
	 // stringA starts with stringB
	q1 = starts_with(stringA, stringB)

	 // stringA contains stringB
	q2  = contains(stringA, stringB)

	 // multiple matches
	q2multi  = regexp.MustCompile(stringB).FindAllStringIndex(stringA, -1)

	for  _, v := range q2multi {
		q2matches  = append(q2matches, v[0])
	}

	 // stringA ends with stringB
	q3  = ends_with(stringA, stringB)

	fmt.Printf("1: Does '%s' start with '%s'? %v\n", stringA, stringB, q1 > 0)
	fmt.Printf("2: Is '%s' contained in '%s'?  %v at index %d.\n", stringB, stringA, (q2  != -1), q2)

	if len(q2matches) > 0 {
		fmt.Printf("There are %d occurrences of '%s' in '%s'.\n", len(q2matches), stringB, stringA)
	}

	fmt.Printf("3: Does '%s' end with '%s'?  %v\n", stringA, stringB, q3 > 0)
}

func pluralize(count int) string {
	if count == 1 {
		return ""
	} else {
		return "es"
	}
}
```
