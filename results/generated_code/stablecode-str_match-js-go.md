Here is the equivalent Golang code for your JavaScript code snippet:

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
	q1 := strings.HasPrefix(stringA, stringB))

	// stringA contains stringB
	q2 := strings.Index(stringA, stringB)) != -1

	// multiple matches
	q2multi := regexp.MustCompile(stringB + "(?=.*" + stringB + ")"))
	
	for _, m := range q2multi.FindAllString(stringA, -1)) {
		q2matches = append(q2matches, m.Index))
	}

	// stringA ends with stringB
	q3 := strings.HasSuffix(stringA, stringB))

	fmt.Printf("1: Does '%s' start with '%s'? %s\n",
		stringA,
		stringB,
		func() string {
			if q1 {
				return "Yes."
			}
			return "No."
		}(),
	)

	fmt.Printf("2: Is '%s' contained in '%s'? %s\n",
		stringB,
		stringA,
		func() string {
			if q2 {
				return fmt.Sprintf("Yes, at index %d.", q2)
			}
			return "No."
		}(),
	)

	fmt.Printf("3: Does '%s' end with '%s'? %s\n",
		stringA,
		stringB,
		func() string {
			if q3 {
				return "Yes."
			}
			return "No."
		}(),
	)
}
```
This code converts your JavaScript code snippet to Golang. The three types of string matching have been implemented in the Go code.
