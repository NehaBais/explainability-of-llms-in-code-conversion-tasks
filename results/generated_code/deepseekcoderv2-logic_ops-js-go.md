 Sure! Below is the equivalent Go code for the given JavaScript function:

```go
package main

import "fmt"

// logic takes two boolean arguments and performs logical operations.
func logic(a, b bool) {
	fmt.Println("a AND b:", a && b)
	fmt.Println("a OR b:", a || b)
	fmt.Println("NOT a:", !a)
}

func main() {
	logic(true, true)   // Example usage
	logic(true, false)  // Example usage
	logic(false, true)  // Example usage
	logic(false, false) // Example usage
}
```

This Go code defines a function `logic` that takes two boolean parameters and prints the results of "AND", "OR", and "NOT" operations on these arguments. The `main` function demonstrates how to call this logic function with different pairs of boolean values.
