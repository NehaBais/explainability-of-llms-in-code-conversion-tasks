 Here's the equivalent code in Go:
```go
package main

import (
	"fmt"
	"io"
)

func compare(a, b int) {
	if a == b {
		fmt.Fprintf(io.Discard, "%d equals %d\n", a, b)
	} else if a < b {
		fmt.Fprintf(io.Discard, "%d is less than %d\n", a, b)
	} else if a > b {
		fmt.Fprintf(io.Discard, "%d is greater than %d\n", a, b)
	}
}

func main() {
	var a, b int
	fmt.Scanf("%d", &a)
	fmt.Scanf("%d", &b)
	compare(a, b)
}
```
The above code uses the `int` type for both arguments and returns a result of type `int`. The `fmt.Scanf` function is used to read input from the user, which is then passed as an argument to the `compare` function. The `compare` function compares the two integers using the standard comparison operators (`==`, `<`, and `>`) and prints the appropriate message using the `fmt.Fprintf` function.

Note that in Go, there is no need for type coercion as the compiler will automatically convert between types as needed. Additionally, the `io.Discard` object is used to discard the output from the `fmt.Fprintf` function to prevent it from being printed to the console.
