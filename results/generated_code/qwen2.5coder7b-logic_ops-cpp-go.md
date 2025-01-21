Here's the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func printLogic(a, b bool) {
	fmt.Println("a and b is", a && b)
	fmt.Println("a or b is", a || b)
	fmt.Println("not a is", !a)
}

func main() {
	printLogic(true, false)
}
```
In the above code, `fmt.Println` is used to output to console. The boolean operations are done using the same operators (`&&`, `||`) as in C++.
