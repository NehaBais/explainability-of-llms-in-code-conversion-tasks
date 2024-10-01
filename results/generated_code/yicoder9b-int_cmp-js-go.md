Below is your JavaScript code converted to Golang:

```golang
package main

import (
	"fmt"
)

// Function to compare two integers
func compare(a int, b int) {
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

func main() {
	// Test the function with various inputs to ensure it works as expected
	compare(5, 10)
	compare(20, 10)
	compare(15, 15)
}
```
The function `compare` takes two integer arguments and uses if-else statements to compare these numbers. The `fmt.Println` function is used for printing the result in the console as it is equivalent to JavaScript's `console.log()`.

This GoLang code does not provide a way to get input from user because Goroutines and channels are more suitable for handling user inputs, which is beyond this simple conversion task.
