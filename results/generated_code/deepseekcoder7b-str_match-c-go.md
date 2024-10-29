The equivalent Golang code would be as follows. In the Go version, strings are handled differently than in C. The built-in `strings` package provides methods for many string manipulations such as searching, replacing and comparing.

Here's how to translate your provided C function into Golang:
```go
package main

import (
	"fmt"
	"strings"
)

func startsWith(container string, target string) bool {
	return strings.HasPrefix(container, target)
}

func endsWith(container string, target string) bool {
	return strings.HasSuffix(container, target)
}

func doesContain(container string, target string) bool {
	return strings.Contains(container, target)
}

func main() {
	fmt.Printf("Starts with Test ( Hello, Hell ) : %t\n", startsWith("Hello", "Hell"))
    fmt.Printf("Ends with Test   ( Code, ode ) : %t\n", endsWith("Code", "ode"))
	fmt.Printf("Contains Test   ( Google, msn ) : %t\n", doesContain("Google", "msn"))
}
```
The `strings` package's `HasPrefix()` method is used to check if the string starts with the target substring, similar for `HasSuffix()` and `Contains()`. All these methods return a boolean value instead of integer (0 or 1).

