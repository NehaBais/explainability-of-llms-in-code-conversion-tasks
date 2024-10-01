Here is the equivalent code in Golang:

```golang
package main
import "fmt"
func logic(a bool, b bool) {
	fmt.Printf("a and b: %t\n", a && b)
	fmt.Printf("a or b: %t\n", a || b)
	fmt.Printf("not a: %t\n", !a)
}
```
This program defines a function logic that takes two boolean arguments and prints the result of "and", "or" and "not" operation on both arguments as well as first argument. Note that in Go, & indicates bitwise AND operator which is equivalent to 'and' keyword in python. Similarly || represents bitwise OR operator. Also ! represents the NOT operator.
