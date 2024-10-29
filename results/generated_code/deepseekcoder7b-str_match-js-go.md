Below is the Golang equivalent of your JavaScript code:

```go
package main

import (
	"fmt"
	"strings"
	"regexp"
)

func main() {
	var stringA = "tacoloco"
		var stringB = "co"
		
		// stringA starts with stringB
		q1 := strings.HasPrefix(stringA, stringB) 
		
		// stringA contains stringB
		q2 := strings.Index(stringA, stringB) != -1
		
		// multiple matches
		re := regexp.MustCompile(stringB)
		q2matches := re.FindAllStringIndex(stringA, -1)
				
		// stringA ends with stringB
		q3 := strings.HasSuffix(stringA, stringB) 
		
		fmt.Printf("1: Does '%s' start with '%s'? %s.\n", stringA, stringB, yesOrNo(q1))
		if q2 {
		    fmt.Printf("2: Is '%s' contained in '%s'? Yes, at index %d.\n", stringB, stringA, strings.Index(stringA, stringB))
		    if len(q2matches) > 1 {
				fmt.Printf("   In fact, it happens %d times within '%s', at indices %v.\n",len(q2matches), stringA, q2matches)
			}	    
		} else {
		    fmt.Printf("2: Is '%s' contained in '%s'? No.\n", stringB, stringA)
		}  
		fmt.Printf("3: Does '%s' end with '%s'? %s.\n", stringA, stringB, yesOrNo(q3))		
}
func yesOrNo(t bool) string {
	if t {
	    return "Yes"
	} 
	return "No"
}
```
Here is what the above Golang code does:

- The `strings` package in Go provides functions to perform operations similar to those provided by JavaScript's String object. This includes checking prefixes and suffixes with `HasPrefix()`, finding substrings with `Index()`, and counting occurrences of a substring with `Count()`. 
- For multiple matches you use the `regexp` package that provides functions for regular expressions matching.
- The helper function `yesOrNo()` is used to print "Yes" or "No". It takes a boolean as input and returns a string accordingly.

