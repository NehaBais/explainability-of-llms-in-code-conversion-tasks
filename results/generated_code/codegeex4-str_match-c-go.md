```go
package main

import (
	"fmt"
	"strings"
)

func startsWith(container string, target string) bool {
	clen := len(container)
	tlen := len(target)
	if clen < tlen {
		return false
	}
	return container[:tlen] == target
}

func endsWith(container string, target string) bool {
	clen := len(container)
	tlen := len(target)
	if clen < tlen {
		return false
	}
	return container[clen-tlen:] == target
}

func doesContain(container string, target string) []int {
	var locations []int
	for i := 0; i <= len(container)-len(target); i++ {
		if strings.Compare(container[i:i+len(target)], target) == 0 {
			locations = append(locations, i)
		}
	}
	return locations
}

func main() {
	fmt.Printf("Starts with Test ( Hello,Hell ) : %t\n", startsWith("Hello","Hell"))
	fmt.Printf("Ends with Test ( Code,ode ) : %t\n", endsWith("Code","ode"))
	fmt.Printf("Contains Test ( Google,msn ) : %v\n", doesContain("Google","oo"))
}
```
In the Go code:

1. `startsWith` checks if the first string starts with the second string.
2. `endsWith` checks if the first string ends with the second string.
3. `doesContain` returns the locations where the second string is found within the first string.

Please note that in Golang, a function can only return a single value or an array of values. Therefore, we cannot directly indicate whether a match was found or not like C, but instead it returns a boolean and prints an empty slice when no matches are found.

The optional requirements were also implemented:
1. The location of the match is printed for part 2.
2. Multiple occurrences of a string are handled in part 2 by returning all locations where the second string is found within the first string.
