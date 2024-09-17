 In Go, you can use the `fmt.Scan` function to get user input and compare two integers as below:

```go
package main

import (
	"fmt"
	"os"
	"bufio"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	// Get the first integer from user
	fmt.Print("Enter first number: ")
	_, err1 := fmt.Scan(&a)

	if err1 != nil {
		panic(err1)
	}

	// Get the second integer from user
	fmt.Print("Enter second number: ")
	_, err2 := fmt.Scan(&b)

	if err2 != nil {
		panic(err2)
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

In this code, we are using `bufio` package to read input from the standard input(console). The `Scan` function is used to get user inputs and store them in variables `a` and `b`. We then use an if-else ladder to compare the two integers. If a < b, it prints the message "a is less than b". Else, depending on the value of a (not necessarily 'a'), it prints the corresponding message.
