package main

import (
	"fmt"
	"strings"
)

func main() {
	stringA := "tacoloco"
	stringB := "co"

	// stringA starts with stringB
	q1 := stringA[:len(stringB)] == stringB

	// stringA contains stringB
	q2 := strings.Contains(stringA, stringB)

	// multiple matches
	q2matches := strings.Split(strings.ReplaceAll(stringA, stringB, ""), "")

	// stringA ends with stringB
	q3 := stringA[len(stringA)-len(stringB):] == stringB

	fmt.Println("1: Does '" + stringA + "' start with '" + stringB + "'? " + fmt.Sprint(q1))
	fmt.Println("2: Is '" + stringB + "' contained in '" + stringA + "'? " + fmt.Sprint(q2))
	if q2 && len(q2matches) > 1 {
		fmt.Println("   In fact, it happens " + fmt.Sprint(len(q2matches)) + " times within '" + stringA + "', at index" + fmt.Sprint(len(q2matches)) + " times " + fmt.Sprint(q2matches))
	}
	fmt.Println("3: Does '" + stringA + "' end with '" + stringB + "'? " + fmt.Sprint(q3))
}
