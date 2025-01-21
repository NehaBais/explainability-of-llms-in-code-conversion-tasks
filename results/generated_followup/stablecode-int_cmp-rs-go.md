The error occurred due to unexpected parentheses `)` at end of statements on several lines. 

To fix it, we need to close all the open parentheses before reaching the end of a statement. 

Here's the corrected code in a single code block:
```go
package main

import (
	"fmt"
	"os"
	"bufio"
)

func main() {
	reader := bufio.NewReader(os.Stdin))

	var a, b int
	fmt.Println("Enter first integer:")
	_, err := fmt.Scanf("%d", &a))
	if err != nil {
		panic(err)
	}
	fmt.Println("Enter second integer:")
	_, err = fmt.Scanf("%d", &b))
	if err != nil {
		panic(err)
	}

	switch {
	case a < b:
		fmt.Printf("%d is less than %d\n", a, b))
	case a == b:
		fmt.Printf("%d equals %d\n", a, b))
	case a > b:
		fmt.Printf("%d is greater than %d\n", a, b))
	}
}
```
