Here's the equivalent code in Go:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	var a int
	var b int

	_, err := fmt.Scanf("%d %d", &a, &b))
	if err != nil {
		fmt.Println("Error:", err)
		os.Exit(1)
	}

	switch {
	case a < b:
		fmt.Printf("%d is less than %d\n", a, b))
	case a == b:
		fmt.Printf("%d is equal to %d\n", a, b))
	case a > b:
		fmt.Printf("%d is greater than %d\n", a, b))
	}
}
```
In the above code, we first declare and initialize two integer variables `a` and `b`. 

Then we use `fmt.Scanf()` to get input from the user and store them in `a` and `b`. 

The `switch` statement checks the condition for each case separately, so that all three comparison operators (`<`, `==`, `>`) are used in the code. 

For each case, we print a message indicating whether the first integer is less than, equal to, or greater than the second integer.
