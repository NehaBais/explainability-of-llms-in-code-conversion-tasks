```go
package main

import "fmt"

func main() {
	var a, b int

	fmt.Println("Enter two integers:")
	fmt.Scan(&a, &b)

	if a < b {
		fmt.Println(a, "is less than", b)
	} else if a == b {
		fmt.Println(a, "equals", b)
	} else {
		fmt.Println(a, "is greater than", b)
	}
}
```
