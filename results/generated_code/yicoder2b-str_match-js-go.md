The equivalent code in Golang would look like this:

```Go
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
```
This version will first check if the string 'stringA' starts with 'stringB' by using the HasPrefix function in Go. It then checks if 'stringA' contains 'stringB' using the Contains function and if it does creates a regexp instance which is used to find all occurrences of 'stringB'. Finally, it checks if 'stringA' ends with 'stringB' by using the HasSuffix function.

Please note that Go and JavaScript have different handling for string comparison and regular expressions compared to each other. The reason why we use `HasPrefix` instead of `substring(0, stringB.length)` == stringB in JavaScript is due to difference between these two languages when it comes to string comparisons.
