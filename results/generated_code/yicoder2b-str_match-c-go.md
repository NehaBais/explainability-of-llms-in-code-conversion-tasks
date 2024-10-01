Below is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func startsWith(container string, target string) bool {
	if len(container) < len(target) {
		return false
	}
	return container[:len(target)] == target
}

func endsWith(container string, target string) bool {
	if len(container) < len(target) {
		return false
	}
	return container[len(container)-len(target):] == target
}

func doesContain(container string, target string) bool {
	return strings.Contains(container, target)
}

func main() {
	fmt.Printf("Starts with Test ( Hello,Hell ) : %t\n", startsWith("Hello", "Hell"))
	fmt.Printf("Ends with Test ( Code,ode ) : %t\n", endsWith("Code", "ode"))
	fmt.Printf("Contains Test ( Google,msn ) : %t\n", doesContain("Google", "msn"))
}
```
This program first checks if the first string starts with the second string in `startsWith` function and then returns a boolean value based on the comparison. It's equivalent to C code. Then it uses built-in functions from Go standard library for string operations like checking if a string contains another string, finding start or end of string etc. Finally, all these results are printed out with corresponding test case strings in `main` function.
