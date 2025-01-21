Sure! Below is the equivalent code in Go:

```go
package main

import (
	"fmt"
)

// printLogic takes two logical values and prints the results of "and" and "or" on both arguments,
// as well as "not" on the first argument.
func printLogic(a, b bool) {
	fmt.Printf("a and b is %v\n", a && b)
	fmt.Printf("a or b is %v\n", a || b)
	fmt.Printf("not a is %v\n", !a)
}

func main() {
	// Example usage
	printLogic(true, true)  // Output: a and b is true
	printLogic(true, false) // Output: a and b is false
	printLogic(false, true) // Output: a and b is false
	printLogic(false, false) // Output: a and b is false
}
```

### Explanation:
- The `package main` declaration specifies that this is the main package.
- The `import "fmt"` statement imports the `fmt` package for printing output to the console.
- The `printLogic` function takes two boolean arguments (`a` and `b`).
- Inside the function, the `&&`, `||`, and `!` operators are used to perform the logical operations. The `fmt.Printf` function is used to print the results of these operations.
- In the `main` function, we demonstrate the usage of `printLogic` with some example boolean values.

You can run this code in a Go environment to see the output.
