Here's how you can convert this JavaScript code to Golang:
```go
package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func compare(a, b int) {
	if a == b {
		fmt.Printf("%d equals %d\n", a, b)
	} else if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	} else {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}

func main() {
	reader := bufio.NewReader(os.Stdin)

	fmt.Print("Enter first integer: ")
	aStr, _ := reader.ReadString('\n')
	a, _ := strconv.Atoi(aStr[:len(aStr)-1])

	fmt.Print("Enter second integer: ")
	bStr, _ := reader.ReadString('\n')
	b, _ := strconv.Atoi(bStr[:len(bStr)-1])

	compare(a, b)
}
```
In the Golang version:
- The `bufio.NewReader` function is used to create a new buffered I/O reader for reading from standard input.
- We use the `ReadString` method of the reader to read input until it encounters a newline character (`'\n'`). This gives us the user's input as a string.
- The `Atoi` function from the `strconv` package is used to convert the input strings to integers.
- The main comparison logic is implemented in the `compare` function, which uses the same conditions as in the JavaScript version.
