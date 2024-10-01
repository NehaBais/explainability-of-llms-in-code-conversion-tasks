Answer: Here is the Golang code that implements the same logic as described in JavaScript:

```go
package main

import (
	"fmt"
)

func main() {
	stringA := "tacoloco"
	stringB := "co"

	// stringA starts with stringB
	q1 := stringA[:len(stringB)] == stringB

	// stringA contains stringB
	var q2 int
	if i := len(stringA) - len(stringB); i >= 0 {
		q2 = strings.Index(stringA[i:], stringB) + i
	}

	// multiple matches
	var q2matches []int
	for m := range regexp.MustCompile(stringB).FindAllStringSubmatchIndex(stringA, -1) {
		q2matches = append(q2matches, m[0])
	}

	// stringA ends with stringB
	q3 := strings.HasSuffix(stringA, stringB)

	fmt.Printf("1: Does '%s' start with '%s'? %v\n", stringA, stringB, q1)
	if q2 >= 0 {
		fmt.Printf("2: Is '%s' contained in '%s'? Yes, at index %d.\n", stringB, stringA, q2)
	} else {
		fmt.Println("2: Is '"+stringB+"' contained in '"+stringA+"?' No.")
	}
	if len(q2matches) > 1 {
		fmt.Printf("   In fact, it happens %d times within '%s', at indices%s\n", q2matches, stringA, strings.Join(strings.Split(fmt.Sprint(q2matches), ""), ", "))
	} else if len(q2matches) == 1 {
		fmt.Printf("   In fact, it happens once within '%s', at index %d\n", stringA, q2matches[0])
	}
	fmt.Printf("3: Does '%s' end with '%s'? %v\n", stringA, stringB, q3)
}
```
