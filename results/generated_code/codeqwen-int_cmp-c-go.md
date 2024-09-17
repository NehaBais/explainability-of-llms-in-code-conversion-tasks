Here's the equivalent code in Golang:

```go
package main

import "fmt"

func main() {
	var A, b int
	fmt.Scan(&A, &b)

	if A < b {
		fmt.Printf("%d is less than %d\n", A, b)
	} else if A == b {
		fmt.Printf("%d is equal to %d\n", A, b)
	} else {
		fmt.Printf("%d is greater than %d\n", A, b)
	}
}
```

This code does the same thing as your C program - it gets two integers from the user and prints out a message based on the comparison between them. The only difference is that Golang uses `scanf` function to read input instead of `printf`. Also, unlike in C where you need to close main function explicitly by calling return 0, Go allows you to end your code without specifying any return statement at all.
