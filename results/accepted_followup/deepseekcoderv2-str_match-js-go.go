package main

import (
	"fmt"
	"regexp"
)

func main() {
	stringA := "tacoloco"
	stringB := "co"
	var q1, q2 int
	q2matches := []int{}

	// stringA starts with stringB
	q1 = 0
	if len(stringA) >= len(stringB) && stringA[:len(stringB)] == stringB {
		q1 = 1
	}

	// stringA contains stringB
	q2 = -1
	index := 0
	for index <= len(stringA)-len(stringB) {
		if stringA[index:index+len(stringB)] == stringB {
			q2 = index
			break
		}
		index++
	}

	// multiple matches
	q2multi := regexp.MustCompile(stringB)
	matches := q2multi.FindAllStringIndex(stringA, -1)
	for _, match := range matches {
		q2matches = append(q2matches, match[0])
	}

	// stringA ends with stringB
	q3 := false
	if len(stringA) >= len(stringB) && stringA[len(stringA)-len(stringB):] == stringB {
		q3 = true
	}

	fmt.Printf("1: Does '%s' start with '%s'? %s\n", stringA, stringB, yesNo(q1))
	if q2 != -1 {
		fmt.Printf("2: Is '%s' contained in '%s'? Yes, at index %d.\n", stringB, stringA, q2)
		if len(q2matches) > 1 {
			fmt.Printf("   In fact, it happens %d times within '%s', at indices %v.\n", len(q2matches), stringA, q2matches)
		}
	} else {
		fmt.Printf("2: Is '%s' contained in '%s'? No.\n", stringB, stringA)
	}
	fmt.Printf("3: Does '%s' end with '%s'? %s\n", stringA, stringB, yesNo(q3))
}

func yesNo(b int) string {
	if b == 1 {
		return "Yes."
	}
	return "No."
}
