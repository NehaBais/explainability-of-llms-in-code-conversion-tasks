package main

import (
	"fmt"
	"regexp"
	"strings"
)

func main() {
	var stringA = "tacoloco"
	var stringB = "co"

	// stringA starts with stringB
	q1 := strings.HasPrefix(stringA, stringB)

	// stringA contains stringB
	q2 := strings.Index(stringA, stringB) != -1

	// multiple matches
	re := regexp.MustCompile(stringB)
	q2matches := re.FindAllStringIndex(stringA, -1)

	// stringA ends with stringB
	q3 := strings.HasSuffix(stringA, stringB)

	fmt.Printf("1: Does '%s' start with '%s'? %s.\n", stringA, stringB, yesOrNo(q1))
	if q2 {
		fmt.Printf("2: Is '%s' contained in '%s'? Yes, at index %d.\n", stringB, stringA, strings.Index(stringA, stringB))
		if len(q2matches) > 1 {
			fmt.Printf("   In fact, it happens %d times within '%s', at indices %v.\n", len(q2matches), stringA, q2matches)
		}
	} else {
		fmt.Printf("2: Is '%s' contained in '%s'? No.\n", stringB, stringA)
	}
	fmt.Printf("3: Does '%s' end with '%s'? %s.\n", stringA, stringB, yesOrNo(q3))
}
func yesOrNo(t bool) string {
	if t {
		return "Yes"
	}
	return "No"
}
