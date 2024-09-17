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
	fmt.Print("Enter two integers separated by space: ")
	input, _ := reader.ReadString('\n')
	splitInput := strings.Split(input, " ")

	a, err1 := strconv.Atoi(splitInput[0])
	if err1 != nil {
		fmt.Println("Error occurred when parsing the first integer.")
		return
	}

	b, err2 := strconv.Atoi(splitInput[1])
	if err2 != nil {
		fmt.Println("Error occurred when parsing the second integer.")
		return
	}

	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	}

	if a == b {
		fmt.Printf("%d is equal to %d\n", a, b)
	}

	if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
```
