package main

import (
	"fmt"
	"regexp"
	"strings"
)

func main() {
	stringA := "tacoloco"
	stringB := "co"

	q1 := strings.HasPrefix(stringA, stringB)
	q2matches := []int{}
	r := regexp.MustCompile(stringB)
	for _, loc := range r.FindAllStringIndex(stringA, -1) {
		q2matches = append(q2matches, loc[0])
	}
	q3 := strings.HasSuffix(stringA, stringB)

	fmt.Printf("1: Does '%s' start with '%s'? %t\n", stringA, stringB, q1)
	fmt.Printf("2: Is '%s' contained in '%s'? %t\n", stringB, stringA, len(q2matches) > 0)
	if len(q2matches) > 1 {
		fmt.Printf("   In fact, it happens %d times within '%s', at index%s %v.\n", len(q2matches), stringA, strings.Repeat("es ", len(q2matches) > 1), q2matches)
	}
	fmt.Printf("3: Does '%s' end with '%s'? %t\n", stringA, stringB, q3)
}
