In Go, we don't have built-in function to read integers from standard input. We need to use `os` package for this.

Here's the equivalent code in Golang:

```go
package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func compare(a int, b int) {
	if a == b {
		fmt.Println(a, "equals", b)
	}
	if a < b {
		fmt.Println(a, "is less than", b)
	}
	if a > b {
		fmt.Println(a, "is greater than", b)
	}
}

func main() {
	reader := bufio.NewReader(os.Stdin)

	fmt.Print("Enter first integer: ")
	firstInt, _ := reader.ReadString('\n')
	a, err := strconv.Atoi(firstInt)
	if err != nil {
		fmt.Println(err)
		return
	}

	fmt.Print("Enter second integer: ")
	secondInt, _ := reader.ReadString('\n')
	b, err := strconv.Atoi(secondInt)
	if err != nil {
		fmt.Println(err)
		return
	}

	compare(a, b)
}
```

This program reads two integers from the user and prints a message indicating whether they are equal, greater than or less than each other. Note that this code doesn't handle non-integer inputs, so it will print an error if you enter something that can't be converted to an integer. You could add additional error checking if you wanted to handle this situation more gracefully.
