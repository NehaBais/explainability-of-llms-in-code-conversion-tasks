```go
package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	fmt.Print("Enter value of a: ")
	a, _ := reader.ReadString('\n')
	a = strings.TrimSuffix(a, "\r\n")

	fmt.Print("Enter value of b: ")
	b, _ := reader.ReadString('\n')
	b = strings.TrimSuffix(b, "\r\n")

	ai, err1 := strconv.Atoi(a)
	bi, err2 := strconv.Atoi(b)

	if err1 != nil || err2 != nil {
		fmt.Println("Invalid input")
		return
	}

	if ai < bi {
		fmt.Println("a is less than b")
	} else if ai > bi {
		fmt.Println("a is greater than b")
	} else {
		fmt.Println("a is equal to b")
	}
}
```

Note: 
- The Go equivalent of Python's input() function is using bufio and strings package.
- strconv package is used for converting string to integer.
- The `ReadString()` method from the reader object reads a line of text from standard input, up until it reaches a newline character `\n`.
- The `TrimSuffix` method from the strings package removes the specified suffix from the end of the string.
