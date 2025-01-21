The error occurs because Golang does not support including unused packages (like "unicode/utf8") in the main package. The fix for this issue is to remove "unicode/utf8" from the import statement, as it's not used anywhere within the program. 

Here's a single-line explanation: The error occurred because Golang requires all imported packages to be used somewhere in your code. In this case, we're importing "strings" and "fmt", which are both used later on in the program. By removing the unused package reference, the error will be resolved and the program will compile successfully.

Here's a single-line fix: Remove the import statement for "unicode/utf8". Here's the corrected code block:
```go
package main

import  (
	 "fmt"
	 "strings"
)

func startsWith(container, target string) bool  {
	return strings.HasPrefix(container, target)
}

func endsWith(container, target string) bool  {
	return strings.HasSuffix(container, target)
}

func doesContain(container, target string) (bool, int)  {
	index  := strings.Index(container, target)

	if index == -1 {
		return false, 0
	}

	return true, index
}

func main()  {
	container  :=  "Hello"
	target  :=  "Hell"
	fmt.Printf("StartsWith Test  (%s,%s): %v\n", container, target, startsWith(container, target))

	container  =  "Code"
	target  =  "ode"
	fmt.Printf("EndsWith Test  (%s,%s): %v\n", container, target, endsWith(container, target))

	container  =  "Google"
	target  =  "msn"
	contains, index  := doesContain(container, target)
	fmt.Printf("Contains Test  (%s,%s): %v at index: %d\n", container, target, contains, index)
}
```
