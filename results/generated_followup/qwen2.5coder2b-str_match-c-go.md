The error `undefined: strings` occurs because Go does not include the string package by default. To use the functions from the `strings` package, we need to import it at the beginning of our Go file.

To fix this issue, we add `import "fmt"` and `import "strings"` at the beginning of our Go code. Then, we can use the functions from the `strings` package in our `main` function.

Here's the corrected code:

```go
package main

import (
	"fmt"
	"strings"
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
