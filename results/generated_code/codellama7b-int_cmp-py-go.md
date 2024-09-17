 Here is the equivalent code in Go:
```
 package main

import (
	"fmt"
	"os"
)

func main() {
	var a, b int
	fmt.Print("Enter value of a: ")
	fmt.Scanf("%d", &a)
	fmt.Print("Enter value of b: ")
	fmt.Scanf("%d", &b)

	if a < b {
		fmt.Println("a is less than b")
	} else if a == b {
		fmt.Println("a is equal to b")
	} else {
		fmt.Println("a is greater than b")
	}
}
```
