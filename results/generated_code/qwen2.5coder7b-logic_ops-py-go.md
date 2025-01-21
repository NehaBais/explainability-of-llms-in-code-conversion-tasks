Here is the equivalent code in Golang:

```go
package main

import "fmt"

func logic(a, b bool) {
	fmt.Println("a and b:", a && b)
	fmt.Println("a or b:", a || b)
	fmt.Println("not a:", !a)
}

func main() {
	logic(true, false)
}
```

In Golang:
- `&&` is the logical AND operator
- `||` is the logical OR operator
- `!` is the logical NOT operator
