To convert the JavaScript code to Golang, you can use `fmt.Println` for printing messages and `strconv.Itoa` for converting integers to strings. Here's how the Go code would look:

```go
package main

import (
	"fmt"
)

func compare(a int, b int) {
	if a == b {
		fmt.Printf("%d equals %d\n", a, b)
	} else if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	} else {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}

func main() {
	var a int
	var b int

	fmt.Print("Enter the first integer: ")
	fmt.Scan(&a)

	fmt.Print("Enter the second integer: ")
	fmt.Scan(&b)

	compare(a, b)
}
```

### Explanation:
1. **Import Statements**: The `fmt` package is used for input/output operations.
2. **Define `compare` Function**: This function takes two integers as parameters and prints a message based on their relationship.
3. **Main Function**:
   - Prompts the user to enter two integers using `fmt.Print` and reads them into variables `a` and `b`.
   - Calls the `compare` function with the two integers.

This code will work in any Go environment, including Golang Playground.
