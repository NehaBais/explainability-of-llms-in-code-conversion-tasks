The equivalent Golang code for the above C program is:

```go
package main

import (
	"fmt"
)

func startsWith(container string, target string) bool {
	return len(container) >= len(target) && container[:len(target)] == target
}

func endsWith(container string, target string) bool {
	return len(container) >= len(target) && container[len(container)-len(target):] == target
}

func doesContain(container string, target string) bool {
	return strings.Contains(container, target)
}

func main() {
	fmt.Println("Starts with Test ( Hello,Hell ) : ", startsWith("Hello", "Hell"))
	fmt.Println("Ends with Test ( Code,ode ) : ", endsWith("Code", "ode"))
	fmt.Println("Contains Test ( Google,msn ) : ", doesContain("Google", "msn"))
}
```

In this Go program, the functions `startsWith`, `endsWith`, and `doesContain` have similar functionalities as the original C code. The `contains` function from the `strings` package is used to determine if a string contains another string.

It's also important to note that the length of the input strings and the target substring need not be equal in any of these functions, unlike the C code.
