In GoLang, you can implement the same logic as follows:

```go
package main

import (
	"fmt"
)

func logic(a bool, b bool) {
	fmt.Println("a AND b:", a && b)
	fmt.Println("a OR b:", a || b)
	fmt.Println("NOT a:", !a)
}

func main() {
	logic(true, true)
}
```

Please note that in GoLang you don't need to include parentheses around the logical operators (`&&`, `||`, `!`). They have higher precedence than arithmetic or relational operators, so they will be evaluated first. This is why we can directly use them inside `fmt.Println` without enclosing them in parentheses.
