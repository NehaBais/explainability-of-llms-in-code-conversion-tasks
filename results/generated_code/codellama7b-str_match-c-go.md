To convert the given C code to Go, we can use the following:
```
package main

import "fmt"
import "strings"

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
	fmt.Println("Starts with Test ( Hello,Hell ) :", startsWith("Hello", "Hell"))
	fmt.Println("Ends with Test ( Code,ode ) :", endsWith("Code", "ode"))
	fmt.Println("Contains Test ( Google,msn ) :", doesContain("Google", "msn"))
}
```
Note that in Go, we use the `strings` package to perform string operations, which is similar to the C library for strings. We also use `fmt.Println` to print the output of the functions instead of using `printf`.
