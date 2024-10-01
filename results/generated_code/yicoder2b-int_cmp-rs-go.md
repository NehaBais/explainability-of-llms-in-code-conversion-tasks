This code cannot be directly converted to Golang as it requires using `io::stdin()` and `io::stdout()` for reading the input from console. However, we can convert this requirement to Go. Here is how you can do it:

```Go
package main

import (
	"fmt"
	"strconv"
)

func main() {
	var a, b int
	fmt.Printf("Enter the first integer: ")
	if _, err := fmt.Scan(&a); err != nil {
		panic(err)
	}
	fmt.Printf("Enter the second integer: ")
	if _, err := fmt.Scan(&b); err != nil {
		panic(err)
	}
	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	} else if a == b {
		fmt.Printf("%d equals %d\n", a, b)
	} else if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
```
This Go code does the same thing as your Rust code: it gets two integers from the user, then prints whether the first integer is less than, equal to, or greater than the second integer.
