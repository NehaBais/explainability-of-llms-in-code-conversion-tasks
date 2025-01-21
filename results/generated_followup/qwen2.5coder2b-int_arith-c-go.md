The error occurred because the `os` package was not imported correctly. Additionally, the `strconv` package was imported incorrectly. The correct fix is to import both packages (`fmt`, `os`, `strconv`) at the beginning of the code. Here's the corrected and rewritten code:

```go
package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	var a, b int
	if len(os.Args) != 3 {
		fmt.Println("Usage: go run program.go num1 num2")
		return
	}

	b, err := strconv.Atoi(os.Args[1])
	if err != nil {
		fmt.Printf("Error parsing argument 1: %v\n", err)
		return
	}
	if b == 0 {
		fmt.Println("Error: b cannot be zero")
		return
	}

	a, err = strconv.Atoi(os.Args[2])
	if err != nil {
		fmt.Printf("Error parsing argument 2: %v\n", err)
		return
	}

	sum := a + b
	difference := a - b
	product := a * b
	quotient := a / b // truncates towards zero in Go
	remainder := a % b

	fmt.Println(fmt.Sprintf("a+b = %d", sum))
	fmt.Println(fmt.Sprintf("a-b = %d", difference))
	fmt.Println(fmt.Sprintf("a*b = %d", product))
	fmt.Println(fmt.Sprintf("a/b = %d", quotient)) // truncates towards zero in Go
	fmt.Println(fmt.Sprintf("a%%b = %d", remainder))
}
```
