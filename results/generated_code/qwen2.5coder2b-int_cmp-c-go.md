```go
package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Print("Enter two integers: ")
	fmt.Scan(&a, &b)

	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	}

	if a == b {
		fmt.Printf("%d is equal to %d\n", a, b)
	}

	if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
```
The Golang code uses the fmt package to read input from the user and print output. The main function calls Scan() to read two integers from the user, then it performs the required comparisons using if-else statements and prints the results accordingly.
