 Sure, here's the equivalent code in Golang:

```go
package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	fmt.Print("Enter the first integer: ")
	aStr, _ := reader.ReadString('\n')
	aStr = aStr[:len(aStr)-1] // Remove newline character
	a, _ := strconv.Atoi(aStr)

	fmt.Print("Enter the second integer: ")
	bStr, _ := reader.ReadString('\n')
	bStr = bStr[:len(bStr)-1] // Remove newline character
	b, _ := strconv.Atoi(bStr)

	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	} else if a == b {
		fmt.Printf("%d equals %d\n", a, b)
	} else if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
```

This Go code does the following:
1. Reads two integers from the user input.
2. Compares the two integers using `if` statements to check if one integer is less than, equal to, or greater than the other.
3. Prints a message based on the comparison result for each case.
