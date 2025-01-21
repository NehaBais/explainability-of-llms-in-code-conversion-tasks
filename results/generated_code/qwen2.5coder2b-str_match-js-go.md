The equivalent Golang code for the above JavaScript function would be as follows:
```go
package main

import (
	"fmt"
)

func main() {
	stringA := "tacoloco"
	stringB := "co"

	q1 := stringA[:len(stringB)] == stringB

	matches := make([]int, 0)
	re := regexp.MustCompile(stringB)
	matches = re.FindAllStringIndex(stringA, -1)
	
	if len(matches) > 0 {
		fmt.Printf("   In fact, it happens %d times within '%s', at index%s\n", 
			len(matches), stringA, matches[0][0])
	}

	q3 := stringA[len(stringA)-len(stringB):] == stringB

	fmt.Printf("1: Does '%s' start with '%s'? %v\n", stringA, stringB, q1)
	fmt.Printf("2: Is '%s' contained in '%s'? %v\n", stringB, stringA, (~q2) || q2[0] == 0)
	fmt.Printf("3: Does '%s' end with '%s'? %v\n", stringA, stringB, q3)
}
```
Please note that the Go regexp.MustCompile() function is case-sensitive. If you want to make it case-insensitive, you can use the `regexp.IgnoreCase` flag as follows: `re := regexp.MustCompile(stringB, 0)`

