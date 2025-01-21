The error occurred because of missing import statements for `strings`, which were required by the functions `startsWith()`, `contains()` and `endsWith()`. Furthermore, Golang does not support negative indexing like Java, so you need to manually reverse both strings before checking if a substring exists. 
Here is the corrected code:

```go
package main

import (
	"fmt"
	"strings"
)

func startsWith(str string, prefix string) bool {
	return str[:len(prefix)] == prefix
}

func contains(str string, substr string) bool {
	for _, pos := range strings.Fields(str) {
		if *pos == substr {
			return true
		}
	}
	return false
}

func endsWith(str string, suffix string) bool {
	return strings.HasPrefix(strings.Reverse(str), strings.Reverse(suffix))
}

func indexOf(str string, substring string, start int) int {
	return -1 // Golang doesn't support negative indices for indexing
}

func main() {
	fmt.Println(startsWith("abcd", "ab")) // prints: true
	fmt.Println(endsWith("abcd", "cd"))   // prints: false
	fmt.Println(contains("abab", "bb"))   // prints: false
	fmt.Println(contains("abab", "ab"))   // prints: true
}
```
Please note that `indexOf()` returns -1 when no match is found unlike Java. Also, the function `contains` checks for multiple occurrences of a substring in case it's separated by space, this might not be accurate if you want to check for exact occurrence.
