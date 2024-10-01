package main

import (
	"fmt"
	"regexp"
	"strings"
)

func main() {
	stringA := "tacoloco"
	stringB := "co"

	// stringA starts with stringB
	q1 := strings.HasPrefix(stringA, stringB)
	fmt.Printf("1: Does '%s' start with '%s'? %v\n", stringA, stringB, q1)

	// stringA contains stringB
	q2 := strings.Contains(stringA, stringB)
	if q2 {
		fmt.Print("2: Is '" + stringB + "' contained in '" + stringA + "'? Yes, at index ")

		re := regexp.MustCompile(stringB)
		matches := re.FindAllStringIndex(stringA, -1)

		for _, match := range matches {
			fmt.Printf("%d ", match[0])
		}

		if len(matches) > 1 {
			fmt.Printf("In fact, it happens %d times within '%s', at index%s\n", len(matches), stringA, getPluralSuffix(len(matches)))
		} else {
			fmt.Println(".")
		}
	} else {
		fmt.Println("2: Is '" + stringB + "' contained in '" + stringA + "'? No.")
	}

	// stringA ends with stringB
	q3 := strings.HasSuffix(stringA, stringB)
	fmt.Printf("3: Does '%s' end with '%s'? %v\n", stringA, stringB, q3)
}

func getPluralSuffix(count int) string {
	if count > 1 {
		return "es"
	}
	return ""
}
