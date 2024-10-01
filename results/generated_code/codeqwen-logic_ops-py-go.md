Here is how you can convert the given Python code to Golang. 

```go
package main

import "fmt"

func logic(A bool, B bool) {
	fmt.Printf("A and B: %v\n", A && B)
	fmt.Printf("A or B: %v\n", A || B)
	fmt.Printf("Not A: %v\n", !A)
}

func main() {
	logic(true, true)
	logic(false, true)
}
```

In the Golang code above, we define a function `logic()` that takes in two parameters of type `bool`. The `fmt.Printf()` is used for printing out formatted strings along with their values. `&&` and `||` are Go's equivalent to Python's `and` and `or`, while `!` represents the `not` operation. Finally, we call the `logic()` function in the `main()` function to demonstrate its usage with different input values.
