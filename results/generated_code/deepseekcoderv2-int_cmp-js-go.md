 Sure, here's the equivalent Go code for the provided JavaScript functions. This Go code will prompt the user to input two integers and then compare them based on their values:

```go
package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Print("Enter the first integer: ")
	fmt.Scan(&a)
	fmt.Print("Enter the second integer: ")
	fmt.Scan(&b)

	if a == b {
		fmt.Println(a, "equals", b)
	}
	if a < b {
		fmt.Println(a, "is less than", b)
	}
	if a > b {
		fmt.Println(a, "is greater than", b)
	}
}
```

This Go code does the following:
1. Prompts the user to input two integers and stores them in variables `a` and `b`.
2. Uses if statements to compare the values of `a` and `b`:
   - If they are equal, it prints "equals".
   - If `a` is less than `b`, it prints "is less than".
   - If `a` is greater than `b`, it prints "is greater than".

This implementation does not include type checking as in the JavaScript version because Go's type system inherently ensures that variables are of a specific type, and comparison operators (`==`, `<`, `>`) only work between compatible types.
