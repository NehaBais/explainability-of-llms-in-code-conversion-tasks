Here's the equivalent Go code for your C program:

```go
package main

import "fmt"

func main() {
	var a, b int
	fmt.Scanf("%d %d", &a, &b)

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
In this Go code, we use `fmt.Scanf` function for reading the input from user instead of C's `scanf`. The rest of the logic and syntax are equivalent in both languages.

