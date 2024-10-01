package main

import (
	"fmt"
	"strings"
	"regexp"
)

func main() {
	stringA := "tacoloco"
	stringB := "co"
	var q1, q2, q2multi bool
	var m []int
	q1 = strings.HasPrefix(stringA, stringB)
	q2  = strings.Contains(stringA, stringB)
	if q2 {
		q2multi := regexp.MustCompile(stringB)
		for _, match := range regexp.FindAllString(stringA, -1){
			m = append(m, match)
		}
		q2 = true
	} else {
		m = make([]int, 0)
	}
	q3 = strings.HasSuffix(stringA, stringB)
	fmt.Printf("1: Does '%s' start with '%s'? %s\n", stringA, stringB, fmt.String(q1))
	if q2 {
		fmt.Printf("2: Is '%s' contained in '%s'? Yes, at index %d.\nIn fact, it happens %d times within '%s', at index%s %s.\n", stringB, stringA, m[0], len(m), stringA, fmt.String(q2)))
	} else {
		fmt.Printf("2: Is '%s' contained in '%s'? No.\n", stringB, stringA))
	}
	fmt.Printf("3: Does '%s' end with '%s'? %s\n", stringA, stringB, fmt.String(q3)))
}