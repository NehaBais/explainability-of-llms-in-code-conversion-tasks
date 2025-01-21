package main

import (
	"fmt"
)

func main() {
	stringA := "tacoloco"
	stringB := "co"
	var q1, q2, q3 bool
	q1 = stringA[:len(stringB)] == stringB // start with stringB
	// replace the previous line with following for non-prefix checking 
	// q2 = stringA.Index(stringB) != -1  // contains stringB 
	if q2 { // if it does contain stringB
		q2multi := regexp.MustCompile(stringB)
		var m []int
		for _, match := range regexp.FindAllString(stringA, -1){
			m = append(m, match)
		}
	} else {
		m = make([]int, 0)
	}
	q3 = stringA[len(stringA)-len(stringB):] == stringB // ends with stringB
	fmt.Printf("1: Does '%s' start with '%s'? %v\n", stringA, stringB, q1)
	if q2 { 
		// in Go, you cannot print the location of matches directly as there is no equivalent to JavaScript indexOf method 
		// but you can print the locations as they will be stored in `m`
		fmt.Printf("2: Is '%s' contained in '%s'? Yes.\nIn fact, it happens %d times within '%s'. At index%s %v.\n", stringB, stringA, len(m), stringA)) // print the number of occurrences
	} else { 
		fmt.Printf("2: Is '%s' contained in '%s'? No.\n", stringB, stringA)) 
	}
	fmt.Printf("3: Does '%s' end with '%s'? %v\n", stringA, stringB, q3)))
}