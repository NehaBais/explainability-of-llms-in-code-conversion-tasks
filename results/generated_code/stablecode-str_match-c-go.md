Here is the equivalent code in Go:

```go
package main

import (
	"fmt"
	"strings"
)

func startsWith(container, target string) bool {
	if len(container) < len(target) {
		return false
	}
	return strings.HasPrefix(container, target)
}

func endsWith(container, target string) bool {
	if len(container) < len(target) {
		return false
	}
	return strings.HasSuffix(container, target)
}

func doesContain(container, target string) bool {
	return strings.Contains(container, target)
}

func main() {
	fmt.Printf("Starts with Test ( Hello,Hell ) : %t\n", startsWith("Hello","Hell")))

	fmt.Printf("Ends with Test ( Code,ode ) : %t\n", endsWith("Code","ode")))

	fmt.Printf("Contains Test ( Google,msn ) : %t\n", doesContain("Google","msn")))
}
```

This code performs the three types of string matching specified in the problem description:
1. Determines if the first string starts with the second string.
2. Determines if the first string contains the second string at any location.
3. Determines if the first string ends with the second string.

The `startsWith`, `endsWith`, and `doesContain` functions are used to perform these three types of matching, respectively. These functions use the `strings.HasPrefix`, `strings.HasSuffix`, and `strings.Contains` functions from the Go standard library to perform their respective matching operations.

The `main` function demonstrates how to use the `startsWith`, `endsWith`, and `doesContain` functions to perform the three types of string matching, respectively. The output of this program is printed to the console using the `fmt.Printf` function.
