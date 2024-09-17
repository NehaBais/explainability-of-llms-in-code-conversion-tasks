```go
package main

import "fmt"

func main() {
	var a, b int
	fmt.Println("Enter two integers:")
	fmt.Scanln(&a, &b)

	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	} else if a == b {
		fmt.Printf("%d equals %d\n", a, b)
	} else {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
```
